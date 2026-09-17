// Machine Problem 01: Stippled Star Frame (GL_LINE_LOOP)
#include <GL/glut.h>
#include <iostream>
using namespace std;

void display() 
{
    glClear(GL_COLOR_BUFFER_BIT);

    // yellow
    glColor3f(1.0f, 1.0f, 0.0f);
    glLineWidth(3.0f);
    glEnable(GL_LINE_STRIPPLE);
    glLineStripple(2, 0x0F0F);


    glBegin(GL_TRIANGLE_LOOP);
    
        glVertex2f(0.0f, 0.8f); 
        glVertex2f(0.18f, 0.25f);
        glVertex2f(0.75f, 0.25f);
        glVertex2f(0.30f, -0.10f);
        glVertex2f(0.48f, -0.70f);
        glVertex2f(0.0f, -0.35f);
        glVertex2f(-0.48f, -0.70f);
        glVertex2f(-0.30f, -0.10f);
        glVertex2f(-0.75f, 0.25f);
         glVertex2f(-0.18f, 0.25f);

    glEnd();

    glDisable(GL_LINE_STRIPPLE);

    glFlush();
}

void init()
{   
    // black background
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0f, 1.0f, -1.0f, 1.0f);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Ex10 - Triangle Strip (GL_TRIANGLE_STRIP)");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
