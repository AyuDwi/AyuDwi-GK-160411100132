#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>


void bangun(){
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

//    glColor3f(1.0,0.0,1.0);
//    glBegin(GL_POLYGON);
//    glVertex3f(-8.0, 0.0, -8.0);
//    glVertex3f(8.0, 0.0, -8.0);
//    glVertex3f(8.0, 0.0, 8.0);
//    glVertex3f(-8.0, 0.0, 8.0);
//    glEnd();

//belkang
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex3f(2.0, 0.0, 0.0);
    glVertex3f(8.0, 0.0, 0.0);
    glVertex3f(8.0, 4.0, 0.0);
    glVertex3f(2.0, 4.0, 0.0);
    glPopMatrix();
    glEnd();

    glColor3f(0.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex3f(4, 1.5, -0.1);
    glVertex3f(4.0, 1.0, -0.1);
    glVertex3f(3.5, 1.0, -0.1);
    glVertex3f(3.5, 2.5, -0.1);
    glVertex3f(4, 3, -0.1);
    glVertex3f(6, 3, -0.1);
    glVertex3f(6.5, 2.5, -0.1);
    glVertex3f(6.5, 1, -0.1);
    glVertex3f(6, 1, -0.1);
    glPopMatrix();
    glEnd();

    glColor3f(1.0,0.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex3f(6, 1, -0.101);
    glVertex3f(6, 1.5, -0.101);
    glVertex3f(4, 1.5, -0.101);
    glVertex3f(4.0, 1.0, -0.101);
    glPopMatrix();
    glEnd();

    glColor3f(1.0,0.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex3f(4, 2, -0.101);
    glVertex3f(4.5, 2.5, -0.101);
    glVertex3f(5.5, 2.5, -0.101);
    glVertex3f(6.0, 2.0, -0.101);
    glPopMatrix();
    glEnd();

//depan
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(2.0, 0.0, 8.0);
    glVertex3f(8.0, 0.0, 8.0);
    glVertex3f(8.0, 4.0, 8.0);
    glVertex3f(2.0, 4.0, 8.0);
    glEnd();

    glColor3f(1,0.5,0.2); //pintu
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex3f(3.8,0,8.01);
    glVertex3f(3.8,2.6,8.01);
    glVertex3f(6.2,2.6,8.01);
    glVertex3f(6.2,0,8.01);
    glEnd();
    glPopMatrix();

    glColor3f(1,0,0); //pintu
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex3f(4,0,8.02);
    glVertex3f(4,2.5,8.02);
    glVertex3f(6,2.5,8.02);
    glVertex3f(6,0,8.02);
    glEnd();
    glPopMatrix();

    glColor3f(1,1,0); //pintu
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex3f(4.5,1,8.03);
    glVertex3f(4.5,1.3,8.03);
    glVertex3f(4.8,1.3,8.03);
    glVertex3f(4.8,1,8.03);
    glEnd();
    glPopMatrix();

//kiri
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(2.0, 0.0, 0.0);
    glVertex3f(2.0, 0.0, 8.0);
    glVertex3f(2.0, 4.0, 8.0);
    glVertex3f(2.0, 4.0, 0.0);
    glEnd();

    glColor3f(1.0,0.0,0.0); //NIM 1
    glBegin(GL_POLYGON);
    glVertex3f(1.908, 0.5, 0.5);
    glVertex3f(1.908, 3.5, 0.5);
    glVertex3f(1.908, 3.5, 1.5);
    glVertex3f(1.908, 0.5, 1.5);
    glEnd();

    glColor3f(1.0,0.0,0.0); //NIM 3
    glBegin(GL_POLYGON);
    glVertex3f(1.908, 0.5, 2.5);
    glVertex3f(1.908, 3.5, 2.5);
    glVertex3f(1.908, 3.5, 4.5);
    glVertex3f(1.908, 0.5, 4.5);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.809, 1.2, 1.6);
    glVertex3f(1.809, 1.2, 3.5);
    glVertex3f(1.809, 1.7, 3.5);
    glVertex3f(1.809, 1.7, 1.6);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.809, 2.2, 1.6);
    glVertex3f(1.809, 2.2, 3.5);
    glVertex3f(1.809, 2.8, 3.5);
    glVertex3f(1.809, 2.8, 1.6);
    glEnd();

    glColor3f(1.0,0.0,0.0); //NIM 2
    glBegin(GL_POLYGON);
    glVertex3f(1.908, 0.5, 5.5);
    glVertex3f(1.908, 3.5, 5.5);
    glVertex3f(1.908, 3.5, 7.5);
    glVertex3f(1.908, 0.5, 7.5);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.809, 2.2, 5.5);
    glVertex3f(1.809, 2.2, 6.7);
    glVertex3f(1.809, 2.8, 6.7);
    glVertex3f(1.809, 2.8, 5.5);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.809, 1.2, 6.4);
    glVertex3f(1.809, 1.2, 7.7);
    glVertex3f(1.809, 1.8, 7.7);
    glVertex3f(1.809, 1.8, 6.4);
    glEnd();

////kanan
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(8.0, 0.0, 0.0);
    glVertex3f(8.0, 4.0, 0.0);
    glVertex3f(8.0, 4.0, 8.0);
    glVertex3f(8.0, 0.0, 8.0);
    glEnd();

    glColor3f(1.0,0.0,0.0); //jendela
    glBegin(GL_POLYGON);
    glVertex3f(8.01, 3, 4.0);
    glVertex3f(8.01, 2, 4.0);
    glVertex3f(8.01, 2, 3.0);
    glVertex3f(8.01, 3, 3.0);
    glEnd();

    glColor3f(1.0,1.0,0.0); //jendela
    glBegin(GL_POLYGON);
    glVertex3f(8.01, 3, 6.0);
    glVertex3f(8.01, 2, 6.0);
    glVertex3f(8.01, 2, 5.0);
    glVertex3f(8.01, 3, 5.0);
    glEnd();

    glColor3f(1.0,0.0,1.0); //jendela
    glBegin(GL_POLYGON);
    glVertex3f(8.01, 3, 1.0);
    glVertex3f(8.01, 2, 1.0);
    glVertex3f(8.01, 2, 2.0);
    glVertex3f(8.01, 3, 2.0);
    glEnd();


////bawah
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(2.0, 0.0, 0.0);
    glVertex3f(8.0, 0.0, 0.0);
    glVertex3f(8.0, 0.0, 8.0);
    glVertex3f(2.0, 0.0, 8.0);
    glEnd();
////atas
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(2.0, 4.0, 0.0);
    glVertex3f(8.0, 4.0, 0.0);
    glVertex3f(8.0, 4.0, 8.0);
    glVertex3f(2.0, 4.0, 8.0);
    glEnd();
    glFlush();

    glColor3f(1,0.5,0.2); //atap belakang
    glBegin(GL_POLYGON);
    glPushMatrix();
    glVertex3f(0,4,0);
    glVertex3f(2,6,0);
    glVertex3f(8,6,0);
    glVertex3f(10,4,0);
    glEnd();
    glPopMatrix();

    glColor3f(1,0.5,0.2); //atap depan
    glBegin(GL_POLYGON);
    glPushMatrix();
    glVertex3f(0,4,8);
    glVertex3f(2,6,8);
    glVertex3f(8,6,8);
    glVertex3f(10,4,8);
    glEnd();
    glPopMatrix();

    glColor3f(1,0.5,0.2); //atap kiri
    glBegin(GL_POLYGON);
    glPushMatrix();
    glVertex3f(0,4,0);
    glVertex3f(2,6,0);
    glVertex3f(2,6,8);
    glVertex3f(0,4,8);
    glEnd();
    glPopMatrix();

    glColor3f(1,0.5,0.2); //atap kanan
    glBegin(GL_POLYGON);
    glPushMatrix();
    glVertex3f(10,4,0);
    glVertex3f(8,6,0);
    glVertex3f(8,6,8);
    glVertex3f(10,4,8);
    glEnd();
    glPopMatrix();

    glColor3f(1,0.5,0.2); //atap atas
    glBegin(GL_POLYGON);
    glPushMatrix();
    glVertex3f(2,6,0);
    glVertex3f(8,6,0);
    glVertex3f(8,6,8);
    glVertex3f(2,6,8);
    glEnd();
    glPopMatrix();

    glColor3f(1,0.5,0.2); //atap bawah
    glBegin(GL_POLYGON);
    glPushMatrix();
    glVertex3f(0,4,0);
    glVertex3f(10,4,0);
    glVertex3f(10,4,8);
    glVertex3f(0,4,8);
    glEnd();
    glPopMatrix();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    bangun();
    glFlush();
}

void kunci(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'q':
        exit(0);
        break;

    case 'a':
        glRotated(0,0,0,1);

    case 's':
        glRotated(1,0,0,0);
    case 'd':
        glRotated(1,4,50,-0.1);
    }
    glutPostRedisplay();
}

void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-15.0,18.0,-5.0,10.0,-10.0,10.0);
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
