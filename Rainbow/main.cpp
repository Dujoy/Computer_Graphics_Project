#include <windows.h>
#include <GL/glut.h>

void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.6f, 0.5f);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(-0.6f, 0.4f);


    glColor3ub(255, 153, 0);
    glVertex2f(-0.6f, 0.4f);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(0.2f,  0.3f);
    glVertex2f(-0.6f,  0.3f);



    glColor3ub(255, 255, 0);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(0.2f, 0.3f);
    glVertex2f(0.2f,  0.2f);
    glVertex2f(-0.6f,  0.2f);


    glColor3ub(0, 153, 0);
    glVertex2f(-0.6f, 0.2f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.2f,  0.1f);
    glVertex2f(-0.6f,  0.1f);


    glColor3ub(0, 0, 204);
    glVertex2f(-0.6f, 0.1f);
    glVertex2f(0.2f, 0.1f);
    glVertex2f(0.2f,  0.0f);
    glVertex2f(-0.6f,  0.0f);


    glColor3ub(115, 0, 153);
    glVertex2f(-0.6f, 0.f);
    glVertex2f(0.2f, 0.f);
    glVertex2f(0.2f,  -0.1f);
    glVertex2f(-0.6f,  -0.1f);


    glColor3ub(0, 0, 0);
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.55f,  -0.7f);
    glVertex2f(-0.6f,  -0.7f);

    glEnd();
    glFlush();
}



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Rainbow Flag");
    glutInitWindowSize(400, 300);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
