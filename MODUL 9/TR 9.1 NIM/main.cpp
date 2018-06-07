#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

static GLfloat spin = 1.0;
boolean diff = true, spec = true, amb = true;
float theta = 0.0;
int dx = 0;
int dy = 0;
int dz = 1;
bool cek = false;

void satu()
{
    //angka1
        glPushMatrix(); // bawah
        glTranslated(-7,-3,0);
        glRotated(90,0,0,1);
        glScaled(4,1,1);
        glutSolidCube(1.2);
        glPopMatrix();

        glPushMatrix(); //kanan bawah
        glTranslated(-7,5,0);
        glRotated(90,0,0,1);
        glScaled(4,1,1);
        glutSolidCube(1.2);
        glPopMatrix();

    //angka 3
        glPushMatrix(); //atas
        glTranslated(-1.2,8,0);
        glScaled(4,1,1);
        glutSolidCube(1.2);
        glPopMatrix();

        glPushMatrix(); //bawah
        glTranslated(-1.2,-6,0);
        glScaled(4,1,1);
        glutSolidCube(1.2);
        glPopMatrix();

        glPushMatrix(); //kanan ats
        glTranslated(2.2,5,0);
        glRotated(90,0,0,1);
        glScaled(4,1,1);
        glutSolidCube(1.2);
        glPopMatrix();

        glPushMatrix(); //kanan bawah
        glTranslated(2.2,-3,0);
        glRotated(90,0,0,1);
        glScaled(4,1,1);
        glutSolidCube(1.2);
        glPopMatrix();

        glPushMatrix(); //tengah utk 8
        glTranslated(-1.2,1,0);
        glScaled(4,1,1);
        glutSolidCube(1.2);
        glPopMatrix();

    //angka2
        glPushMatrix(); //atas
        glTranslated(8,8,0);
        glScaled(4,1,1);
        glutSolidCube(1.2);
        glPopMatrix();

        glPushMatrix(); //kanan ats
        glTranslated(11.5,5,0);
        glRotated(90,0,0,1);
        glScaled(4,1,1);
        glutSolidCube(1.2);
        glPopMatrix();

        glPushMatrix(); //tengah utk 8
        glTranslated(8,1,0);
        glScaled(4,1,1);
        glutSolidCube(1.2);
        glPopMatrix();

        glPushMatrix(); //kiri bawah
        glTranslated(5,-3,0);
        glRotated(90,0,0,1);
        glScaled(4,1,1);
        glutSolidCube(1.2);
        glPopMatrix();

        glPushMatrix(); //bawah
        glTranslated(8,-6,0);
        glScaled(4,1,1);
        glutSolidCube(1.2);
        glPopMatrix();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    GLfloat mat_specular[] = { 0.7, 0.7, 0.7, 1.0 };
    GLfloat mat_shininess[] = { 10.0 };
    GLfloat mat_diffuse[] = { 0.7, 0.7, 0.7, 1.0 };
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glRotatef(theta, dx,dy,dz);
    satu();
    glFlush();
}

void reshape (int w, int h)
{
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    if (w <= h)
        glOrtho (-20, 20, -20*(GLfloat)h/(GLfloat)w,
                 20*(GLfloat)h/(GLfloat)w, - 10.0, 10.0);
    else
        glOrtho (-20*(GLfloat)w/(GLfloat)h, 3.5*(GLfloat)w/(GLfloat)h, -
                 20, 20, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void myinit()
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glColor3f(0.0, 0.0, 1.0);
    GLfloat light_position_diff[] = { -1.0, 1.0, 1.0, 0.0 };
    GLfloat diffuse_light[] = { 0.0, 0.0, 1.0, 1.0 };
    GLfloat light_position_spec[] = { 1.0, 1.0, 1.0, 0.0 };
    GLfloat specular_light[] = { 0.0, 1.0, 0.0, 1.0 };
    GLfloat ambient_light[] = { 0.9, 0.9, 0.9, 1.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, light_position_diff);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse_light);
    glLightfv(GL_LIGHT1, GL_POSITION, light_position_spec);
    glLightfv(GL_LIGHT1, GL_SPECULAR, specular_light);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    glShadeModel (GL_SMOOTH);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHT1);
}

void myIdle()
{
    theta +=0.03;
    display();
}

void keyboard(unsigned char key, int mouseX, int mouseY)
{
    if (key=='1')
    {
        if (amb == true)
        {
            GLfloat ambient_light[] = { 0.3, 0.3, 0.3, 1.0 };
            glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
            amb = false;
        }
        else
        {
            GLfloat ambient_light[] = { 0.9, 0.9, 0.9, 1.0 };
            glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
            amb = true;
        }
    }
    if (key=='2')
    {
        if (diff == true)
        {
            glDisable(GL_LIGHT0);
            diff = false;
        }
        else
        {
            glEnable(GL_LIGHT0);
            diff = true;
        }
    }
    if (key=='3')
    {
        if (spec == true)
        {
            glDisable(GL_LIGHT1);
            spec = false;
        }
        else
        {
            glEnable(GL_LIGHT1);
            spec = true;
        }
    }

    if (key=='4')
    {
        if (spec == true)
        {
            glDisable(GL_LIGHT2);
            spec = false;
        }
        else
        {
            glEnable(GL_LIGHT2);
            spec = true;
        }
    }

    if(key == 'p' || key == 'P')
    {
        if(cek == true)
        {
            glutIdleFunc(NULL);
            cek = false;
        }
        else
        {
            glutIdleFunc(myIdle);
            cek = true;
        }
    }

    if (key =='u')
    {
        glScaled(0.75,0.75,0);
    }

    if (key == 'U')
    {
        glScaled(1.5,1.5,0);
    }
    if (key == 'v')
    {
        spin = spin*0.5;
    }
    if (key == 'V')
    {
        spin = spin*2;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN){
                dx=0, dy=0, dz=1;
        }
        glutPostRedisplay();
        break;

    case GLUT_MIDDLE_BUTTON:
        if (state == GLUT_DOWN){
                dx=0, dy=1, dz=0;
        }
        glutPostRedisplay();
        break;

    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN){
                dx=1, dy=0, dz=0;
        }
        glutPostRedisplay();
        break;

    default:
        break;
    }
}

int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Kotak");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);
    glutIdleFunc(myIdle);
    myinit();
    glutMainLoop();
    return 0;
}
