#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>


int x, y, x1, y1, x2, y2, dx, dy, p, i, r;

void display(void){
    p = 1 - r;
    x = 0;
    y = r;

    for(i = x; i <= y; i++)
    {
        glColor3f (0, 153, 255);
        glBegin(GL_POINTS);
        if(p < 0){
            x++;
            p = p + (2 * x) + 1;
        }
        else{
            x++;
            y--;
            p = p + (2 * x) + 1 - (2 * y);
        }
        glVertex2d(x, y);
        glVertex2d(y, x);
        glVertex2d(-y, x);
        glVertex2d(-x, y);
        glVertex2d(-x, -y);
        glVertex2d(-y, -x);
        glVertex2d(y, -x);
        glVertex2d(x, -y);

        glVertex2d(x+300, y);
        glVertex2d(y+300, x);
        glVertex2d(-y+300, x);
        glVertex2d(-x+300, y);
        glVertex2d(-x+300, -y);
        glVertex2d(-y+300, -x);
        glVertex2d(y+300, -x);
        glVertex2d(x+300, -y);
        glEnd();



    }

    glColor3f (0, 153, 255);
    glBegin(GL_LINES);
    glVertex2d (0, 0);
    glVertex2d (300, 0);
    glEnd();

    glColor3f (0, 153, 255);
    glBegin(GL_LINES);
    glVertex2d (0, 0);
    glVertex2d (120, 120);
    glEnd();

    glColor3f (0, 153, 255);
    glBegin(GL_LINES);
    glVertex2d (300, 0);
    glVertex2d (250, 120);
    glEnd();

    glColor3f (0, 153, 255);
    glBegin(GL_LINES);
    glVertex2d (120, 120);
    glVertex2d (250, 120);
    glEnd();

    glFlush ();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-500, 500, -500, 500);


}

int main(int argc, char** argv)
{
    printf("Enter radius: ");
    scanf("%d", &r);


    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Bresenham's Line Algorithm");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
