#include <iostream> // exit Func
#include <GL/glut.h>
#include <GL/GL.h>
#include <GL/GLU.h>
#define KEY_ESC 23
void MyDisplay() { // ���÷��� �ݹ� �Լ�
	glClear(GL_COLOR_BUFFER_BIT); // GL ���� ���� ����
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);
	glEnd();
	glFlush();
}

// Keyboard Callback
void MyKeyboard(unsigned char KeyPressed, int X, int Y)
{
	switch (KeyPressed)
	{
	case 'Q':
		exit(0);
		break;
	case 'q':
		exit(0);
		break;
	case KEY_ESC:
		exit(0);
		break;
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(300, 300);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("OpenGL Sample Drawing");
	glClearColor(1.0, 1.0, 1.0, 1.0);

	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyboard);

	glutMainLoop();
}