#include <GL/gl.h>
#include <GL/glut.h>
void Print()
{

    // H1 Line
    // glColor3f(1.0, 0.3, 0);

    // glBegin(GL_LINES);
    //     glVertex2f(5, 15);
    //     glVertex2f(10, 10);
    // glEnd();
    // glLineWidth(10.0f);

    // H1 Polygon
    glColor3f (1.0, 1.0, 0);
    glBegin(GL_POLYGON);
        glVertex2d (5, 15);
        glVertex2d (10, 10);
        glVertex2d (10, 20);
        glVertex2d (5, 25);
    glEnd();

    // H2 Polygon
    glColor3f (1.0, 0.9, 0);
    glBegin(GL_POLYGON);
        glVertex2d (10, 10);
        glVertex2d (30, 10);
        glVertex2d (30, 20);
        glVertex2d (10, 20);
    glEnd();

    // H3 Polygon
    glColor3f (1.0, 0.8, 0);
    glBegin(GL_POLYGON);
        glVertex2d (10, 20);
        glVertex2d (30, 20);
        glVertex2d (27, 27);
        glVertex2d (7, 27);
    glEnd();

    // H4 Triangle
    glColor3f (1.0, 0.7, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d (10, 20);
        glVertex2d (7, 27);
        glVertex2d (5, 25);
    glEnd();

    // W1 Polygon
    glColor3f (1.0, 0.8, 0);
    glBegin(GL_POLYGON);
        glVertex2d (11, 13);
        glVertex2d (14, 13);
        glVertex2d (14, 16);
        glVertex2d (11, 16);
    glEnd();

    // W2 Polygon
    glColor3f (1.0, 0.8, 0);
    glBegin(GL_POLYGON);
        glVertex2d (25, 13);
        glVertex2d (28, 13);
        glVertex2d (28, 16);
        glVertex2d (25, 16);
    glEnd();

    // Window Lines
    glColor3f(1.0, 0.3, 0);

    glBegin(GL_LINES);
        // L1
        glVertex2f(11, 15);
        glVertex2f(14, 15);
        // L2
        glVertex2f(11, 14);
        glVertex2f(14, 14);

        // L3
        glVertex2f(12, 16);
        glVertex2f(12, 13);
        // L4
        glVertex2f(13, 16);
        glVertex2f(13, 13);

        // L1
        glVertex2f(25, 15);
        glVertex2f(28, 15);
        // L2
        glVertex2f(25, 14);
        glVertex2f(28, 14);

        // L3
        glVertex2f(26, 16);
        glVertex2f(26, 13);
        // L4
        glVertex2f(27, 16);
        glVertex2f(27, 13);
    glEnd();




    // D1 Polygon
    glColor3f (1.0, 0.8, 0);
    glBegin(GL_POLYGON);
        glVertex2d (17, 10);
        glVertex2d (22, 10);
        glVertex2d (22, 17);
        glVertex2d (17, 17);
    glEnd();

    // D2 Polygon
    glColor3f (1.0, 0.6, 0);
    glBegin(GL_POLYGON);
        glVertex2d (17, 10);
        glVertex2d (19, 11);
        glVertex2d (19, 16);
        glVertex2d (17, 17);
    glEnd();

    // D3 Polygon
    glColor3f (1.0, 0.6, 0);
    glBegin(GL_POLYGON);
        glVertex2d (20, 11);
        glVertex2d (22, 10);
        glVertex2d (22, 17);
        glVertex2d (20, 16);
    glEnd();

    // S1 Polygon
    glColor3f (1.0, 0.7, 0);
    glBegin(GL_POLYGON);
        glVertex2d (17, 9);
        glVertex2d (24, 9);
        glVertex2d (23, 10);
        glVertex2d (16, 10);
    glEnd();


    // S2 Polygon
    glColor3f (1.0, 0.6, 0);
    glBegin(GL_POLYGON);
        glVertex2d (17, 8);
        glVertex2d (24, 8);
        glVertex2d (24, 9);
        glVertex2d (17, 9);
    glEnd();

     // S3 Polygon
    glColor3f (1.0, 0.7, 0);
    glBegin(GL_POLYGON);
        glVertex2d (18, 7);
        glVertex2d (25, 7);
        glVertex2d (24, 8);
        glVertex2d (17, 8);
    glEnd();

    // S4 Polygon
    glColor3f (1.0, 0.6, 0);
    glBegin(GL_POLYGON);
        glVertex2d (18, 6);
        glVertex2d (25, 6);
        glVertex2d (25, 7);
        glVertex2d (18, 7);
    glEnd();

    // S4 Polygon
    glColor3f (1.0, 0.5, 0);
    glBegin(GL_POLYGON);
        glVertex2d (16, 8);
        glVertex2d (17, 7);
        glVertex2d (17, 9);
        glVertex2d (16, 10);
    glEnd();

     // S5 Polygon
    glColor3f (1.0, 0.5, 0);
    glBegin(GL_POLYGON);
        glVertex2d (17, 7);
        glVertex2d (18, 6);
        glVertex2d (18, 7);
        glVertex2d (17, 8);
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
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 40, 0, 30);
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
    glutCreateWindow ("Scene");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
