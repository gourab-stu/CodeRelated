#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

float ballX = 0.0f, ballY = 0.0f; // Ball position
float ballSpeedX = 0.02f, ballSpeedY = 0.015f; // Ball speed
float ballRadius = 0.1f; // Ball size
float ballColor[3] = {1.0, 0.0, 0.0}; // Initial ball color (Red)

// Function to draw a circle (ball)
void drawBall(float x, float y, float radius) {
    int numSegments = 50;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(ballColor[0], ballColor[1], ballColor[2]);
    glVertex2f(x, y);
    for (int i = 0; i <= numSegments; i++) {
        float angle = i * 2.0f * 3.14159f / numSegments;
        float dx = radius * cosf(angle);
        float dy = radius * sinf(angle);
        glVertex2f(x + dx, y + dy);
    }
    glEnd();
}

// Function to update ball position
void update(int value) {
    ballX += ballSpeedX;
    ballY += ballSpeedY;

    // Bounce off the walls
    if (ballX + ballRadius > 1.0f || ballX - ballRadius < -1.0f) {
        ballSpeedX = -ballSpeedX;
    }
    if (ballY + ballRadius > 1.0f || ballY - ballRadius < -1.0f) {
        ballSpeedY = -ballSpeedY;
    }

    glutPostRedisplay(); // Redraw
    glutTimerFunc(16, update, 0); // Run update every 16ms (~60 FPS)
}

// Function to display graphics
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawBall(ballX, ballY, ballRadius);
    glutSwapBuffers();
}

// Function to handle mouse clicks
void handleMouse(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == GLUT_LEFT_BUTTON) { // Left-click: Change ball color
            ballColor[0] = (float)rand() / RAND_MAX;
            ballColor[1] = (float)rand() / RAND_MAX;
            ballColor[2] = (float)rand() / RAND_MAX;
        } else if (button == GLUT_RIGHT_BUTTON) { // Right-click: Increase speed
            ballSpeedX *= 1.2f;
            ballSpeedY *= 1.2f;
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
    glutInitWindowSize(600, 600);
    glutCreateWindow("Bouncing Ball Game");

    init();

    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeys);
    glutMouseFunc(handleMouse);
    glutTimerFunc(16, update, 0);

    glutMainLoop();
    return 0;
}
