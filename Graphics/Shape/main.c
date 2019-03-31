#include <GL/gl.h>

#include <GL/glut.h>

void display(void)

{

/* clear all pixels */

glClear (GL_COLOR_BUFFER_BIT);

/* draw white polygon (rectangle) with corners at

* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)

*/
glColor3f (1.0, 1.0, 0);

glBegin(GL_POLYGON);

glVertex2d (5,5);

glVertex2d (15,5);

glVertex2d (20, 12.5);

glVertex2d (10, 10);

glEnd();



glColor3f (1.0, 1.0, 0);

glBegin(GL_POLYGON);

glVertex2d (5,20);

glVertex2d (15,20);

glVertex2d (20, 12.5);

glVertex2d (10, 15);

glEnd();


glColor3f (1.0, 1.0, 0);

glBegin(GL_POLYGON);

glVertex2d (10,15);

glVertex2d (20,12.5);

glVertex2d (10, 10);

glVertex2d (20, 12.5);

glEnd();


glColor3f (1.0, 1.0, 0);

glBegin(GL_POLYGON);

glVertex2d (25,5);

glVertex2d (35,5);

glVertex2d (30, 12.5);

glVertex2d (20, 12.5);

glEnd();

glColor3f (1.0, 1.0, 0);

glBegin(GL_POLYGON);

glVertex2d (25,20);

glVertex2d (35,20);

glVertex2d (30, 12.5);

glVertex2d (20, 12.5);

glEnd();



glColor3f (1.0, 0.0, 0);

glBegin(GL_POLYGON);

glVertex2d (40,12.5);

glVertex2d (50,5);

glVertex2d (60, 12.5);

glVertex2d (50, 20);

glEnd();



glColor3f (0.0, 0.0, 1.0);

glBegin(GL_POLYGON);

glVertex2d (42.5,12.5);

glVertex2d (50,7.5);

glVertex2d (57.5, 12.5);

glVertex2d (50, 17.5);

glEnd();







glFlush();

}

void init (void)

{

/* select clearing (background) color */

glClearColor (0.0, 0.0, 0.0, 0.0);

/* initialize viewing values */

glMatrixMode(GL_PROJECTION);

glLoadIdentity();

gluOrtho2D(0,250,100,0);

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

glutInitWindowSize (500, 500);

glutInitWindowPosition (100, 100);

glutCreateWindow ("lab nai");


init ();

glutDisplayFunc(display);

glutMainLoop();

return 0; /* ISO C requires main to return int. */

}


