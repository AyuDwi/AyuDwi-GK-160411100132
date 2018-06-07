#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


void satu(){
    //bintang
    glBegin(GL_LINES);
    glVertex2f(-3,0.5);
    glVertex2f(0.0,8.0);
    glVertex2f(0.0,8.0);
    glVertex2f(2,3);
    glVertex2f(2,3);
    glVertex2f(1,3);
    glVertex2f(1,3);
    glVertex2f(0.0,5);
    glVertex2f(0.0,5);
    glVertex2f(-2,-0.5);
    glVertex2f(-2,-0.5);
    glVertex2f(-3,0.5);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    for (float i=0; i<5; i++){
        glRotated((72)*i,0,0,1);
        satu();
        glLoadIdentity();
    }
    glFlush();
}

void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;
    }
    glutPostRedisplay();
}

void SpecialKeys(int key, int x, int y)
{
    switch (key)
	{
		case GLUT_KEY_LEFT:
            glColor3f(1.0,1.0,0.0);
			break;
		case GLUT_KEY_RIGHT:
            glColor3f(0.0,1.0,0.0);
			break;
	}
    glutPostRedisplay();
}

void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-30.0,30.0,-30.0,30.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3f(1.0,0.0,0.0);
}


int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Bintang");
    myinit();
    glutDisplayFunc(display);
    glutSpecialFunc(SpecialKeys);
    glutKeyboardFunc(key);
    glutMainLoop();

    return 0;
}
