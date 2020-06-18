#include <iostream>
#include <GL/freeglut.h>
void init() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0f, 639.0f, 0.0f, 479.0f);
}
void disp() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.0f, 0.1f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(-1.0f, 485.0f);
	glVertex2f(645.0f, 485.0f);
	glVertex2f(645.0f, -1.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(300.0f, 300.0f);
	glVertex2f(360.0f, 360.0f);
	glVertex2f(420.0f, 300.0f);
	glVertex2f(360.0f, 240.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(305.0f, 300.0f);
	glVertex2f(360.0f, 355.0f);
	glVertex2f(415.0f, 300.0f);
	glVertex2f(360.0f, 245.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(10.0f, 200.0f);
	glVertex2f(60.0f, 250.0f);
	glVertex2f(100.0f, 250.0f);
	glVertex2f(180.0f, 200.0f);
	glVertex2f(100.0f, 150.0f);
	glVertex2f(60.0f, 150.0f);
	glVertex2f(10.0f, 185.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.0f, 252.0f);
	glVertex2f(10.0f, 252.0f);
	glVertex2f(10.0f, 147.0f);
	glVertex2f(0.0f, 147.0f);
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