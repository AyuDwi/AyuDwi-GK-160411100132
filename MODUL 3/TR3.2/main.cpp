#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif


void display(void)
{
    /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 1.0, 0.0);
    float t = 0.0;
    glLineWidth(2);
    glBegin(GL_LINES);
    for(t = -5.0; t<=5.0; t+=0.01)
    {
        glVertex3f ( -0.5+t*t,t, 0.0);
    }
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(-10.0,0.0,0.0);
    glVertex3f(10.0,0.0,0.0);
    glVertex3f(0.0,-10.0,0.0);
    glVertex3f(0.0,10.0,0.0);
    glEnd();
    glFlush ();
}
void kunci(unsigned char key, int x, int y)
{
    switch (key)
    {
    /* aplikasi berhenti ketika tombol q ditekan */
    case 27 :
    case 'q':
        exit(0);
        break;

    }
    glutPostRedisplay();
}
void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5.0,5.0,-5.0,5.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3f (1.0, 1.0, 0.0);
}
int main(int argc, char *argv[])
{
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Primitif");
    glutDisplayFunc(display);
    glutKeyboardFunc(kunci);
    myinit();
    glutMainLoop();
    return 0;
}
