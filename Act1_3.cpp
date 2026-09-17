#define GL_SILENCE_DEPRECATION
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void display() {
    glClearColor(0.05f, 0.05f, 0.09f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glColor4f(1.0f, 0.1f, 0.15f, 0.5f);
    glBegin(GL_QUADS);
        glVertex2f(-0.65f, -0.40f); // bottom-left
        glVertex2f(-0.12f, -0.40f); // bottom-right
        glVertex2f(-0.12f,  0.40f); // top-right
        glVertex2f(-0.65f,  0.40f); // top-left
    glEnd();

    glColor4f(0.1f, 0.35f, 1.0f, 0.5f);
    glBegin(GL_QUADS);
        glVertex2f( 0.10f, -0.50f);
        glVertex2f( 0.60f, -0.50f);
        glVertex2f( 0.60f,  0.30f);
        glVertex2f( 0.10f,  0.30f);
    glEnd();

    glColor4f(0.1f, 1.0f, 0.15f, 0.5f);
    glBegin(GL_QUADS);
        glVertex2f(-0.40f, -0.20f);
        glVertex2f( 0.35f, -0.20f);
        glVertex2f( 0.35f,  0.52f);
        glVertex2f(-0.40f,  0.52f);
glEnd();

    glDisable(GL_BLEND);
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(600, 600);
    glutCreateWindow("MP3: Stained Glass Panels");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
