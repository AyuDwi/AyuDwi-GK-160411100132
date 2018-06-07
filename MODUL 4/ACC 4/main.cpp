#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>

void myinit(){
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glColor3f(1.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-15.0, 15.0, -15.0, 15.0);
    glMatrixMode(GL_MODELVIEW);
}

void line(){
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_LINES);
        glVertex3f(-20.0,0.0,0.0);
        glVertex3f(20.0,0.0,0.0);
        glVertex3f(0.0,-20.0,0.0);
        glVertex3f(0.0,20.0,0.0);
    glEnd();
}

void kelopak (void){
//    glColor3f (1, 0.5, 0);
//    float t = 0.0;
//    glBegin(GL_POLYGON);
//    for(t = 0.0; t<6.28; t+=0.1){
//        if (t<=2){
//            glColor3f(1.0,0.5,1.0);
//        } else{
//            glColor3f(1.0,0.7,1.0);
//        }
//        glVertex2f(cos(t),sin(t)+0.2);
//    }
//    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0,1);
     for(float t =0.02; t<=2.7; t+=0.01){ //T=2.7 LEBAR UKURAN YG TERBUKA, SISI KANAN
        if (t<=2){
                glColor3f(1.5,0.8,1.0);
        } else{
                glColor3f(1.2,0.9,1.3);
            }
        glVertex2f(2*sin(t),-3*cos(t)+4.5);
        }
        glColor3f(1.0,0.7,1.0);
        glVertex2f(0,5.5);
        for (float t=0.32; t<=3.0; t+=0.01) //SISI KIRI
        {
            if (t<1.34){
                glColor3f(1.5,0.8,1.0);
            } else {
                glColor3f(1.2,0.9,1.3);
            }
        glVertex2f(-2*sin(t),3*cos(t)+4.5);
        }
        glEnd();
}

void bunga(){
    for (float i=0; i<5; i++){
        glRotated(72,0,0,1.0);
        kelopak();
    }
}

void display(void){
    /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    bunga();
   //trans();
    //kelopak();
    line();
    glFlush ();
}

void kunci(unsigned char key, int x, int y){
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

int main(int argc, char *argv[]){
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Primitif 3.4");
    glutDisplayFunc(display);
    glutKeyboardFunc(kunci);
    myinit();
    glutMainLoop();
    return 0;
}
