#include <GL/glut.h>
#include <stdlib.h>

float angle = 0.0f; // Rotation angle
float colors[3] = {1.0, 0.0, 0.0}; // Initial color (Red)
int rotating = 1; // Flag to control rotation

// Function to draw a rotating triangle
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0f, 0.0f, 0.0f);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);

    glBegin(GL_TRIANGLES);  
        glColor3f(colors[0], colors[1], colors[2]);
        glVertex2f(-0.5, -0.5);

        glColor3f(colors[1], colors[2], colors[0]);
        glVertex2f(0.5, -0.5);

        glColor3f(colors[2], colors[0], colors[1]);
        glVertex2f(0.0, 0.5);
    glEnd();

    glutSwapBuffers();
}

// Function to update rotation
void update(int value) {
    if (rotating) {
        angle += 2.0f;
        if (angle > 360) {
            angle -= 360;
        }
        glutPostRedisplay();
    }
    glutTimerFunc(16, update, 0);
}

// Function to handle mouse input
void handleMouse(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == GLUT_LEFT_BUTTON) { 
            // Change triangle color randomly
            colors[0] = (float)rand() / RAND_MAX;
            colors[1] = (float)rand() / RAND_MAX;
            colors[2] = (float)rand() / RAND_MAX;
            glutPostRedisplay();
        } else if (button == GLUT_RIGHT_BUTTON) {
            // Pause/Resume rotation
            rotating = !rotating;
        }
    }
}

// Function to handle keyboard input
void handleKeys(unsigned char key, int x, int y) {
    if (key == 27) { // Esc key to exit
        exit(0);
    }
}

// Function to initialize OpenGL
void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Mouse Interaction in OpenGL");

    init();

    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeys);
    glutMouseFunc(handleMouse); // Register mouse function
    glutTimerFunc(16, update, 0);

    glutMainLoop();
    return 0;
}
