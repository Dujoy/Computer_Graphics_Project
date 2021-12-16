#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);

   glColor4f(1.0f, 1.0f, 0.0f, 0.0f);


	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
	glVertex3f(0.50f, 0.50f, 0.0f);
	glVertex3f(0.70f, 0.50f, 0.0f);
	glVertex3f(0.70f, 1.02f, 0.0f);
	glVertex3f(0.50f, 1.00f, 0.0f);



    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);

	glVertex3f(0.51f, 0.51f, 0.0f);
	glVertex3f(0.65f, 0.51f, 0.0f);
	glVertex3f(0.65f, 1.005f, 0.0f);
	glVertex3f(0.51f, 0.99f, 0.0f);

	glColor3f(1.0f, 0.9f, 1.6f);//Purple

	glVertex3f(0.65f, 0.51f, 0.0f);
	glVertex3f(0.69f, 0.51f, 0.0f);
	glVertex3f(0.69f, 0.90f, 0.0f);
	glVertex3f(0.65f, 0.90f, 0.0f);

	glColor3f(1.0f, 0.9f, 1.6f);

	glVertex3f(0.7f, 0.5f, 0.0f);
	glVertex3f(1.5f, 0.5f, 0.0f);
	glVertex3f(1.5f, 1.02f, 0.0f);
	glVertex3f(0.7f, 1.02f, 0.0f);

	glColor3f(0.0f, 1.9f, 0.0f);

	glVertex3f(0.71f, 0.51f, 0.0f);
	glVertex3f(1.45f, 0.51f, 0.0f);
	glVertex3f(1.45f, 0.70f, 0.0f);
	glVertex3f(0.71f, 0.70f, 0.0f);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex3f(0.71f, 0.72f, 0.0f);
	glVertex3f(1.45f, 0.72f, 0.0f);
	glVertex3f(1.45f, 0.88f, 0.0f);
	glVertex3f(0.71f, 0.88f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);

	glVertex3f(0.75f, 0.90f, 0.0f);
	glVertex3f(1.45f, 0.90f, 0.0f);
	glVertex3f(1.45f, 1.01f, 0.0f);
	glVertex3f(0.75f, 1.01f, 0.0f);

	glColor3f(0.0f, 0.1f, 0.0f);

	glVertex3f(1.5f, 0.5f, 0.0f);
	glVertex3f(1.65f, 0.50f, 0.0f);
	glVertex3f(1.65f, 0.60f, 0.0f);
	glVertex3f(1.5f, 0.60f, 0.0f);

	glColor3f(0.1f, 0.0f, 0.0f);

	glVertex3f(1.5f, 0.6f, 0.0f);
	glVertex3f(1.6f, 0.6f, 0.0f);
	glVertex3f(1.6f, 1.1f, 0.0f);
	glVertex3f(1.5f, 1.1f, 0.0f);
	glEnd(); //End quadrilateral coordinates
/*
	glBegin(GL_TRIANGLES); //Begin triangle coordinates

	//Pentagon
	glVertex3f(0.5f, 0.05f, 0.0f);
	glVertex3f(0.75f, 0.05f, 0.0f);
	glVertex3f(0.5f, 0.35f, 0.0f);

	glVertex3f(0.5f, 0.35f, 0.0f);
	glVertex3f(0.75f, 0.05f, 0.0f);
	glVertex3f(0.75f, 0.35f, 0.0f);

	glVertex3f(0.5f, 0.35f, 0.0f);
	glVertex3f(0.75f, 0.35f, 0.0f);
	glVertex3f(0.63f, 0.50f, 0.0f);

	//Triangle
	glVertex3f(0.30f, 0.65f, 0.0f);
	glVertex3f(0.60f, 0.65f, 0.0f);
	glVertex3f(0.45, 0.85f, 0.0f);

	glEnd();//End triangle coordinates
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor(0.1,0.1,0.5,1.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 2.0, 0.0, 2.0, -10.0, 10.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (900, 700);
glutInitWindowPosition (100, 100);
glutCreateWindow ("BUILDING");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
