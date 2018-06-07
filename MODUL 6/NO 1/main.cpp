#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>


void satu(){
    glColor3f(1,1,1);
    glPushMatrix();
    //glRotated(60,1,0,1);
    glScaled(1,5,1);
    glutWireCube(2);
    glPopMatrix();

    glPushMatrix();
    //glRotated(-60,1,0,1);
    glScaled(5,1,1);
    glutWireCube(2);
    glPopMatrix();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    satu();
    glFlush();
}

void kunci(unsigned char key, int x, int y)
{
    if (key== 'q'){
        exit(0);
        //break;
    }

    if (key=='a' || 'A'){
        glRotated(1,20,12,3);
    }

    if (key=='s' || 'S'){
        glRotated(1,1,10,12);
    }
    glutPostRedisplay();
}

void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-8.0,8.0,-8.0,8.0,-8.0,8.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,1.0);
    glColor3f(0.0,0.0,0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);
}
int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Kotak");
    glutDisplayFunc(display);
    glutKeyboardFunc(kunci);
    myinit();
    glutMainLoop();
    return 0;
}
