#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <Math.h>

void myinit() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glColor3f(1.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-8.0, 8.0, -7.0, 8.0);
    glMatrixMode(GL_MODELVIEW);
}

void display(void){
    /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 1.0, 0.0);

    float x = 0.0;
    glLineWidth(2);
    glBegin(GL_POLYGON);

    for(x=-0.0; x<=3.00; x+=0.1){ //atas
        glVertex2f(4*cos(x),sin(x)*2+5.5); //4:bentuk linkaran melebar atau tidak 2=posisi lingkaran pada y
    }
    //glEnd();
    //glBegin(GL_POLYGON);

    for(x=-1.0; x<=2.00; x+=0.1){
        glVertex2f(-1.3*cos(x)-4*1.05,4*sin(x)*1.3); //elips kiri -posisi kurva,1.3 lengkungan 4 sin itu posisi elisnya tidur atau berdiri 1.3 sin lebarnya elips
    }
    //glEnd();
    //glBegin(GL_POLYGON);
    for(x=-1.0; x<=2.00; x+=0.1){
        glVertex2f(1.3*cos(x)+4*1.12,4*sin(x)*1.3); //elips kanan
    }

    float A = 0.8; //tinggi gelombang pada sumbu y
    float B = 3.2; // banyaknya gelombang
    float C = 0.2; // posisi dmulainya kurva
    float D = 2.5; //posisi
    float b= -2.6;
    for(x=-3.0; x<=4.7; x+=0.1) {
        glVertex2f( x*1.3-1.0,-(A*cos((B*x)+C)+D)+b);
    }

    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glRectf(-4.5,-4.4,4.5,5.8);

    //glColor3f (1.0, 1.0, 0.0);
    //glBegin(GL_LINE_STRIP); //kaki

    //glEnd();

    glBegin(GL_POLYGON); //MATA_Kanan
    glColor3f (1.0, 1.0, 1.0);
    for(x=0; x<=6.28; x+=0.01){
       glVertex2f(cos(x)*1.1+1.3,sin(x)*1.1+3.5); // *1.1 pada x merupakan bentuk ligkaran
    }
    glEnd();

    glBegin(GL_POLYGON); //MATA KIRI
    for(x=0; x<=6.28; x+=0.01){
        glVertex2f(cos(x)*1.1-1.3,sin(x)*1.1+3.5);
    }
    glEnd();

    glColor3f(0.0, 0.0, 0.0); // bola_mata_kanan
    glBegin(GL_POLYGON);
    for(x=0; x<=6.28; x+=0.01){
        glVertex2f(cos(x)/1.6 +1.3, sin(x)/1.6+3.5);
    }
    glEnd();

    glColor3f(0.0, 0.0, 0.0); // bola_mata_kiri
    glBegin(GL_POLYGON);
    for(x=0; x<=6.28; x+=0.01){
        glVertex2f(cos(x)/1.6 -1.3, sin(x)/1.6+3.5);
    }
    glEnd();


    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_TRIANGLES); //telinga_luar_kanan
    glVertex2f(2.6, 5.5);
    glVertex2f(5.5, 4.5);
    glVertex2f(5.0, 7.5);
    glEnd();

     glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_TRIANGLES); //telinga_luar_kiri
    glVertex2f(-2.6, 5.5);
    glVertex2f(-5.5, 4.5);
    glVertex2f(-5.0, 7.5);
    glEnd();


    glColor3f(1.0, 0.0, 0.0); //telinga_dalam_kanan
    glBegin(GL_TRIANGLES);
    glVertex2f(3.1, 5.3);
    glVertex2f(5.0, 4.6);
    glVertex2f(4.7, 6.6);
    glEnd();

     glColor3f(1.0, 0.0, 0.0); //telinga_dalam_kiri
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.1, 5.3);
    glVertex2f(-5.0, 4.6);
    glVertex2f(-4.7, 6.6);
    glEnd();


    glColor3f (0.0, 0.5, 0.5); //hidung
    glBegin(GL_POLYGON);
    for(x=0; x<=6.28; x+=0.01){
       glVertex2f(cos(x)/2,1*sin(x)+1.5); //1 = tinggi
    }
    glEnd();

    glColor3f(1.0, 1.0, 1.0); //MULUT pertama setenah lingkaran
    glBegin(GL_POLYGON);
    for(x=0; x<=3.14; x+=0.01){
        glVertex2f(cos(x)*2.5, -sin(x)*2.5); //-untuk membuat 1/2 lingkaran posisi kebawah.*2.5 lebarnya s
    }
    glEnd();

    glColor3f(1.0, 0.0, 0.0); //bagian merah setengah lingkaran
    glBegin(GL_POLYGON);
    for(x=0.2; x<=2.94; x+=0.01){
       glVertex2f(cos(x)*2.5, -sin(x)*2.5);
    }
    glEnd();

    glColor3f(1.0, 1.0, 1.0); //putih bawah
    glBegin(GL_POLYGON);
    for(x=1.0; x<=2.14; x+=0.01){
        glVertex2f(cos(x)*2.5, -sin(x)*2.5);
    }
    glEnd();
    glFlush ();
}

void kunci(unsigned char key, int x, int y){
    switch (key){
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
