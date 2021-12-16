#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI 3.14159265358979323846


int i;
void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);

//enginattach
    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.05f, 0.4f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.25f, 0.4f);
    glEnd();


//window
    glBegin(GL_QUADS);
    glColor3f(01.0f, 1.0f, 1.0f);
    glVertex2f(0.1f, 0.3f);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.2f, 0.3f);
    glEnd();


//roof
     glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(0.03f, 0.45f);
     glVertex2f(0.03f, 0.4f);
     glVertex2f(0.27f, 0.4f);
     glVertex2f(0.27f, 0.45f);
     glEnd();

//enginfront
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.25f, 0.25f);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.75f, 0.0f);
    glVertex2f(0.75f, 0.25f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.72f, 0.25f);
    glVertex2f(0.72f, 0.0f);
    glVertex2f(0.75f, 0.0f);
    glVertex2f(0.75f, 0.25f);
    glEnd();

//smoke pipe
      glBegin(GL_QUADS);
     glColor3f(0.8f, 0.0f, 0.0f);
     glVertex2f(0.65f, 0.3f);
     glVertex2f(0.65f, 0.25f);
     glVertex2f(0.70f, 0.25f);
     glVertex2f(0.70f, 0.3f);
     glEnd();

//connection
     glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(-0.75f, 0.1f);
     glVertex2f(-0.75f, 0.05f);
     glVertex2f(0.05f, 0.05f);
     glVertex2f(0.05f, 0.1f);
     glEnd();



     glFlush();
}



int main(int argc, char** argv) {
     glutInit(&argc, argv);
     glutCreateWindow("Lab Task");
     glutInitWindowSize(320, 320);
     glutReshapeWindow(920,920);
     glutDisplayFunc(display);
     glutMainLoop();
     return 0;
}

