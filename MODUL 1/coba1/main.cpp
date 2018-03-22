#include <windows.h>

#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10);
    glLineWidth(7);

    glColor3f (0.0, 1.0, 5.0);
    glBegin(GL_POINTS);
    glVertex2f (0.0, 1.3); //TITIK ATAS
    glVertex2f (1.3, 0.0); //TITIK KANAN
    glVertex2f (0.0, -1.3); //TITIK BAWAH
    glVertex2f (-1.3, 0.0); //TITIK KIRI

    glEnd();

    glColor3f (0.0, 1.0, 0.0); //warna pencil
    glBegin(GL_LINES);
    glVertex2f (0.8, 0.0);
    glVertex2f (-0.8, 0.0);
    glEnd();

    glColor3f (1.0, 1.0, 0.0); //warna pencil
    glBegin(GL_LINE_STRIP);
    //glVertex2f (0.0, 0.0); //TITIK TENGAH
    glVertex2f (0.0, 0.8); //TITIK ATAS
    glVertex2f (0.8, 0.0); //TITIK KANAN
    glVertex2f (0.0, -0.8); //TITIK BAWAH
    glVertex2f (-0.8, 0.0); //TITIK KIRI
    glVertex2f (0.0, 0.8);
    glEnd();

    glColor3f (1.0, 1.0, 1.0); //warna pencil
    glBegin(GL_LINE_LOOP);
    //glVertex2f (0.0, 0.0); //TITIK TENGAH
    glVertex2f (1.0, 1.0); //TITIK ATAS
    glVertex2f (-1.0, 1.0); //TITIK KANAN
    glVertex2f (-1.0, -1.0); //TITIK BAWAH
    glVertex2f (1.0, -1.0); //TITIK KIRI

    glEnd();
    glFlush(); //PERINTAH MULAI MENGGAMBAR
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-2.0,2.0,-2.0,2.0); //kiri kanan bawah atas
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,0.0); //cnyk warna background
    glColor3f (1.0, 1.0, 0.0); //warna pencil
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
