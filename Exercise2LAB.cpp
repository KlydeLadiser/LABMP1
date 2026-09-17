// Machine Problem 02: Retro Sunburst Fan (GL_TRIANGLE_FAN)
#include <GL/glut.h>
#include <iostream>
using namespace std;

void display()
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);

    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);

    for(i =0; i < SEGMENT_COUNT; i++)
    {
        float angle = 2.0f * PI * i / SEGMENT_COUNT;
        float x = 0.75f * cosf(angle);
        float y = 0.75f * sinf(angle)

        if(i % 2 == 0)
        {
            glColor3f(1.0f, 1.0f, 0.0f); // green
        } else {
            glColor3f(1.0f, 0.0f, 0.0f); // red      
        }

        glVertex2f(x, y);
    }

    glEnd();
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
    glutCreateWindow("Machine Problem 02: Retro Sunburst Fan (GL_TRIANGLE_FAN)");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
