#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat z = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.1f;


void update(int value) {

    if(position > 1.70)
        position = -1.70f;

    position += speed;

    glutPostRedisplay();


    glutTimerFunc(250, update, 0);
}


GLfloat position1 = 0.0f;
GLfloat speed1 = 0.1f;


void update1(int value) {

    if(position1 > 1.70)
        position1 = -1.70f;

    position1 += speed1;

    glutPostRedisplay();


    glutTimerFunc(500, update1, 0);
}

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.1f;
void update2(int value) {

    if(position2 <-1.70)
        position2 = 1.70f;

    position2 -= speed2;

    glutPostRedisplay();


    glutTimerFunc(500, update2, 0);
}

GLfloat position6 = 0.0f;
GLfloat speed6 = 0.1f;


void update6(int value) {

    if(position6 <- 2.50)
        position6 = 2.50f;

    position6 -= speed6;

    glutPostRedisplay();


    glutTimerFunc(200, update6, 0);
}

void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


void day()
{
    glClearColor(0.196078f, 0.6f, 0.8f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
    glVertex2f( .4f,-.5f);
    glVertex2f(-.1f,-.5f);
    glVertex2f( -.1f,.5f);
    glVertex2f( .4f,.5f);
    glEnd();

     glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f( -.6f,-.5f);
     glVertex2f(-.1f,-.5f);
     glVertex2f( -.1f,.5f);
     glVertex2f( -.6f,.5f);
     glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.48f);
    glVertex2f(-.17f,-.48f);
    glVertex2f( -.17f,-.42f);
    glVertex2f( -.19f,-.42f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.38f);
    glVertex2f(-.17f,-.38f);
    glVertex2f( -.17f,-.32f);
    glVertex2f( -.19f,-.32f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.28f);
    glVertex2f(-.17f,-.28f);
    glVertex2f( -.17f,-.22f);
    glVertex2f( -.19f,-.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.18f);
    glVertex2f(-.17f,-.18f);
    glVertex2f( -.17f,-.12f);
    glVertex2f( -.19f,-.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.08f);
    glVertex2f(-.17f,-.08f);
    glVertex2f( -.17f,-.02f);
    glVertex2f( -.19f,-.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.08f);
    glVertex2f(-.17f,.08f);
    glVertex2f( -.17f,.02f);
    glVertex2f( -.19f,.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.18f);
    glVertex2f(-.17f,.18f);
    glVertex2f( -.17f,.12f);
    glVertex2f( -.19f,.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.28f);
    glVertex2f(-.17f,.28f);
    glVertex2f( -.17f,.22f);
    glVertex2f( -.19f,.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.38f);
    glVertex2f(-.17f,.38f);
    glVertex2f( -.17f,.32f);
    glVertex2f( -.19f,.32f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.48f);
    glVertex2f(-.17f,.48f);
    glVertex2f( -.17f,.42f);
    glVertex2f( -.19f,.42f);
    glEnd();

    //2
    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,-.48f);
    glVertex2f(-.12f,-.48f);
    glVertex2f( -.12f,-.42f);
    glVertex2f( -.14f,-.42f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,-.38f);
    glVertex2f(-.12f,-.38f);
    glVertex2f( -.12f,-.32f);
    glVertex2f( -.14f,-.32f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,-.28f);
    glVertex2f(-.12f,-.28f);
    glVertex2f( -.12f,-.22f);
    glVertex2f( -.14f,-.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,-.18f);
    glVertex2f(-.12f,-.18f);
    glVertex2f( -.12f,-.12f);
    glVertex2f( -.14f,-.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,-.08f);
    glVertex2f(-.12f,-.08f);
    glVertex2f( -.12f,-.02f);
    glVertex2f( -.14f,-.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,.08f);
    glVertex2f(-.12f,.08f);
    glVertex2f( -.12f,.02f);
    glVertex2f( -.14f,.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,.18f);
    glVertex2f(-.12f,.18f);
    glVertex2f( -.12f,.12f);
    glVertex2f( -.14f,.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,.28f);
    glVertex2f(-.12f,.28f);
    glVertex2f( -.12f,.22f);
    glVertex2f( -.14f,.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,.38f);
    glVertex2f(-.12f,.38f);
    glVertex2f( -.12f,.32f);
    glVertex2f( -.14f,.32f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,.48f);
    glVertex2f(-.12f,.48f);
    glVertex2f( -.12f,.42f);
    glVertex2f( -.14f,.42f);
    glEnd();

    int i;
    GLfloat x=.8f;
    GLfloat y=.1f;
    GLfloat radius =.02f;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;



    glBegin(GL_QUADS); //  road
    glColor3ub(61, 60, 60);
    glVertex2f(-0.99f, -0.99f);
    glVertex2f(0.99f, -0.99f);
    glVertex2f(0.99f, -0.5f);
    glVertex2f(-0.99f, -0.5f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.9f, -0.75f);
    glVertex2f(-0.8f, -0.75f);
    glVertex2f(-0.8f, -0.73f);
    glVertex2f(-0.9f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.7f, -0.75f);
    glVertex2f(-0.6f, -0.75f);
    glVertex2f(-0.6f, -0.73f);
    glVertex2f(-0.7f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.5f, -0.75f);
    glVertex2f(-0.4f, -0.75f);
    glVertex2f(-0.4f, -0.73f);
    glVertex2f(-0.5f, -0.73f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.3f, -0.75f);
    glVertex2f(-0.2f, -0.75f);
    glVertex2f(-0.2f, -0.73f);
    glVertex2f(-0.3f, -0.73f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(0.0f, -0.75f);
    glVertex2f(0.0f, -0.73f);
    glVertex2f(-0.1f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.2f, -0.75f);
    glVertex2f(0.2f, -0.73f);
    glVertex2f(0.1f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.3f, -0.75f);
    glVertex2f(0.4f, -0.75f);
    glVertex2f(0.4f, -0.73f);
    glVertex2f(0.3f, -0.73f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.5f, -0.75f);
    glVertex2f(0.6f, -0.75f);
    glVertex2f(0.6f, -0.73f);
    glVertex2f(0.5f, -0.73f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.7f, -0.75f);
    glVertex2f(0.8f, -0.75f);
    glVertex2f(0.8f, -0.73f);
    glVertex2f(0.7f, -0.73f);
    glEnd();

    //Bus
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(238, 223, 123);
    glVertex2f(-0.8, -0.65);
    glVertex2f(-0.3, -0.65);
    glVertex2f(-0.3, -0.55);
    glVertex2f(-0.35, -0.45);
    glVertex2f(-0.8, -0.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(70, 30, 10);
    glVertex2f(-0.37, -0.63);
    glVertex2f(-0.37, -0.5);
    glVertex2f(-0.43, -0.5);
    glVertex2f(-0.43, -0.63);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(70, 30, 10);
    glVertex2f(-0.46, -0.57);
    glVertex2f(-0.46, -0.5);
    glVertex2f(-0.52, -0.5);
    glVertex2f(-0.52, -0.57);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(70, 30, 10);
    glVertex2f(-0.55, -0.57);
    glVertex2f(-0.55, -0.5);
    glVertex2f(-0.61, -0.5);
    glVertex2f(-0.61, -0.57);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(70, 30, 10);
    glVertex2f(-0.64, -0.57);
    glVertex2f(-0.64, -0.5);
    glVertex2f(-0.70, -0.5);
    glVertex2f(-0.70, -0.57);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(70, 30, 10);
    glVertex2f(-0.73, -0.57);
    glVertex2f(-0.73, -0.5);
    glVertex2f(-0.79, -0.5);
    glVertex2f(-0.79, -0.57);
    glEnd();

    // bus wheel
    // bus second wheel
    glColor3ub(0, 0, 0); // black hole
    GLfloat x5= -0.72f;
    GLfloat y5=-0.65f;
    radius =.03f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x5, y5); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x5 + (radius * cos(i *  twicePi / triangleAmount)),
            y5 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    // bus second inner wheel
    glColor3ub(153, 140, 140); // silver hole
    GLfloat x7= -0.72f;
    GLfloat y7=-0.65f;
    radius =.01f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x7, y7); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x7 + (radius * cos(i *  twicePi / triangleAmount)),
            y7 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glColor3ub(0, 0, 0); // black hole
    GLfloat x6= -0.52f;
    GLfloat y6=-0.65f;
    radius =.03f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x6, y6); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x6 + (radius * cos(i *  twicePi / triangleAmount)),
            y6 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    // bus first wheel
    glColor3ub(153, 140, 140); // silver hole
    GLfloat x8= -0.52f;
    GLfloat y8=-0.65f;
    radius =.01f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x8, y8); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x8 + (radius * cos(i *  twicePi / triangleAmount)),
            y8 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glPopMatrix();


   glEnable(GL_LIGHTING);
   GLfloat global_ambient[] = {4.0, 4.0, 4.0, 0.1};
   glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);


    glLoadIdentity();
    glTranslatef(-0.9f,0.5f, 0.0f);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);


    glLoadIdentity();
    glTranslatef(-0.9f,0.5f, 0.0f);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle60;
    for (int i=0;i<360;i++)
    {
        angle60=i*3.1416/180;
        glVertex2f(0.0+0.05*cos(angle60),0.0+0.05*sin(angle60));

    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle61;
    for (int i=0;i<360;i++)
    {
        angle61=i*3.1416/180;
        glVertex2f(-0.05+0.05*cos(angle61),-0.05+0.05*sin(angle61));

    }
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle62;
    for (int i=0;i<360;i++)
    {
        angle62=i*3.1416/180;
        glVertex2f(0.07+0.05*cos(angle62),0.0+0.05*sin(angle62));

    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle63;
    for (int i=0;i<360;i++)
    {
        angle63=i*3.1416/180;
        glVertex2f(0.045+0.05*cos(angle63),-0.05+0.05*sin(angle63));

    }
    glEnd();

    glPopMatrix();

    //CLOUD2
    glLoadIdentity();
    glTranslatef(0.8f,0.8f, 0.0f);
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle5;
    for (int i=0;i<360;i++)
    {
        angle5=i*3.1416/180;
        glVertex2f(0.0+0.05*cos(angle5),0.0+0.05*sin(angle5));

    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle4;
    for (int i=0;i<360;i++)
    {
        angle4=i*3.1416/180;
        glVertex2f(-0.05+0.05*cos(angle4),-0.05+0.05*sin(angle4));

    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle3;
    for (int i=0;i<360;i++)
    {
        angle3=i*3.1416/180;
        glVertex2f(0.07+0.05*cos(angle3),0.0+0.05*sin(angle3));

    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle2;
    for (int i=0;i<360;i++)
    {
        angle2=i*3.1416/180;
        glVertex2f(0.045+0.05*cos(angle2),-0.05+0.05*sin(angle2));

    }
    glEnd();
    glPopMatrix();
    glDisable(GL_LIGHTING);


//sun
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(255.0f, 255.0f, 128.0f);
    float angle10;
    for (int i=0;i<360;i++)
    {
        angle10=i*3.1416/180;
        glVertex2f(0.0+0.12*cos(angle10),0.9+0.12*sin(angle10));

    }
    glEnd();

    glFlush();
}


void handleMouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON)
    {
            speed += 0.1f;
    }

    if (button == GLUT_RIGHT_BUTTON)
    {
            speed -= 0.1f;
    }
    glutPostRedisplay();
}

void night()
{
    glClearColor(0.184314f, 0.184314f, 0.309804f,0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


//HOUSE or BUILDING

 glBegin(GL_QUADS);
    glColor3f(0.137255f, 0.419608f, 0.556863f);
    glVertex2f( .4f,-.5f);
    glVertex2f(-.1f,-.5f);
    glVertex2f( -.1f,.5f);
    glVertex2f( .4f,.5f);
    glEnd();

     glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f( -.6f,-.5f);
     glVertex2f(-.1f,-.5f);
     glVertex2f( -.1f,.5f);
     glVertex2f( -.6f,.5f);
     glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.48f);
    glVertex2f(-.17f,-.48f);
    glVertex2f( -.17f,-.42f);
    glVertex2f( -.19f,-.42f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.38f);
    glVertex2f(-.17f,-.38f);
    glVertex2f( -.17f,-.32f);
    glVertex2f( -.19f,-.32f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.28f);
    glVertex2f(-.17f,-.28f);
    glVertex2f( -.17f,-.22f);
    glVertex2f( -.19f,-.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.18f);
    glVertex2f(-.17f,-.18f);
    glVertex2f( -.17f,-.12f);
    glVertex2f( -.19f,-.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.08f);
    glVertex2f(-.17f,-.08f);
    glVertex2f( -.17f,-.02f);
    glVertex2f( -.19f,-.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.08f);
    glVertex2f(-.17f,.08f);
    glVertex2f( -.17f,.02f);
    glVertex2f( -.19f,.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.18f);
    glVertex2f(-.17f,.18f);
    glVertex2f( -.17f,.12f);
    glVertex2f( -.19f,.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.28f);
    glVertex2f(-.17f,.28f);
    glVertex2f( -.17f,.22f);
    glVertex2f( -.19f,.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.38f);
    glVertex2f(-.17f,.38f);
    glVertex2f( -.17f,.32f);
    glVertex2f( -.19f,.32f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.48f);
    glVertex2f(-.17f,.48f);
    glVertex2f( -.17f,.42f);
    glVertex2f( -.19f,.42f);
    glEnd();


    //2
    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,-.48f);
    glVertex2f(-.12f,-.48f);
    glVertex2f( -.12f,-.42f);
    glVertex2f( -.14f,-.42f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,-.38f);
    glVertex2f(-.12f,-.38f);
    glVertex2f( -.12f,-.32f);
    glVertex2f( -.14f,-.32f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,-.28f);
    glVertex2f(-.12f,-.28f);
    glVertex2f( -.12f,-.22f);
    glVertex2f( -.14f,-.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,-.18f);
    glVertex2f(-.12f,-.18f);
    glVertex2f( -.12f,-.12f);
    glVertex2f( -.14f,-.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,-.08f);
    glVertex2f(-.12f,-.08f);
    glVertex2f( -.12f,-.02f);
    glVertex2f( -.14f,-.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,.08f);
    glVertex2f(-.12f,.08f);
    glVertex2f( -.12f,.02f);
    glVertex2f( -.14f,.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,.18f);
    glVertex2f(-.12f,.18f);
    glVertex2f( -.12f,.12f);
    glVertex2f( -.14f,.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,.28f);
    glVertex2f(-.12f,.28f);
    glVertex2f( -.12f,.22f);
    glVertex2f( -.14f,.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,.38f);
    glVertex2f(-.12f,.38f);
    glVertex2f( -.12f,.32f);
    glVertex2f( -.14f,.32f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.14f,.48f);
    glVertex2f(-.12f,.48f);
    glVertex2f( -.12f,.42f);
    glVertex2f( -.14f,.42f);
    glEnd();

//END

    int i;
    GLfloat x=.8f;
    GLfloat y=.1f;
    GLfloat radius =.02f;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;


    glBegin(GL_QUADS); //  road
    glColor3ub(61, 60, 60);
    glVertex2f(-0.99f, -0.99f);
    glVertex2f(0.99f, -0.99f);
    glVertex2f(0.99f, -0.5f);
    glVertex2f(-0.99f, -0.5f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.9f, -0.75f);
    glVertex2f(-0.8f, -0.75f);
    glVertex2f(-0.8f, -0.73f);
    glVertex2f(-0.9f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.7f, -0.75f);
    glVertex2f(-0.6f, -0.75f);
    glVertex2f(-0.6f, -0.73f);
    glVertex2f(-0.7f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.5f, -0.75f);
    glVertex2f(-0.4f, -0.75f);
    glVertex2f(-0.4f, -0.73f);
    glVertex2f(-0.5f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.3f, -0.75f);
    glVertex2f(-0.2f, -0.75f);
    glVertex2f(-0.2f, -0.73f);
    glVertex2f(-0.3f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(0.0f, -0.75f);
    glVertex2f(0.0f, -0.73f);
    glVertex2f(-0.1f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.2f, -0.75f);
    glVertex2f(0.2f, -0.73f);
    glVertex2f(0.1f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.3f, -0.75f);
    glVertex2f(0.4f, -0.75f);
    glVertex2f(0.4f, -0.73f);
    glVertex2f(0.3f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.5f, -0.75f);
    glVertex2f(0.6f, -0.75f);
    glVertex2f(0.6f, -0.73f);
    glVertex2f(0.5f, -0.73f);
    glEnd();
    glBegin(GL_QUADS); //  road white line
    glColor3ub(255, 255, 255);
    glVertex2f(0.7f, -0.75f);
    glVertex2f(0.8f, -0.75f);
    glVertex2f(0.8f, -0.73f);
    glVertex2f(0.7f, -0.73f);
    glEnd();

    //Bus
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(158, 23, 23);
    glVertex2f(-0.8, -0.65);
    glVertex2f(-0.3, -0.65);
    glVertex2f(-0.3, -0.55);
    glVertex2f(-0.35, -0.45);
    glVertex2f(-0.8, -0.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(37, 93, 170);
    glVertex2f(-0.37, -0.63);
    glVertex2f(-0.37, -0.5);
    glVertex2f(-0.43, -0.5);
    glVertex2f(-0.43, -0.63);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(37, 93, 170);
    glVertex2f(-0.46, -0.57);
    glVertex2f(-0.46, -0.5);
    glVertex2f(-0.52, -0.5);
    glVertex2f(-0.52, -0.57);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(37, 93, 170);
    glVertex2f(-0.55, -0.57);
    glVertex2f(-0.55, -0.5);
    glVertex2f(-0.61, -0.5);
    glVertex2f(-0.61, -0.57);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(37, 93, 170);
    glVertex2f(-0.64, -0.57);
    glVertex2f(-0.64, -0.5);
    glVertex2f(-0.70, -0.5);
    glVertex2f(-0.70, -0.57);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(37, 93, 170);
    glVertex2f(-0.73, -0.57);
    glVertex2f(-0.73, -0.5);
    glVertex2f(-0.79, -0.5);
    glVertex2f(-0.79, -0.57);
    glEnd();

    // bus wheel
    // bus second wheel
    glColor3ub(0, 0, 0); // black hole
    GLfloat x6= -0.72f;
    GLfloat y6=-0.65f;
    radius =.03f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x6, y6); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x6 + (radius * cos(i *  twicePi / triangleAmount)),
            y6 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    // bus second inner wheel
    glColor3ub(153, 140, 140); // silver hole
    GLfloat x7= -0.72f;
    GLfloat y7=-0.65f;
    radius =.01f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x7, y7); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x7 + (radius * cos(i *  twicePi / triangleAmount)),
            y7 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glColor3ub(0, 0, 0); // black hole
    GLfloat x10= -0.52f;
    GLfloat y10=-0.65f;
    radius =.03f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x10, y10); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x10 + (radius * cos(i *  twicePi / triangleAmount)),
            y10 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    // bus first wheel
    glColor3ub(153, 140, 140); // silver hole
    GLfloat x8= -0.52f;
    GLfloat y8=-0.65f;
    radius =.01f;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x8, y8); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x8 + (radius * cos(i *  twicePi / triangleAmount)),
            y8 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();


//Clod
    glEnable(GL_LIGHTING);
    GLfloat global_ambient[] = {4.0, 4.0, 4.0, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);


    glLoadIdentity();
    glTranslatef(-0.9f,0.5f, 0.0f);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle60;
    for (int i=0;i<360;i++)
    {
        angle60=i*3.1416/180;
        glVertex2f(0.0+0.05*cos(angle60),0.0+0.05*sin(angle60));

    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle61;
    for (int i=0;i<360;i++)
    {
        angle61=i*3.1416/180;
        glVertex2f(-0.05+0.05*cos(angle61),-0.05+0.05*sin(angle61));

    }
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle62;
    for (int i=0;i<360;i++)
    {
        angle62=i*3.1416/180;
        glVertex2f(0.07+0.05*cos(angle62),0.0+0.05*sin(angle62));

    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle63;
    for (int i=0;i<360;i++)
    {
        angle63=i*3.1416/180;
        glVertex2f(0.045+0.05*cos(angle63),-0.05+0.05*sin(angle63));

    }
    glEnd();

    glPopMatrix();

    //CLOUD2


    glLoadIdentity();
    glTranslatef(0.8f,0.8f, 0.0f);
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle5;
    for (int i=0;i<360;i++)
    {
        angle5=i*3.1416/180;
        glVertex2f(0.0+0.05*cos(angle5),0.0+0.05*sin(angle5));

    }
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle4;
    for (int i=0;i<360;i++)
    {
        angle4=i*3.1416/180;
        glVertex2f(-0.05+0.05*cos(angle4),-0.05+0.05*sin(angle4));

    }
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle3;
    for (int i=0;i<360;i++)
    {
        angle3=i*3.1416/180;
        glVertex2f(0.07+0.05*cos(angle3),0.0+0.05*sin(angle3));

    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    float angle2;
    for (int i=0;i<360;i++)
    {
        angle2=i*3.1416/180;
        glVertex2f(0.045+0.05*cos(angle2),-0.05+0.05*sin(angle2));

    }
    glEnd();
    glPopMatrix();
    glDisable(GL_LIGHTING);

    //sun

    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(255.0f, 255.0f, 128.0f);
    float angle10;
    for (int i=0;i<360;i++)
    {
        angle10=i*3.1416/180;
        glVertex2f(0.0+0.12*cos(angle10),0.9+0.12*sin(angle10));

    }
    glEnd();
    glFlush();

}


void handleKeypress(unsigned char key, int x, int y){
	switch (key) {
        case 'a':
            speed = 0.0f;
            break;
        case 'w':
            speed = 0.1f;
            break;
        case 'd':
          glutDisplayFunc(day);
          glutPostRedisplay();
          break;

          case 'n':
          glutDisplayFunc(night);
          glutPostRedisplay();
          break;
          glutPostRedisplay();
	}
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("scenery");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(day);
    glutTimerFunc(250, update, 0);
    glutTimerFunc(500, update2, 0);
    glutTimerFunc(500, update1, 0);
    glutMouseFunc(handleMouse);
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();
    return 0;
}
