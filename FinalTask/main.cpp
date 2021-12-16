#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
#define PI 3.14

GLfloat _angle1 = 0.0f;
GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
float _angle = 00.0f;
GLfloat p1 = 0.0f;
GLfloat p2 = 0.0f;
GLfloat s =0.05f;


void u(int value)
{
    if(p1>220)
    {
        p1=-50.0f;
    }
    p1 += s;
    glutPostRedisplay();
    glutTimerFunc(5,u,0);
}

void u1(int value)
{
    if(p2<-100)
    {
        p2=70.0f;
    }
    p2 -= s;
    glutPostRedisplay();
    glutTimerFunc(5,u1,0);
}

void sun()
{
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(255, 69, 0);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+10,y+80);
    }
    glEnd();
}

void plane()
{
    glPushMatrix();
    glScalef(0.4f,0.4f, 0.0f);
    glTranslatef(p1,0.0f,0.0f);
    glTranslatef(0.0f,140.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 205);
    glVertex2f(40.0f,85.0f);
    glVertex2f(55.0f,85.0f);
    glVertex2f(52.0f,89.0f);
    glVertex2f(40.0f,89.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 205);
    glVertex2f(43.0f,82.0f);
    glVertex2f(46.0f,82.0f);
    glVertex2f(48.0f,85.0f);
    glVertex2f(45.0f,85.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0 ,0, 205);
    glVertex2f(45.0f,89.0f);
    glVertex2f(48.0f,89.0f);
    glVertex2f(46.0f,92.0f);
    glVertex2f(43.0f,92.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0 ,205);
    glVertex2f(36.0f,90.0f);
    glVertex2f(40.0f,85.0f);
    glVertex2f(40.0f,89.0f);
    glVertex2f(38.0f,91.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192,192,192);
    glVertex2f(42.0f,86.0f);
    glVertex2f(44.0f,86.0f);
    glVertex2f(44.0f,88.0f);
    glVertex2f(42.0f,88.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192,192,192);
    glVertex2f(46.0f,86.0f);
    glVertex2f(48.0f,86.0f);
    glVertex2f(48.0f,88.0f);
    glVertex2f(46.0f,88.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(224,0,0);
    glVertex2f(52.0f,85.0f);
    glVertex2f(55.0f,85.0f);
    glVertex2f(52.0f,89.0f);
    glEnd();
    glPopMatrix();
}

void cloud1()
{
    glPushMatrix();
    glTranslatef(p2,0.0f,0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+30,y+85);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+25,y+85);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+27,y+88);
    }
    glEnd();
    glPopMatrix();
}

void cloud2()
{
    glPushMatrix();
    glTranslatef(p2,0.0f,0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+65,y+85);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+70,y+85);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+67,y+88);
    }
    glEnd();
    glPopMatrix();
}

void cloud3()
{
    glPushMatrix();
    glTranslatef(p2,0.0f,0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+75,y+90);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+80,y+90);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+77,y+92);
    }
    glEnd();
    glPopMatrix();
}

void drawSkyBottomHill(void)
{
    glBegin(GL_QUADS);
    glColor3ub(30, 86, 49);
    glVertex2f(0.0f, 52.0f);
    glVertex2f(100.0f, 70.0f);
    glVertex2f(100.0f, 69.0f);
    glVertex2f(100.0f, 50.0f);
    glVertex2f(89.0f, 72.0f);
    glVertex2f(99.0f, 60.0f);
    glVertex2f(81.0f, 65.0f);
    glVertex2f(78.0f, 60.0f);
    glVertex2f(0.0f, 62.0f);
    glEnd();
}


void drawWindmillTop(void)
{
    glPushMatrix();
    glTranslatef(54.5, 70.2, 0);
    glRotatef(_angle, 0, 0, 1);
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2i(0, 0);
    glVertex2i(4, 3.7);
    glVertex2i(0, -1);
    glVertex2i(0, 0);
    glVertex2i(-4, 3.5);
    glVertex2i(1, -2);
    glVertex2i(0, 0);
    glVertex2i(1, -4.8);
    glVertex2i(1, 1);
    glEnd();
    glPopMatrix();
}

void drawWindmil2Top(void)///Sha2
{
    glPushMatrix();
    glTranslatef(59.5, 70.6, 0);
    glRotatef(_angle, 0, 0, 1);
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2i(0, 0);
    glVertex2i(4, 3.7);
    glVertex2i(0, -1);
    glVertex2i(0, 0);
    glVertex2i(-4, 3.5);
    glVertex2i(1, -2);
    glVertex2i(0, 0);
    glVertex2i(1, -4.8);
    glVertex2i(1, 1);
    glEnd();
    glPopMatrix();
}

void drawWindmil3Top(void)///Sha3
{
    glPushMatrix();
    glTranslatef(64.3, 71.3, 0);
    glRotatef(_angle, 0, 0, 1);
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2i(0, 0);
    glVertex2i(4, 3.7);
    glVertex2i(0, -1);
    glVertex2i(0, 0);
    glVertex2i(-4, 3.5);
    glVertex2i(1, -2);
    glVertex2i(0, 0);
    glVertex2i(1, -4.8);
    glVertex2i(1, 1);
    glEnd();
    glPopMatrix();
}


void drawWindmillOne(void)
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(54, 61);
    glVertex2i(55, 61);
    glVertex2i(55, 70);
    glVertex2i(54, 70);
    glEnd();
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 153, 0); //249,215,28 //255,140,0
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.4;
        float x = r * cos(A) + 54.5;
        float y = r * sin(A) + 70.3;
        glVertex2f(x, y);
    }
    glEnd();
    drawWindmillTop();
}

void drawWindmillTwo(void)
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(59, 62);
    glVertex2i(60, 62);
    glVertex2i(60, 70);
    glVertex2i(59, 70);
    glEnd();
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 153, 0); //249,215,28 //255,140,0
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.4;
        float x = r * cos(A) + 59.5;
        float y = r * sin(A) + 70.4;
        glVertex2f(x, y);
    }
    glEnd();
    drawWindmil2Top();
}

void drawWindmillThree(void)
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(64, 63);
    glVertex2i(65, 63);
    glVertex2i(65, 71);
    glVertex2i(64, 71);
    glEnd();
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 153, 0); //249,215,28 //255,140,0
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.4;
        float x = r * cos(A) + 64.5;
        float y = r * sin(A) + 71.3;
        glVertex2f(x, y);
    }
    glEnd();
    drawWindmil3Top();
}

void updates(int value)
{
     // Windmill head rotation
    _angle += 2.0;
    if (_angle > 360)
    {
        _angle -= 360;
    }
    glutPostRedisplay();          // Update the GLUT
    glutTimerFunc(25, updates, 0); // Re-call it
}

void Durjoy()
{
    sun();
    cloud2();
    cloud3();
    plane();
    cloud1();
}

void Sky()
{
    glBegin(GL_POLYGON);
    glColor3ub(240, 210, 151);
    glVertex2f(0.0f,100.0f);
    glVertex2f(0.0f,52.0f);
    glVertex2f(100.0f,62.0f);
    glVertex2f(100.0f,100.0f);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    Sky();
    drawSkyBottomHill();
    drawWindmillOne();
    drawWindmillTwo();
    drawWindmillThree();
    Durjoy();
    glFlush();
}

void init()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    gluOrtho2D(0,100,-20,100);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1080,720);
    glutCreateWindow("Hoar");
    init();
    glutTimerFunc(5, u, 0);  //For Plain
    glutTimerFunc(5, u1, 0); //For cloud
    glutTimerFunc(25, updates, 0);//For Windmill
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
