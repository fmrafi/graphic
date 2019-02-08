/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>
#include <stdlib.h>

void Draw()
{
    float x,y,ang,radius=0.09;
    static float RAD_DEG=57.296;

glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.33, 1.0, 0.50);
glBegin(GL_QUAD_STRIP);
glVertex3f(0.1, 0.1, 0.0);
glVertex3f(0.1, 0.9, 0.0);
glVertex3f(0.9, 0.1, 0.0);	//GreenYard Vertex
glVertex3f(0.9, 0.9, 0.0);
glEnd();
glFlush();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex3f(0.5, 0.1, 0.0);	//Mid Line ( Ground Divider )
glVertex3f(0.5, 0.9, 0.0);
glEnd();
glFlush();


// left side of the Ground

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex3f(0.25, 0.25, 0.0);	// Goal keeper Front line
glVertex3f(0.25, 0.75, 0.0);

glEnd();
glFlush();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex3f(0.1, 0.75, 0.0);	//Goal Keeper left Line
glVertex3f(0.25, 0.75, 0.0);

glEnd();
glFlush();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex3f(0.1, 0.25, 0.0);	//Goal Keeper Right Line
glVertex3f(0.25, 0.25, 0.0);

glEnd();
glFlush();

glBegin(GL_QUAD_STRIP);
glColor3f(1, 1, 1);
glVertex3f(0.1, 0.35, 0.0);
glVertex3f(0.1, 0.65, 0.0);	//Inner White Quad
glVertex3f(0.17, 0.35, 0.0);
glVertex3f(0.17, 0.65, 0.0);
glEnd();
glFlush();

// Right Side of the Ground
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex3f(0.75, 0.25, 0.0);	//Goal Keeper front line
glVertex3f(0.75, 0.75, 0.0);

glEnd();
glFlush();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex3f(0.75, 0.25, 0.0);	//Goal Keeper Left Line
glVertex3f(0.9, 0.25, 0.0);

glEnd();
glFlush();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex3f(0.75, 0.75, 0.0);	//Goal Keeper ki Right wali line
glVertex3f(0.9, 0.75, 0.0);

glEnd();
glFlush();

glBegin(GL_QUAD_STRIP);
glColor3f(1, 1, 1);
glVertex3f(0.9, 0.35, 0.0);
glVertex3f(0.9, 0.65, 0.0);
glVertex3f(0.83, 0.35, 0.0);	//Inner White Quad
glVertex3f(0.83, 0.65, 0.0);
glEnd();
glFlush();

glBegin(GL_LINE_LOOP);
for(ang=0.0;ang<360.0;ang+=10.0)
{
 x=radius*cos(ang/RAD_DEG)+1.0;
 y=radius*sin(ang/RAD_DEG)+0.5;    //Circle at the center of the field
 glVertex2f(x/2.0,y);
}
glEnd();
glFlush();

}

void Initialize()
{
glClearColor(0.60, 0.40, 0.12, 0.20);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv)
{
glutInit(&iArgc, cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(900, 450);
glutInitWindowPosition(200, 200);
glutCreateWindow("Football Ground OpenGL");
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}

