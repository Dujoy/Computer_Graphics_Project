#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>

GLfloat position = 0.0f;
GLfloat speed = 0.1f;
GLfloat i = 0.0f;
GLfloat j=0.0f;
GLfloat k=0.0f;

void task(void)
{

  glBegin(GL_LINES);
  glLineWidth(0.5f);
  glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
  glVertex2f(0.1f, 0.1f);
  glVertex2f( 0.1f, -0.8f);

  glEnd();

  glPushMatrix();
  glTranslatef(.1,.1,0);
  glRotatef(i,0,0.0,0.1);

  glBegin(GL_TRIANGLES);

  glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
  glVertex2f(0.0f, 0.0f);
  glVertex2f( 0.5f, 0.4f);
  glVertex2f( 0.3f, 0.55f);
  glEnd();

  glPopMatrix();

  glPushMatrix();
  glTranslatef(.1,.1,0);
  glRotatef(j,0,0.0,0.1);

  glBegin(GL_TRIANGLES);


    glColor3ub(0, 0, 255);
    glVertex2f(0.0f, 0.0f);
    glColor3ub(0, 0, 255);
    glVertex2f( -0.58f, -0.12f);
    glVertex2f( -0.58f, 0.12f);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(.1,.1,0);
    glRotatef(k,0,0.0,0.1);
    glBegin(GL_TRIANGLES);

    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.5f, -0.4f);
    glVertex2f( 0.3f, -0.55f);
    glEnd();

   glPopMatrix();

    i-=1.1f;
    j-=1.1;
    k-=1.1f;

    glFlush();

}
void update(int value) {

 if(position <-1.0)
        position = 1.2f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init() {
   glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
}
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
       speed += 0.1f;
    }
    if (button == GLUT_RIGHT_BUTTON)
	{
	    speed -= 0.1f;
    }
	glutPostRedisplay();
}


void handleKeypress(unsigned char key, int x, int y) {
 switch (key) {
  case 'p':
    speed = 0.0f;
    break;
  case 'r':
    speed = 0.1f;
    break;
  glutPostRedisplay();
  }
}

void SpecialInput(int key, int x, int y)
{
  switch(key){
      case GLUT_KEY_UP:
       speed=8.5;
       break;
      case GLUT_KEY_DOWN:
       speed=4.2;
       break;
      case GLUT_KEY_LEFT:
       break;
      case GLUT_KEY_RIGHT:
       break;
    }
    glutPostRedisplay();
}

void display() {
  glClear(GL_COLOR_BUFFER_BIT);
  glLoadIdentity();
  task();
  glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Sarker,Durjoy/ID:18-38181-2");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutSpecialFunc(SpecialInput);
   glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}
