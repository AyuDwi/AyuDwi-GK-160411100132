#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(3); //ketebalan titik
    glLineWidth(2); //ketebalan garis

    glBegin(GL_LINES);
    //PERSEGI BAWAH TENGAH
    glVertex2f (-1.5, -1.5); //TITIK
    glVertex2f (1.5, -1.5);

    glVertex2f (1.5, -1.5); //TITIK
    glVertex2f (1.5, -4.5);

    glVertex2f (1.5, -4.5); //TITIK
    glVertex2f (-1.5, -4.5);

    glVertex2f (-1.5, -4.5); //TITIK
    glVertex2f (-1.5, -1.5);
    glEnd();

    //PERSEGI KIRI BAWAH
    glBegin(GL_LINES);
    glVertex2f (-1.5, -4.5); //TITIK
    glVertex2f (-4.5, -4.5); //TITIK

    glVertex2f (-4.5, -4.5); //TITIK
    glVertex2f (-4.5, -1.5); //TITIK

    glVertex2f (-4.5, -1.5);
    glVertex2f (-1.5, -1.5); //TITIK

    glVertex2f (-1.5, -1.5); //TITIK
    glVertex2f (-1.5, -4.5); //TITIK
    glEnd();

    //PERSEGI KIRI TENGAH
    glBegin(GL_LINES);
    glVertex2f (-4.5, -1.5); //TITIK
    glVertex2f (-4.5, 1.5); //TITIK

    glVertex2f (-4.5, 1.5); //TITIK
    glVertex2f (-1.5, 1.5); //TITIK

    glVertex2f (-1.5, 1.5); //TITIK
    glVertex2f (-1.5, -1.5); //TITIK

    glVertex2f (-1.5, -1.5); //TITIK
    glVertex2f (-4.5, -1.5); //TITIK
    glEnd();

    //PERSEGI TENGAH
    glBegin(GL_LINES);
    glVertex2f (-1.5, 1.5); //TITIK
    glVertex2f (1.5, 1.5); //TITIK

    glVertex2f (1.5, 1.5); //TITIK
    glVertex2f (1.5, -1.5); //TITIK

    glVertex2f (1.5, -1.5); //TITIK
    glVertex2f (-1.5, -1.5); //TITIK

    glVertex2f (-1.5, -1.5); //TITIK
    glVertex2f (-1.5, 1.5); //TITIK
    glEnd();

     //PERSEGI KIRI ATAS
    glBegin(GL_LINES);
    glVertex2f (-1.5, 1.5); //TITIK
    glVertex2f (-4.5, 1.5); //TITIK

    glVertex2f (-4.5, 1.5); //TITIK
    glVertex2f (-4.5, 4.5); //TITIK

    glVertex2f (-4.5, 4.5); //TITIK
    glVertex2f (-1.5, 4.5); //TITIK

    glVertex2f (-1.5, 4.5); //TITIK
    glVertex2f (-1.5, 1.5); //TITIK
    glEnd();

    //PERSEGI TENGAH ATAS
    glBegin(GL_LINES);
    glVertex2f (-1.5, 1.5); //TITIK
    glVertex2f (-1.5, 4.5); //TITIK

    glVertex2f (-1.5, 4.5); //TITIK
    glVertex2f (1.5, 4.5); //TITIK

    glVertex2f (1.5, 4.5); //TITIK
    glVertex2f (1.5, 1.5); //TITIK

    glVertex2f (1.5, 1.5); //TITIK
    glVertex2f (-1.5, 1.5); //TITIK
    glEnd();

    //PERSEGI KANAN ATAS
    glBegin(GL_LINES);
    glVertex2f (1.5, 4.5); //TITIK
    glVertex2f (4.5, 4.5); //TITIK

    glVertex2f (4.5, 4.5); //TITIK
    glVertex2f (4.5, 1.5); //TITIK

    glVertex2f (4.5, 1.5); //TITIK
    glVertex2f (1.5, 1.5); //TITIK

    glVertex2f (1.5, 1.5); //TITIK
    glVertex2f (1.5, 4.5); //TITIK
    glEnd();

    //PERSEGI KANAN TENGAH
    glBegin(GL_LINES);
    glVertex2f (1.5, 1.5); //TITIK
    glVertex2f (4.5, 1.5); //TITIK

    glVertex2f (4.5, 1.5); //TITIK
    glVertex2f (4.5, -1.5); //TITIK

    glVertex2f (4.5, -1.5); //TITIK
    glVertex2f (1.5, -1.5); //TITIK

    glVertex2f (1.5, -1.5); //TITIK
    glVertex2f (1.5, 1.5); //TITIK
    glEnd();

    //PERSEGI KANAN BAWAH
    glBegin(GL_LINES);
    glVertex2f (1.5, -1.5); //TITIK
    glVertex2f (4.5, -1.5); //TITIK

    glVertex2f (4.5, -1.5); //TITIK
    glVertex2f (4.5, -4.5); //TITIK

    glVertex2f (4.5, -4.5); //TITIK
    glVertex2f (1.5, -4.5); //TITIK

    glVertex2f (1.5, -4.5); //TITIK
    glVertex2f (1.5, -1.5); //TITIK
    glEnd();

    //HURUF A TENGAH
    glColor3f (0.0, 0.0, 1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (0.7, -1.3); //TITIK
    glVertex2f (1.3, -1.3); //TITIK
    glVertex2f (0.3, 1.3); //TITIK
    glVertex2f (-0.3, 1.3); //TITIK
    glVertex2f (-1.3, -1.3); //TITIK
    glVertex2f (-0.7, -1.3); //TITIK
    glVertex2f (-0.3, -0.5); //TITIK
    glVertex2f (0.3, -0.5); //TITIK
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f (-0.2, 0.1); //TITIK
    glVertex2f (0.2, 0.1); //TITIK
    glVertex2f (0.01, 0.7); //TITIK
    glVertex2f (-0.01, 0.7); //TITIK
    glEnd();

    //ANGKA 5
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (2.0, 1.7); //TITIK
    glVertex2f (4.0, 1.7); //TITIK
    glVertex2f (4.0, 3.3); //TITIK
    glVertex2f (3.0, 3.3); //TITIK
    glVertex2f (3.0, 3.9); //TITIK
    glVertex2f (4.0, 3.9); //TITIK
    glVertex2f (4.0, 4.3); //TITIK
    glVertex2f (2.0, 4.3); //TITIK
    glVertex2f (2.0, 2.8); //TITIK
    glVertex2f (3.0, 2.8); //TITIK
    glVertex2f (3.0, 2.3); //TITIK
    glVertex2f (2.0, 2.3); //TITIK
    glEnd();

    //HURUF E
    glColor3f (0.0, 1.0, 1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-4.0, -1.3); //TITIK
    glVertex2f (-2.0, -1.3); //TITIK
    glVertex2f (-2.0, -0.6); //TITIK
    glVertex2f (-3.3, -0.6); //TITIK
    glVertex2f (-3.3, -0.2); //TITIK
    glVertex2f (-2.3, -0.2); //TITIK
    glVertex2f (-2.3, 0.2); //TITIK
    glVertex2f (-3.3, 0.2); //TITIK
    glVertex2f (-3.3, 0.6); //TITIK
    glVertex2f (-2.0, 0.6); //TITIK
    glVertex2f (-2.0, 1.3); //TITIK
    glVertex2f (-4.0, 1.3); //TITIK
    glEnd();
    glFlush(); //PERINTAH MULAI MENGGAMBAR
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-6.0,6.0,-6.0,6.0); //kiri kanan bawah atas
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,0.0); //cnyk warna background
    glColor3f (1.0, 1.0, 1.0); //warna pencil
}

int main(int argc, char* argv[]){ //fungsi pertama yang di run
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500); //ukurannya
    //glutInitWindowPosition(100,100);
    glutCreateWindow("Obyek Primitif");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();

    return 0;
}
