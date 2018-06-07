#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>


void tiga(){
    glColor3f(1,1,1);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex3f(5,0,0);
    glVertex3f(-5,0,0);
    glVertex3f(0,5,0);
    glVertex3f(0,-5,0);
    glVertex3f(0,0,5);
    glVertex3f(0,0,-5);
    glEnd();
    glPopMatrix();

    glColor3f(0,0,1);
    glPushMatrix();
    glutWireCube(1);
    glPopMatrix();

    glColor3f(0,1,0);
    glPushMatrix();
    glTranslated(5,0,0);
    glutWireTeapot(1);
    glPopMatrix();

    glColor3f(1,0,0);
    glPushMatrix();
    glTranslated(-5,0,0);
    glutWireSphere(1,10,10); //ukuran,slince = sudut
    glPopMatrix();

//    glColor3f(1,1,0);
//    glPushMatrix();
//    glTranslated(0,0,0);
//    glutWireCone(80,2,1,1); //lebar dibawah,tinggi,rusuk,tumpukan
//    glPopMatrix();

    glColor3f(0.0,0.0,1.0);
    glPushMatrix();
    glTranslated(0,0,5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.8, -0.8, 0.8);
    glVertex3f(0.8, -0.8, 0.8);
    glVertex3f(0.8, 0.8, 0.8);
    glVertex3f(-0.8, 0.8, 0.8);
    glEnd();
//belakang
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.8, -0.8, -0.8);
    glVertex3f(-0.8, -0.8, -0.8);
    glVertex3f(-0.8, 0.8, -0.8);
    glVertex3f(0.8, 0.8, -0.8);
    glEnd();
//kiri
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.8, -0.8, -0.8);
    glVertex3f(-0.8, -0.8, 0.8);
    glVertex3f(-0.8, 0.8, 0.8);
    glVertex3f(-0.8, 0.8, -0.8);
    glEnd();
//kanan
    glColor3f(0.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.8, -0.8, -0.8);
    glVertex3f(0.8, 0.8, -0.8);
    glVertex3f(0.8, 0.8, 0.8);
    glVertex3f(0.8, -0.8, 0.8);
    glEnd();
//bawah
    glColor3f(1.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.8, -0.8, 0.8);
    glVertex3f(-0.8, -0.8, 0.8);
    glVertex3f(-0.8, -0.8, -0.8);
    glVertex3f(0.8, -0.8, -0.8);
    glEnd();
//atas
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.8, 0.8, 0.8);
    glVertex3f(0.8, 0.8, 0.8);
    glVertex3f(0.8, 0.8, -0.8);
    glVertex3f(-0.8, 0.8, -0.8);
    glEnd();
    glPopMatrix();

    glColor3f(0,1,1);
    glPushMatrix();
    glTranslated(0,0,-5);
    glRotated(90,0,1,0);
    glutWireOctahedron();
    glPopMatrix();

    glColor3f(1,1,0);
    glPushMatrix();
    glTranslated(0,5,0);
    glRotated(-120,1,1,1);
    glutWireCone(1,2,20,12);
    glPopMatrix();

    glColor3f(1,0,1);
    glPushMatrix();
    glTranslated(0,-5,0);
    glutWireTetrahedron();
    glPopMatrix();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    tiga();
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
