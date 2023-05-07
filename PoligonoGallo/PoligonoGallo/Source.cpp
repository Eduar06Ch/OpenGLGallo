#include<gl/glut.h>
void IniciarConfiguracion() {
	glClearColor(1, 1, 1, 1);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(3.0);
	glOrtho(0, 800, 0, 600, 1, -1);
}

void DibujarTriangulos() {
	glClear(GL_COLOR_BUFFER_BIT);


	//cola
	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(132, 267);
	glVertex2i(158, 261);
	glVertex2i(150, 250);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(127, 266);
	glVertex2i(147, 246);
	glVertex2i(107, 246);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(110, 242);
	glVertex2i(140, 242);
	glVertex2i(128, 238);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(129, 235);
	glVertex2i(149, 240);
	glVertex2i(144, 226);
	glEnd();


	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(153, 241);
	glVertex2i(146, 223);
	glVertex2i(176, 217);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(126, 232);
	glVertex2i(142, 223);
	glVertex2i(133, 197);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(144, 220);
	glVertex2i(135, 187);
	glVertex2i(175, 211);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(183, 209);
	glVertex2i(139, 184);
	glVertex2i(211, 180);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(140, 180);
	glVertex2i(213, 176);
	glVertex2i(206, 140);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(135, 178);
	glVertex2i(149, 127);
	glVertex2i(149, 127);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(210, 138);
	glVertex2i(220, 177);
	glVertex2i(277, 164);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(135, 178);
	glVertex2i(149, 127);
	glVertex2i(204, 136);
	glEnd();


	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(157, 123);
	glVertex2i(209, 131);
	glVertex2i(212, 91);
	glEnd();


	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(216, 127);
	glVertex2i(218, 92);
	glVertex2i(258, 108);
	glEnd();


	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(215, 134);
	glVertex2i(288, 163);
	glVertex2i(264, 109);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(294, 164);
	glVertex2i(269, 108);
	glVertex2i(311, 121);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(299, 164);
	glVertex2i(337, 179);
	glVertex2i(314, 128);
	glEnd();


	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(342, 175);
	glVertex2i(319, 127);
	glVertex2i(358, 113);
	glEnd();


	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(347, 177);
	glVertex2i(364, 112);
	glVertex2i(400, 160);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(405, 156);
	glVertex2i(371, 113);
	glVertex2i(413, 121);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(221, 86);
	glVertex2i(260, 101);
	glVertex2i(257, 28);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(264, 98);
	glVertex2i(294, 84);
	glVertex2i(261, 35);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(268, 102);
	glVertex2i(311, 116);
	glVertex2i(297, 91);
	glEnd();



	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(230, 65);
	glVertex2i(235, 51);
	glVertex2i(248, 34);
	glEnd();

	glColor3f(0.6, 0.7, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(245, 22);
	glVertex2i(234, 13);
	glVertex2i(256, 13);
	glEnd();
	glFlush();
}

int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Demo Galloo");
	glutDisplayFunc(DibujarTriangulos);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}