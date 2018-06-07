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

void dua(){
    for (int i=0; i<12; i++){
        glRotated(30,0,0,1.0);
        glColor3f(0,0,1);
        glRectf(-1,6,1,8);
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
    dua();
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
