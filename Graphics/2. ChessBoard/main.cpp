#include <GL/gl.h>
#include <GL/glut.h>
void Print()
{

    // Board

    glColor3f (0, 0, 0);
    for(int i=0; i <80; i+=10){
        for(int j=0; j<80; j+=10){
            if((j%20 == 0 && i%20 == 0) || (j==0 && i==0)){
                glBegin(GL_POLYGON);
                    glVertex2d (i, j);
                    glVertex2d (i+10, j);
                    glVertex2d (i+10, j+10);
                    glVertex2d (i, j+10);
                glEnd();
            } else if(j%20 == 10 && i%20 == 10){
                glBegin(GL_POLYGON);
                    glVertex2d (i, j);
                    glVertex2d (i+10, j);
                    glVertex2d (i+10, j+10);
                    glVertex2d (i, j+10);
                glEnd();
            }

        }
    }


    glColor3f(1,1,1);

    // Bishop B1
    glBegin(GL_POLYGON);
        glVertex2d(23, 21);
        glVertex2d(27, 21);
        glVertex2d(27, 22);
        glVertex2d(23, 22);
    glEnd();
    // B2
    glBegin(GL_POLYGON);
        glVertex2d(24, 22);
        glVertex2d(26, 22);
        glVertex2d(25.5, 25);
        glVertex2d(24.5, 25);
    glEnd();

    // Bishop B3
    glBegin(GL_POLYGON);
        glVertex2d(24.5, 25);
        glVertex2d(25.5, 25);
        glVertex2d(27, 26);
        glVertex2d(25, 28);
        glVertex2d(23, 26);
    glEnd();

    // Bishop B4
    glBegin(GL_POLYGON);
        glVertex2d(24, 28);
        glVertex2d(26, 29);
        glVertex2d(26, 29);
        glVertex2d(24, 28);
    glEnd();


    // Pawn B1
    glBegin(GL_POLYGON);
        glVertex2d(33, 31);
        glVertex2d(37, 31);
        glVertex2d(37, 32);
        glVertex2d(33, 32);
    glEnd();

    // Pawn B2
    glBegin(GL_POLYGON);
        glVertex2d(34, 32);
        glVertex2d(36, 32);
        glVertex2d(35.5, 35);
        glVertex2d(34.5, 35);
    glEnd();

    // Pawn P3
    glBegin(GL_POLYGON);
        glVertex2d(34.5, 35);
        glVertex2d(35.5, 35);
        glVertex2d(37, 36);
        glVertex2d(37, 37);
        glVertex2d(36, 38);
        glVertex2d(34, 38);
        glVertex2d(33, 37);
        glVertex2d(33, 36);
    glEnd();


}

void display(void)
{
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    Print();
    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glFlush ();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (1.0, 1.0, 1.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 80, 0, 80);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Chess Board");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
