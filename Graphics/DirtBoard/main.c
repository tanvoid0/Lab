#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>


int x,y,x1,y1,x2,y2,dx,dy,p,i,r, lp;
int circle1 = 150;
int circle2 = 120;

void circ(int R, int colx, int coly, int colz){
    p=1-R;

    x=0;
    y=R;

    for(i=x; i<=y; i++)
    {
        glColor3f (colx, coly, colz);
        glBegin(GL_POLYGON);


        if(p<0)
        {
            x++;

            p=p+(2*x)+1;
        }
        else
        {
            x++;
            y--;
            p=p+(2*x)+1-(2*y);
        }

        glVertex2d(x, y);
        glVertex2d(y, x);
        glVertex2d(-y, x);
        glVertex2d(-x, y);
        glVertex2d(-x, -y);
        glVertex2d(-y, -x);
        glVertex2d(y, -x);
        glVertex2d(x, -y);

        glEnd();
    }

    glFlush ();
}

void display(void)
{
    int sw = 1;
    for(lp=300; lp>=1; lp-=60){
        if(lp%60 == 0){
            if(sw == 0){
                sw = 1;
            } else {
                sw = 0;
            }
        }
        if(sw){
            circ(lp, 1.0, 1.0, 1.0);
        } else {
            circ(lp, 1.0, 0.0, 0.0);
        }
    }

    //circ(150, 1.0, 1.0, 1.0);
    //circ(145, 1.0, 1.0, 1.0);
    //circ(140, 1.0, 1.0, 1.0);
    //circ(135, 1.0, 1.0, 1.0);
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
//printf("Enter radius\n");

//scanf("%d", &r);
    r = circle1;

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Bresenham's Line Algorithm");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
