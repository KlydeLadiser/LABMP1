#define GL_SILENCE_DEPRECATION
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <iostream>
using namespace std;


#include <cmath>


void drawGround() {
    glColor3f(0.2f, 0.6f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}

void drawHouse() {
    //wall
    glColor3f(245/255.0f, 234/255.0f, 218/255.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.3f, -0.5f);
    glVertex2f(-0.3f, 0.1f);
    glVertex2f(0.3f, 0.1f);
    glVertex2f(0.3f, -0.5f);
    glEnd();

    // roof
    glColor3f(0.6f, 0.1f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.4f, 0.1f);
    glEnd();

    // door
    glColor3f(122/255.0f, 77/255.0f, 0/255.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(0.1f, -0.5f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glEnd();

    // window
    glColor3f(175/255.0f, 235/255.0f, 232/255.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.09f, -0.0f);
    glVertex2f(-0.09f, -0.0f);
    glVertex2f(-0.09f, -0.15f);
    glVertex2f(0.09f, -0.15f);
    glEnd();

    glColor3f(71 / 255.0f, 48 / 255.0f, 8 / 255.0f);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, -0.15f);
    glVertex2f(-0.09f, -0.08f);
    glVertex2f(0.09f, -0.08f);
    glEnd();

    glColor3f(71 / 255.0f, 48 / 255.0f, 8 / 255.0f);
    glBegin(GL_LINES);
    glVertex2f(0.09f, -0.0f);
    glVertex2f(-0.09f, -0.0f);
    glVertex2f(-0.09f, -0.15f);
    glVertex2f(0.09f, -0.15f);
    glEnd();
}

void display() {
    glClearColor(0.6f, 0.8f, 1.0f, 1.0f);  // sky blue
    glClear(GL_COLOR_BUFFER_BIT);

    
    drawGround();
    drawHouse();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(700, 700);
    glutCreateWindow("Ex20 - Mini Scene");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
