#include <GL/glut.h>

void draw(void) {
    glColor3f(1.0, 1.0, 1.0);
    glutWireTeapot(0.5);
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(300, 300);
    glutCreateWindow("12000000 인트아이");
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}