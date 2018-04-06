#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10);
    glLineWidth(8);

    for (int i=0; i <=5; i++){
        int a = i*1;
        if (i%2==0){
            glColor3f(0,0,0);
        }
        else{
            glColor3f(1,1,1);
        }
        glRectf(1+a,0,2+a,10);
    }

    /*for (int i=0; i <=1; i++)
    {
        int a = i*2;
        glColor3f (1.0, 1.0, 1.0);
        glRecti(1+a,2-a,3+a,4-a);
    }*/
    glFlush();
}
void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(1.0,6.0,0.0,10.0); // -x,+x,-y,+y
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,1.0,1.0);
}

int main(int argc, char* argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    //glutInitWindowPosition(100,100);
    glutCreateWindow("ZebraCros");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
