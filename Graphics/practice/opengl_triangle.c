#include <GL/glut.h>

// Function to draw a triangle
void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen

    glBegin(GL_TRIANGLES);  // Start drawing a triangle
        glColor3f(1.0, 0.0, 0.0); // Red color
        glVertex2f(-0.5, -0.5);   // Bottom-left vertex

        glColor3f(0.0, 1.0, 0.0); // Green color
        glVertex2f(0.5, -0.5);    // Bottom-right vertex

        glColor3f(0.0, 0.0, 1.0); // Blue color
        glVertex2f(0.0, 0.5);     // Top vertex
    glEnd();

    glFlush(); // Render the drawing
}

// Function to initialize OpenGL settings
void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0); // Set background color to black
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode
    glutInitWindowSize(500, 500);          // Set window size
    glutCreateWindow("OpenGL Triangle");   // Create window
    init();                                // Initialize settings
    glutDisplayFunc(display);              // Set display callback
    glutMainLoop();                        // Start event loop
    return 0;
}
