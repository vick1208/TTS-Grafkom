#include <iostream>
#include <GL/freeglut.h>
#include <math.h>
void init() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0f, 639.0f, 0.0f,479.0f );
}
void disp() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(-1.0f, 485.0f);
	glVertex2f(645.0f, 485.0f);
	glVertex2f(645.0f, -1.0f);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(10.0f, 600.0f);
	glVertex2f(200.0f, 400.0f);
	glVertex2f(510.0f, 299.9f);
	glVertex2f(520.0f, 298.8f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(11.0f, 601.0f);
	glVertex2f(201.0f, 401.0f);
	glVertex2f(511.0f, 300.9f);
	glVertex2f(521.0f, 299.8f);
	glEnd();
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("TTS");
	glutDisplayFunc(disp);
	init();
	glutMainLoop();

	return 0;
}