#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

static GLfloat spin = 0.1;
int dx = 0;
int dy = 0;
int dz = 1;
bool cek = true;



void dua(){
    glPushMatrix();
    glRotatef(spin, dx, dy, dz);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-25.0, -25.0, 25.0, 25.0);
    glPopMatrix();
}

void tiga(){
    glPushMatrix();
    glRotatef(spin, dx, dy, dz);
    float t = 5;
    for (int i=0; i<7; i++)  //b
    {
        for (int j=0; j<7; j++)
        {
            if ((j+i)%2==0)
            {
                glColor3f(0,0,1);
            }
            else
            {
                glColor3f(1,1,0);
            }
            glRectf(j*t,i*t,t+j*t,t+i*t);
        }
    }
    glPopMatrix();
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    //dua();
    tiga();
    glutSwapBuffers();
}
void spinDisplay(void)
{
    spin = spin + 0.6;
    if (spin > 360.0)
        spin = spin - 360.0;
    glutPostRedisplay();
}

void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
}
void reshape(int w, int h)
{
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void keyboard(unsigned char key, int x, int y)
{
    if(key == 'p' || key == 'P')
    {
        if(cek == true)
        {
            glutIdleFunc(NULL);
            cek = false;
        }
        else
        {
            glutIdleFunc(spinDisplay);
            cek = true;
        }
    }
}

void mouse(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        dx=0, dy=0, dz=1;
        break;

    case GLUT_MIDDLE_BUTTON:
        dx=0, dy=1, dz=0;
        break;

    case GLUT_RIGHT_BUTTON:
        dx=1, dy=0, dz=0;
        break;
        break;
    default:
        break;
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (400, 400);
    glutInitWindowPosition (100, 100);
    glutCreateWindow (argv[0]);
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
