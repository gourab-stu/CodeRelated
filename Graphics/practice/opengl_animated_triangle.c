#include <GL/glut.h>

float angle = 0.0f; // Rotation angle

// Function to draw a rotating triangle
void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen
    glLoadIdentity(); // Reset transformations

    glTranslatef(0.0f, 0.0f, 0.0f); // Move to the center
    glRotatef(angle, 0.0f, 0.0f, 1.0f); // Rotate around the Z-axis

    glBegin(GL_TRIANGLES);  
        glColor3f(1.0, 0.0, 0.0); // Red
        glVertex2f(-0.5, -0.5);

        glColor3f(0.0, 1.0, 0.0); // Green
        glVertex2f(0.5, -0.5);

        glColor3f(0.0, 0.0, 1.0); // Blue
        glVertex2f(0.0, 0.5);
    glEnd();

    glutSwapBuffers(); // Swap buffers for smooth animation
}

// Function to update the animation
void update(int value) {
    angle += 2.0f; // Increase rotation angle
    if (angle > 360) {
        angle -= 360;
    }
    glutPostRedisplay(); // Redraw the scene
    glutTimerFunc(16, update, 0); // Call update every 16ms (~60 FPS)
}

// Function to handle keyboard input
void handleKeys(unsigned char key, int x, int y) {
    if (key == 27) { // 27 is the ASCII code for the Esc key
        exit(0);
    }
}

// Function to initialize OpenGL settings
void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0); // Set background color to black
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);  
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); // Enable double buffering
    glutInitWindowSize(500, 500);
    glutCreateWindow("Rotating Triangle");

    init();

    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeys); // Register keyboard function
    glutTimerFunc(16, update, 0); // Start the animation loop

    glutMainLoop();
    return 0;
}
