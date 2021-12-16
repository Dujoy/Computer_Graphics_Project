#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
#define PI 3.14
int skyColorX= 240;
int skyColorY= 210;
int skyColorZ= 151;
int sunColorX= 247;
int sunColorY= 233;
int sunColorZ= 25;
int waterColorX= 91;
int waterColorY= 191;
int waterColorZ= 227;
int groundColorX = 0;
int groundColorY= 163;
int groundColorZ= 0;
int hillColorX= 30;
int hillColorY= 86;
int hillColorZ= 49;
int house1Wall1X= 128;
int house1Wall1Y= 128;
int house1Wall1Z= 0;
int house1Wall2X= 236;
int house1Wall2Y= 224;
int house1Wall2Z= 207;
int house1RoofX= 224;
int house1RoofY= 146;
int house1RoofZ= 0;
int house1Window1X= 36;
int house1Window1Y= 0;
int house1Window1Z= 0;
int house1Window2X= 36;
int house1Window2Y= 0;
int house1Window2Z= 0;
int house2Wall1X= 128;
int house2Wall1Y= 128;
int house2Wall1Z= 0;
int house2Wall2X= 236;
int house2Wall2Y= 224;
int house2Wall2Z= 207;
int house2RoofX= 224;
int house2RoofY= 146;
int house2RoofZ= 0;
int house2Window1X= 36;
int house2Window1Y= 0;
int house2Window1Z= 0;
int house2Window2X= 36;
int house2Window2Y= 0;
int house2Window2Z= 0;
int lowerPiller1X= 209;
int lowerPiller1Y= 205;
int lowerPiller1Z= 210;
int lowerPiller2X= 209;
int lowerPiller2Y= 205;
int lowerPiller2Z= 210;
int lowerPiller3X= 209;
int lowerPiller3Y= 205;
int lowerPiller3Z= 210;
int lowerPiller4X= 209;
int lowerPiller4Y= 210;
int lowerPiller4Z= 205;
int upperPiller1X= 209;
int upperPiller1Y= 205;
int upperPiller1Z= 210;
int upperPiller2X= 209;
int upperPiller2Y= 205;
int upperPiller2Z= 210;
int upperPiller3X= 209;
int upperPiller3Y= 205;
int upperPiller3Z= 210;
int upperPiller4X= 209;
int upperPiller4Y= 210;
int upperPiller4Z= 205;
GLfloat _angle1 = 0.0f;
GLfloat _move1 = 0.0f;
GLfloat _angle12 = 0.0f;
GLfloat _move2 = 0.0f;
GLfloat _move3 = 0.0f;
GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
float rain = 0.0f;
bool rainyDay = false;
float _angle = 00.0f;
GLfloat p1 = 0.0f;
GLfloat p2 = 0.0f;
GLfloat s =0.05f;
void update(int value) ///Ah7
{
    //Boat 2 Right to Left
    position -= 0.3;
    if(position<-55.0){
        position=120.0f;
    }

    //Boat 1 Left to Right
    position1 += 0.3;
    if(position1>140.0){
      position1 = -30.0f;
    }

    //Boat 3 Left to Right
    position2 += 0.2;
    if(position2>120.0){
      position2 = -90.0f;
    }

    glutPostRedisplay();

    glutTimerFunc(20,update,0);
}
//Rain
void Rain(int value)///Ah5
{

    if (rainyDay)
    {
        rain += 0.01f;
        glLineWidth(2.0);
        glBegin(GL_POINTS);
        for (int i = 0; i <= 500; i++)
        {
            int x = rand();
            int y = rand();
            x %= 120;
            y %= 120;
            glBegin(GL_LINES);
            glColor3f(1.0, 1.0, 1.0);
            glVertex2d(x, y - 20);
            glVertex2d(x + 1, y - 16);
            glEnd();
       }
        glEnd();
    }
}
//Boat1
void Boat1()///Ah2
{
    glPushMatrix();
    glScalef(0.7f,0.7f, 0.0f);
    glTranslatef(position1, 0.0f, 0.0f);
    glTranslatef(0.0f,-7.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(71, 72, 76);
    glVertex2f(2.8f,8.0f);
    glVertex2f(7.0f,0.0f);
    glVertex2f(20.0f,0.0f);
    glVertex2f(24.2f,8.0f);
    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(3.0f,8.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(3.0f,8.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,215,0);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,12.0f);
    glVertex2f(10.0f,12.0f);
    glEnd();
    glPopMatrix();


}
//Boat2
void Boat2()///Ah3
{
    glPushMatrix();
    glScalef(0.7f,0.7f, 0.0f);
    glTranslatef(position, 0.0f, 0.0f);
    glTranslatef(30.0f,-27.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(71, 72, 76);
    glVertex2f(2.8f,8.0f);
    glVertex2f(7.0f,0.0f);
    glVertex2f(20.0f,0.0f);
    glVertex2f(24.2f,8.0f);
    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(3.0f,8.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(3.0f,8.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(65,105,225);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,12.0f);
    glVertex2f(10.0f,12.0f);
    glEnd();
    glPopMatrix();


}
//Boat3
void Boat3()///Ah4
{
    glPushMatrix();
    glScalef(0.7f,0.7f, 0.0f);
    glTranslatef(position2, 0.0f, 0.0f);
    glTranslatef(60.0f,10.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(71, 72, 76);
    glVertex2f(2.8f,8.0f);
    glVertex2f(7.0f,0.0f);
    glVertex2f(20.0f,0.0f);
    glVertex2f(24.2f,8.0f);
    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(3.0f,8.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(3.0f,8.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(165,42,42);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,12.0f);
    glVertex2f(10.0f,12.0f);
    glEnd();
    glPopMatrix();


}

//Boat4
void Boat4()///Ah1
{
    glPushMatrix();
    glScalef(0.35f,0.35f, 0.0f);
    glTranslatef(152.0f,145.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(71, 72, 76);
    glVertex2f(2.8f,8.0f);
    glVertex2f(7.0f,0.0f);
    glVertex2f(20.0f,0.0f);
    glVertex2f(24.2f,8.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(3.0f,8.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(3.0f,8.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,12.0f);
    glVertex2f(10.0f,12.0f);
    glEnd();
    glPopMatrix();


}

void u(int value)///Kr8
{
    if(p1>220)
    {
        p1=-50.0f;
    }
    p1 += s;
    glutPostRedisplay();
    glutTimerFunc(5,u,0);
}

void u1(int value)///Kr7
{
    if(p2<-100)
    {
        p2=70.0f;
    }
    p2 -= s;
    glutPostRedisplay();
    glutTimerFunc(5,u1,0);
}

void sun()///Kr1
{
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(sunColorX, sunColorY, sunColorZ);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+10,y+80);
    }
    glEnd();
}

void plane()///kr2
{
    glPushMatrix();
    glScalef(0.4f,0.4f, 0.0f);
    glTranslatef(p1,0.0f,0.0f);
    glTranslatef(0.0f,140.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(36,0,0);
    glVertex2f(40.0f,85.0f);
    glVertex2f(55.0f,85.0f);
    glVertex2f(52.0f,89.0f);
    glVertex2f(40.0f,89.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(36,0,0);
    glVertex2f(43.0f,82.0f);
    glVertex2f(46.0f,82.0f);
    glVertex2f(48.0f,85.0f);
    glVertex2f(45.0f,85.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(36,0,0);
    glVertex2f(45.0f,89.0f);
    glVertex2f(48.0f,89.0f);
    glVertex2f(46.0f,92.0f);
    glVertex2f(43.0f,92.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(36,0,0);
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

void cloud1()///kr3
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

void cloud2()///kr4
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

void cloud3()///kr5
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
void drawSkyBottom(void)///Sha4
{

    glBegin(GL_QUADS);
    glColor3ub(hillColorX, hillColorY, hillColorZ);
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


void drawWindmillTop(void)///Sha1
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
void updates(int value)///Sha6
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


void Village()///Kr6
{
    //Ground
    glBegin(GL_QUADS);
	glColor3ub(groundColorX, groundColorY, groundColorZ);
	glVertex2f(60.0f, 58.0f);
	glVertex2f(100.0f, 62.0f);
	glVertex2f(100.0f, 44.0f);
	glVertex2f(64.0f, 44.0f);
	glEnd();

	//Bank
	glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(60.0f,58.0f);
    glVertex2f(60.0f,56.0f);
    glVertex2f(62.0f,44.0f);
    glVertex2f(64.0f,44.0f);
    glEnd();

    //House1
    glBegin(GL_POLYGON);
    glColor3ub(house1Wall1X,house1Wall1Y,house1Wall1Z);
    glVertex2f(65.0f,45.0f);
    glVertex2f(70.0f,45.0f);
    glVertex2f(70.0f,50.0f);
    glVertex2f(67.5f,53.0f);
    glVertex2f(65.0f,50.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(house1RoofX, house1RoofY,house1RoofZ);
    glVertex2f(67.0f,53.0f);
    glVertex2f(70.0f,50.0f);
    glVertex2f(78.0f,50.0f);
    glVertex2f(75.0f,53.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(house1Wall2X, house1Wall2Y, house1Wall2Z);
    glVertex2f(70.0f,45.0f);
    glVertex2f(77.0f,46.0f);
    glVertex2f(77.0f,50.0f);
    glVertex2f(70.0f,50.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(house1Window1X, house1Window1Y, house1Window1Z);
    glVertex2f(71.0f,47.0f);
    glVertex2f(73.0f,47.0f);
    glVertex2f(73.0f,49.0f);
    glVertex2f(71.0f,49.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(house1Window2X, house1Window2Y, house1Window2Z);
    glVertex2f(74.0f,47.0f);
    glVertex2f(76.0f,47.0f);
    glVertex2f(76.0f,49.0f);
    glVertex2f(74.0f,49.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,36);
    glVertex2f(66.5f,49.5f);
    glVertex2f(66.5f,46.0f);
    glVertex2f(68.0f,46.0f);
    glVertex2f(68.0f,49.5f);
    glEnd();

    //Tree1
    glBegin(GL_QUADS);
    glColor3ub(163,106,0);
    glVertex2f(80.0f,45.0f);
    glVertex2f(80.8f,45.0f);
    glVertex2f(80.8f,50.0f);
    glVertex2f(80.0f,50.0f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(0, 224, 0);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+79,y+50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(0, 224, 0);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+78,y+53);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(0, 224, 0);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+81,y+52);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(0, 224, 0);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+80,y+55);
    }
    glEnd();

    //Tree2
    glBegin(GL_QUADS);
    glColor3ub(163,106,0);
    glVertex2f(84.0f,50.0f);
    glVertex2f(84.7f,50.0f);
    glVertex2f(84.7f,58.0f);
    glVertex2f(84.0f,58.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 224, 0);
    glVertex2f(82.0f,58.0f);
    glVertex2f(86.7f,58.0f);
    glVertex2f(84.3f,62.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 224, 0);
    glVertex2f(82.0f,60.0f);
    glVertex2f(86.7f,60.0f);
    glVertex2f(84.3f,65.0f);
    glEnd();

    //House2
    glBegin(GL_POLYGON);
    glColor3ub(house2Wall1X,house2Wall1Y,house2Wall1Z);
    glVertex2f(86.0f,48.0f);
    glVertex2f(91.0f,47.0f);
    glVertex2f(91.0f,53.0f);
    glVertex2f(88.5f,57.0f);
    glVertex2f(86.0f,53.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(house2RoofX,house2RoofY,house2RoofZ);
    glVertex2f(91.0f,53.0f);
    glVertex2f(99.8f,53.0f);
    glVertex2f(98.0f,57.0f);
    glVertex2f(88.5f,57.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(house2Wall2X,house2Wall2Y,house2Wall2Z);
    glVertex2f(91.0f,47.0f);
    glVertex2f(99.0f,48.0f);
    glVertex2f(99.0f,53.0f);
    glVertex2f(91.0f,53.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,36);
    glVertex2f(87.5f,48.0f);
    glVertex2f(89.5f,48.0f);
    glVertex2f(89.5f,53.0f);
    glVertex2f(87.5f,53.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(house2Window1X,house2Window1Y,house2Window1Z);
    glVertex2f(92.0f,49.0f);
    glVertex2f(94.0f,49.0f);
    glVertex2f(94.0f,51.0f);
    glVertex2f(92.0f,51.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(house2Window2X, house2Window2Y, house2Window2Z);
    glVertex2f(96.0f,49.0f);
    glVertex2f(98.0f,49.0f);
    glVertex2f(98.0f,51.0f);
    glVertex2f(96.0f,51.0f);
    glEnd();
}
void Durjoy()
{
    Village();
    sun();
    cloud2();
    cloud3();
    plane();
    cloud1();

}

void updatecar1(int value)///Sn8
{
    _move1 += 0.3;
    if(_move1>102.0)
    {
      _move1 =- 10.0f;
    }
    glutPostRedisplay();

    glutTimerFunc(20,updatecar1,0);
}
void updatecar2(int value)///Sn9
{
    _move2 += .4;

    if(_move2 > 100)
    {
    _move2 = -15.0;
    }
    glutPostRedisplay();

    glutTimerFunc(15, updatecar2, 0);
}
void updatecar3(int value)///Sn10
{
    _move3 -= 0.35;
    if(_move3<-10.0){
        _move3=102.0f;
    }
    glutPostRedisplay();

    glutTimerFunc(20,updatecar3,0);
}
void Water()///Ah6
{
    ///down water
    glBegin(GL_POLYGON);
    glColor3ub(waterColorX, waterColorY, waterColorZ);
    glVertex2f(0.0f,52.0f);
    glVertex2f(0.0f,-20.0f);
    glVertex2f(100.0f,-20.0f);
    glVertex2f(100.0f,62.0f);
    glEnd();
}
void Sky()///Sha5
{
    glBegin(GL_POLYGON);
    glColor3ub(skyColorX, skyColorY, skyColorZ);
    glVertex2f(0.0f,100.0f);
    glVertex2f(0.0f,52.0f);
    glVertex2f(100.0f,62.0f);
    glVertex2f(100.0f,100.0f);

    glEnd();
}

void Bridge()///Sn1
{
    //glClear(GL_COLOR_BUFFER_BIT);
    ///left side lol
 //   glBegin(GL_POLYGON);
 //   glColor3ub(210,209,205);
  //  glVertex2f(0.0f,20.0f);
  //  glVertex2f(40.0f,20.0f);
  //  glVertex2f(44.0f,30.0f);
 //   glVertex2f(0.0f,30.0f);
  //  glEnd();

  //  glLineWidth(3.0);
  //  glBegin(GL_LINES);
  //  glColor3ub(0,0,0);
  //  glVertex2f(0.0f,25.0f);
  //  glVertex2f(35.0f,25.0f);
  //  glEnd();

   // glLineWidth(3.0);
//    glBegin(GL_LINES);
//    glColor3ub(0,0,0);
//    glVertex2f(30.0f,30.0f);
//    glVertex2f(40.0f,20.0f);
//    glEnd();

//    glLineWidth(3.0);
//    glBegin(GL_LINES);
//    glColor3ub(0,0,0);
//    glVertex2f(0.0f,20.0f);
//    glVertex2f(40.0f,20.0f);
//    glEnd();

//    glLineWidth(3.0);
//    glBegin(GL_LINES);
//    glColor3ub(0,0,0);
//    glVertex2f(44.0f,30.0f);
//    glVertex2f(40.0f,20.0f);
//    glEnd();

//    glLineWidth(3.0);
//    glBegin(GL_LINES);
//    glColor3ub(0,0,0);
//    glVertex2f(43.0f,30.0f);
//    glVertex2f(39.0f,21.0f);
 //   glEnd();

 //   ///right side
 //   glBegin(GL_POLYGON);
 //   glColor3ub(210,209,205);
 //   glVertex2f(51.0f,30.0f);
 //   glVertex2f(55.0f,20.0f);
 //   glVertex2f(100.0f,20.0f);
 //   glVertex2f(100.0f,30.0f);
 //   glEnd();

//    glLineWidth(3.0);
//    glBegin(GL_LINES);
//    glColor3ub(0,0,0);
//    glVertex2f(51.0f,30.0f);
//    glVertex2f(55.0f,20.0f);
//    glEnd();

//    glLineWidth(3.0);
//    glBegin(GL_LINES);
 //   glColor3ub(0,0,0);
//    glVertex2f(51.0f,30.0f);
//    glVertex2f(55.0f,20.0f);
//    glEnd();

//    glLineWidth(3.0);
//    glBegin(GL_LINES);
//    glColor3ub(0,0,0);
//    glVertex2f(55.0f,20.0f);
//    glVertex2f(100.0f,20.0f);
//    glEnd();

//    glLineWidth(3.0);
//    glBegin(GL_LINES);
 //   glColor3ub(0,0,0);
 //   glVertex2f(60.0f,25.0f);
 //   glVertex2f(100.0f,25.0f);
 //   glEnd();

 //   glLineWidth(3.0);
 //   glBegin(GL_LINES);
 //   glColor3ub(0,0,0);
 //   glVertex2f(55.0f,20.0f);
 //   glVertex2f(65.0f,30.0f);
 //   glEnd();

 //   glLineWidth(3.0);
 //   glBegin(GL_LINES);
 //   glColor3ub(0,0,0);
 //   glVertex2f(52.0f,30.0f);
 //   glVertex2f(56.0f,21.0f);
 //   glEnd();



   // ///mid
//    glBegin(GL_POLYGON);
//    glColor3ub(210,209,205);
//    glVertex2f(44.0f,30.0f);
//    glVertex2f(43.0f,27.0f);
//    glVertex2f(52.0f,27.0f);
//    glVertex2f(51.0f,30.0f);
//    glEnd();

//    glLineWidth(3.0);
 //   glBegin(GL_LINES);
 //   glColor3ub(0,0,0);
  //  glVertex2f(43.0f,27.0f);
  //  glVertex2f(52.0f,27.0f);
//    glEnd();
    glBegin(GL_POLYGON);//uper pillar
    glColor3ub(upperPiller1X,upperPiller1Y,upperPiller1Z);
    glVertex2f(10.0f,25.0f);
    glVertex2f(20.0f,25.0f);
    glVertex2f(20.0f,30.0f);
    glVertex2f(10.0f,30.0f);
    glEnd();
    glBegin(GL_POLYGON);//lower pillar
    glColor3ub(lowerPiller1X,lowerPiller1Y,lowerPiller1Z);
    glVertex2f(13.0f,15.0f);
    glVertex2f(17.0f,15.0f);
    glVertex2f(18.0f,25.0f);
    glVertex2f(12.0f,25.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(upperPiller2X,upperPiller2Y,upperPiller2Z);
    glVertex2f(30.0f,25.0f);
    glVertex2f(40.0f,25.0f);
    glVertex2f(40.0f,30.0f);
    glVertex2f(30.0f,30.0f);
    glEnd();
    glBegin(GL_POLYGON);//lower pillar
    glColor3ub(lowerPiller2X, lowerPiller2Y, lowerPiller2Z);
    glVertex2f(33.0f,15.0f);
    glVertex2f(37.0f,15.0f);
    glVertex2f(38.0f,25.0f);
    glVertex2f(32.0f,25.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(upperPiller3X,upperPiller3Y,upperPiller3Z);
    glVertex2f(60.0f,25.0f);
    glVertex2f(70.0f,25.0f);
    glVertex2f(70.0f,30.0f);
    glVertex2f(60.0f,30.0f);
    glEnd();
    glBegin(GL_POLYGON);//lower pillar
    glColor3ub(lowerPiller3X, lowerPiller3Y, lowerPiller3Z);
    glVertex2f(63.0f,15.0f);
    glVertex2f(67.0f,15.0f);
    glVertex2f(68.0f,25.0f);
    glVertex2f(62.0f,25.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(upperPiller4X,upperPiller4Y,upperPiller4Z);
    glVertex2f(80.0f,25.0f);
    glVertex2f(90.0f,25.0f);
    glVertex2f(90.0f,30.0f);
    glVertex2f(80.0f,30.0f);
    glEnd();
    glBegin(GL_POLYGON);//lower pillar
    glColor3ub(lowerPiller4X, lowerPiller4Y,lowerPiller4Z);
    glVertex2f(83.0f,15.0f);
    glVertex2f(87.0f,15.0f);
    glVertex2f(88.0f,25.0f);
    glVertex2f(82.0f,25.0f);
    glEnd();



}
void Road()///Sn2
{
    ///road
    glBegin(GL_POLYGON);
    glColor3ub(71,72,76);
    glVertex2f(0.0f,42.0f);
    glVertex2f(0.0f,30.0f);
    glVertex2f(100.0f,30.0f);
    glVertex2f(100.0f,42.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 204);
    glVertex2f(42.0f,30.0f);
    glVertex2f(44.0f,30.0f);
    glVertex2f(49.0f,42.0f);
    glVertex2f(47.0f,42.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 204);
    glVertex2f(51.0f,30.0f);
    glVertex2f(53.0f,30.0f);
    glVertex2f(58.0f,42.0f);
    glVertex2f(56.0f,42.0f);
    glEnd();

    ///big line
    glLineWidth(8.0);
    glBegin(GL_LINES);
    glColor3ub(179, 0, 0);
    glVertex2f(0.0f,30.0f);
    glVertex2f(100.0f,30.0f);
    glEnd();

    glLineWidth(8.0);
    glBegin(GL_LINES);
    glColor3ub(179, 0, 0);
    glVertex2f(0.0f,42.0f);
    glVertex2f(100.0f,42.0f);
    glEnd();

    ///mid line
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(204, 204, 204);
    glVertex2f(0.0f,36.0f);
    glVertex2f(100.0f,36.0f);
    glEnd();
}

void Lamppostback()///Sh3
{
    //lamppost1
    glBegin(GL_POLYGON);
    glColor3ub(150, 139, 107);
    glVertex2f(47.0f,50.0f);
    glVertex2f(47.0f,41.0f);
    glVertex2f(48.0f,41.0f);
    glVertex2f(48.0f,49.0f);
    glVertex2f(50.0f,49.0f);
    glVertex2f(50.0f,50.0f);
    glEnd();

    //lamppost2
    glBegin(GL_POLYGON);
    glColor3ub(150, 139, 107);
    glVertex2f(56.0f,49.0f);
    glVertex2f(56.0f,41.0f);
    glVertex2f(57.0f,41.0f);
    glVertex2f(57.0f,50.0f);
    glVertex2f(54.0f,50.0f);
    glVertex2f(54.0f,49.0f);
    glEnd();

}

void Lamppostfront()///Sh4
{
    glBegin(GL_POLYGON);
    glColor3ub(150, 139, 107);
    glVertex2f(43.0f,40.0f);
    glVertex2f(43.0f,30.5f);
    glVertex2f(44.0f,30.5f);
    glVertex2f(44.0f,39.0f);
    glVertex2f(46.0f,39.0f);
    glVertex2f(46.0f,40.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(150, 139, 107);
    glVertex2f(52.0f,39.0f);
    glVertex2f(52.0f,30.5f);
    glVertex2f(53.0f,30.5f);
    glVertex2f(53.0f,40.0f);
    glVertex2f(50.0f,40.0f);
    glVertex2f(50.0f,39.0f);
    glEnd();
}
void Car1()///Sn5
{
    glPushMatrix();
    glTranslatef(_move1, 0.0f, 0.0f);
    glTranslatef(0.0f,39.0f,0.0f);
    glScalef(4.0f,4.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(54, 56, 214);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(1.75f,0.0f);
    glVertex2f(1.75f,0.4f);
    glVertex2f(1.0f,0.6f);
    glVertex2f(0.5f,1.0f);
    glVertex2f(0.0f,1.0f);
    glVertex2f(-0.5f,0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.25f,0.6f);
    glVertex2f(0.85f,0.6f);
    glVertex2f(0.5f,0.9f);
    glVertex2f(0.0f,0.9f);
    glEnd();

    glPushMatrix();



    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
    glColor3f(0.0,0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y);
    }
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,1.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.25f, 0.0f, 0.0f);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
    glColor3f(0.0,0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y);
    }
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,1.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
    glPopMatrix();
    //glutSwapBuffers();
}
void Car2()///Sn6
{
    glPushMatrix();
    glTranslatef(_move2, 0.0f, 0.0f);
    glTranslatef(0.0f,38.0f,0.0f);
    glScalef(6.0f,6.0f,0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(240, 65, 65);
    glVertex2f(-0.5f,1.0f);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(1.75f,0.0f);
    glVertex2f(1.75f,0.5f);
    glVertex2f(1.5f,1.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.5f,0.5f);
    glVertex2f(1.75f,0.5f);
    glVertex2f(1.60f,0.8f);
    glVertex2f(-0.5f,0.8f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(1.60f,0.8f);
    glVertex2f(-0.5f,0.8f);
    glEnd();

    glPushMatrix();
    glRotatef(_angle12, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
    glColor3f(0.0,0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y);
    }
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,1.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.25f, 0.0f, 0.0f);
    glRotatef(_angle12, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
    glColor3f(0.0,0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y);
    }
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,1.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();

    glPopMatrix();
    glPopMatrix();
}
void Car3()///Sn7
{
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
    glTranslatef(0.0f,34.0f,0.0f);
    glScalef(6.0f,6.0f,0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(16, 194, 102);
    glVertex2f(0.0f,1.0f);
    glVertex2f(-0.5f,0.5f);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(1.75f,0.0f);
    glVertex2f(1.75f,1.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0f,1.0f);
    glVertex2f(-0.5f,0.5f);
    glVertex2f(1.75f,0.5f);
    glVertex2f(1.75f,1.0f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.5f,0.5f);
    glVertex2f(1.75f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.2f,1.0f);
    glVertex2f(0.2f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.4f,1.0f);
    glVertex2f(0.4f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.6f,1.0f);
    glVertex2f(0.6f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f,1.0f);
    glVertex2f(0.8f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(1.0f,1.0f);
    glVertex2f(1.0f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(1.2f,1.0f);
    glVertex2f(1.2f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(1.4f,1.0f);
    glVertex2f(1.4f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(1.6f,1.0f);
    glVertex2f(1.6f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(1.7f,1.0f);
    glVertex2f(1.7f,0.5f);
    glEnd();

    glPushMatrix();
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
    glColor3f(0.0,0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y);
    }
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,1.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.25f, 0.0f, 0.0f);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
    glColor3f(0.0,0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y);
    }
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,1.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glPopMatrix();


}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    Sky();
    drawSkyBottom();
    drawWindmillOne();
    drawWindmillTwo();
    drawWindmillThree();

    Water();
    Bridge();
    Road();
    Lamppostback();
    Car1();
    Car2();
    Car3();
    Lamppostfront();


    Durjoy();
    Boat1();
    Boat2();
    Boat3();
    Boat4();
    Rain(rain);

    glFlush();
}
//keyboard
void Keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {

    case 'n':
        skyColorX = 25;
        skyColorY = 25;
        skyColorZ = 112;
        sunColorX = 255;
        sunColorY = 255;
        sunColorZ = 255;
        waterColorX= 54;
        waterColorY= 100;
        waterColorZ= 139;
        groundColorX = 30;
        groundColorY= 86;
        groundColorZ= 49;
        hillColorX= 38;
        hillColorY= 38;
        hillColorZ= 38;
        house1Wall1X= 112;
        house1Wall1Y= 112;
        house1Wall1Z= 112;
        house1Wall2X= 112;
        house1Wall2Y= 112;
        house1Wall2Z= 112;
        house1RoofX= 0;
        house1RoofY= 0;
        house1RoofZ= 0;
        house1Window1X= 255;
        house1Window1Y= 255;
        house1Window1Z= 0;
        house1Window2X= 255;
        house1Window2Y= 255;
        house1Window2Z= 0;
        house2Wall1X= 112;
        house2Wall1Y= 112;
        house2Wall1Z= 112;
        house2RoofX= 0;
        house2RoofY= 0;
        house2RoofZ= 0;
        house2Wall2X= 112;
        house2Wall2Y= 112;
        house2Wall2Z= 112;
        house2Window1X= 255;
        house2Window1Y= 255;
        house2Window1Z= 0;
        house2Window2X= 255;
        house2Window2Y= 255;
        house2Window2Z= 0;
        lowerPiller1X= 112;
        lowerPiller1Y= 112;
        lowerPiller1Z= 112;
        lowerPiller2X= 112;
        lowerPiller2Y= 112;
        lowerPiller2Z= 112;
        lowerPiller3X= 112;
        lowerPiller3Y= 112;
        lowerPiller3Z= 112;
        lowerPiller4X= 112;
        lowerPiller4Y= 112;
        lowerPiller4Z= 112;
        upperPiller1X= 112;;
        upperPiller1Y= 112;
        upperPiller1Z= 112;
        upperPiller2X= 112;
        upperPiller2Y= 112;
        upperPiller2Z= 112;
        upperPiller3X= 112;
        upperPiller3Y= 112;
        upperPiller3Z= 112;
        upperPiller4X= 112;
        upperPiller4Y= 112;
        upperPiller4Z= 112;

        break;
    case 'd':
        skyColorX= 240;
        skyColorY= 210;
        skyColorZ= 151;
        sunColorX= 247;
        sunColorY= 233;
        sunColorZ= 25;
        waterColorX= 91;
        waterColorY= 191;
        waterColorZ= 227;
        groundColorX = 0;
        groundColorY= 163;
        groundColorZ= 0;
        hillColorX= 30;
        hillColorY= 86;
        hillColorZ= 49;
        house1Wall1X= 128;
        house1Wall1Y= 128;
        house1Wall1Z= 0;
        house1Wall2X= 236;
        house1Wall2Y= 224;
        house1Wall2Z= 207;
        house1RoofX= 224;
        house1RoofY= 146;
        house1RoofZ= 0;
        house1Window1X= 36;
        house1Window1Y= 0;
        house1Window1Z= 0;
        house1Window2X= 36;
        house1Window2Y= 0;
        house1Window2Z= 0;
        house2Wall1X= 128;
        house2Wall1Y= 128;
        house2Wall1Z= 0;
        house2RoofX= 224;
        house2RoofY= 146;
        house2RoofZ= 0;
        house2Wall2X= 236;
        house2Wall2Y= 224;
        house2Wall2Z= 207;
        house2Window1X= 36;
        house2Window1Y= 0;
        house2Window1Z= 0;
        house2Window2X= 36;
        house2Window2Y= 0;
        house2Window2Z= 0;
        lowerPiller1X= 209;
        lowerPiller1Y= 205;
        lowerPiller1Z= 210;
        lowerPiller2X= 209;
        lowerPiller2Y= 205;
        lowerPiller2Z= 210;
        lowerPiller3X= 209;
        lowerPiller3Y= 205;
        lowerPiller3Z= 210;
        lowerPiller4X= 209;
        lowerPiller4Y= 210;
        lowerPiller4Z= 205;
        upperPiller1X= 209;
        upperPiller1Y= 205;
        upperPiller1Z= 210;
        upperPiller2X= 209;
        upperPiller2Y= 205;
        upperPiller2Z= 210;
        upperPiller3X= 209;
        upperPiller3Y= 205;
        upperPiller3Z= 210;
        upperPiller4X= 209;
        upperPiller4Y= 210;
        upperPiller4Z= 205;


        break;

    case 'r':
       rainyDay = true;

        break;

    case 's':
        rainyDay = false;
        break;
    case 'e':
        exit(0);
        break;

    default:
        break;
    }
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
    glutCreateWindow("Nikli Haor");
    init();
    glutTimerFunc(15, updatecar1, 0);
    glutTimerFunc(15, updatecar2, 0);
    glutTimerFunc(20, updatecar3, 0);
    glutTimerFunc(5, u, 0);
    glutTimerFunc(5, u1, 0);
    glutTimerFunc(25, updates, 0);
    glutTimerFunc(20, update, 0);
    glutDisplayFunc(display);
    glutKeyboardFunc(Keyboard);
    glutMainLoop();
    return 0;
}

