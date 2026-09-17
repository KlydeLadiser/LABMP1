#define GL_SILENCE_DEPRECATION

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void display() {
    glClearColor(0.95f, 0.95f, 0.95f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.2f, 0.75f, 0.45f);

    glBegin(GL_QUAD_STRIP);
        // Left high point
        glColor3f(0.10f, 0.70f, 0.40f);
        glVertex2f(-0.85f, -0.45f); glVertex2f(-0.85f, -0.15f);

        // First low point
        glColor3f(0.55f, 0.80f, 0.20f);
        glVertex2f(-0.425f, -0.65f); glVertex2f(-0.425f, -0.35f);

        // Middle high point
        glColor3f(0.95f, 0.70f, 0.10f);
        glVertex2f(0.00f, -0.45f); glVertex2f(0.00f, -0.05f);

        // Second low point
        glColor3f(0.95f, 0.35f, 0.15f);
        glVertex2f(0.425f, -0.65f); glVertex2f(0.425f, -0.35f);

        // Right high point
        glColor3f(0.80f, 0.20f, 0.55f);
        glVertex2f(0.85f, -0.45f); glVertex2f(0.85f, -0.05f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("W-Shaped Ribbon");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}