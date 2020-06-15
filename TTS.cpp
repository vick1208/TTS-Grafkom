#include <iostream>
#include <GL/freeglut.h>
void init() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0f, 639.0f, 0.0f,479.0f );
}
void disp() {
	glClear(GL_COLOR_BUFFER_BIT);
	
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