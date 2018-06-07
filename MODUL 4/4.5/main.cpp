#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void lingkaran(){
    glColor3f (1, 1, 0);
    float t = 0.0;
    glBegin(GL_POINTS);
    for(t = 0.0; t<2*3.14; t+=0.01){
        glVertex2f(7*cos(t),7*sin(t));
    }
    glEnd();
}

void lima(){
    //persegi besar
    for (int i=0; i<2; i++){
        glRotated(180,0,0,1.0);
        glColor3f(0,0,1);
        glRectf(-1,6,1,8);
    }

    for (int i=0; i<2; i++){
        glRotated(180,0,0,1.0);
        glColor3f(0,0,1);
        glRectf(-7,-4.5,-5,-2.5);
    }

    for (int i=0; i<2; i++){
        glRotated(180,0,0,1.0);
        glColor3f(0,0,1);
        glRectf(-7,2.5,-5,4.5);
    }

    for (int i=0; i<2; i++){
        glRotated(180,0,0,1.0);
        glColor3f(0,0,1);
        glRectf(-1,6,1,8);
    }

    //persegi kecil
    for (int i=0; i<6; i++){
        glRotated(180,0,0,1.0);
        glColor3f(0,0,1);
        glRectf(-7.7,-0.7,-6.2,0.7);
    }

     for (int i=0; i<6; i++){
        glRotated(180,0,0,1.0);
        glColor3f(0,0,1);
        glRectf(-4.2,-6.8,-2.7,-5.4);
    }

    for (int i=0; i<6; i++){
        glRotated(180,0,0,1.0);
        glColor3f(0,0,1);
        glRectf(-4.2,6.8,-2.7,5.4);
    }
}

void lines(){
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_LINES);
    glVertex2f(0,10);
    glVertex2f(0,-10);
    glVertex2f(10,0);
    glVertex2f(-10,0);
    glEnd();
}

void display(void){
    /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);
    lines();
    lima();
    lingkaran();
    glLoadIdentity();
    glFlush ();
}

void myinit(){
    glClearColor(0, 0, 0, 0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char *argv[]){
    glutInit(&argc,argv);
    glutInitWindowSize(800,800);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Transformasi Geometri");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
