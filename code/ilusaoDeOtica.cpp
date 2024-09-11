#include <GL/glut.h>

int x1, y1, z1;
int x2 = 0, y2 = 0, z2 = 0;

void Inicializa(){
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-2.5, 2.5, -2.5, 2.5);
}

void LosangoVerticalSuperior(){
	x1 = 255 + x2;
	y1 = 255 + y2;
	z1 = 255 + z2;
	glBegin(GL_POLYGON);
	glColor3ub(25, 25, 25);
	glVertex3f(0.0, 0.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(-0.5, 1.0, 0.0);
	glVertex3f(0.0, 2.0, 0.0);
	glVertex3f(0.5, 1.0, 0.0);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(-0.5, 1.0, 0.0);
	glVertex3f(0.0, 2.0, 0.0);
	glVertex3f(0.5, 1.0, 0.0);
	glEnd();
}

void LosangoVerticalInferior(){
	x1 = 171 + x2;
	y1 = 0 + y2;
	z1 = 255 + z2;
	glBegin(GL_POLYGON);
	glColor3ub(25, 25, 25);
	glVertex3f(0.0, 0.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(-0.5, -1.0, 0.0);
	glVertex3f(0.0, -2.0, 0.0);
	glVertex3f(0.5, -1.0, 0.0);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(-0.5, -1.0, 0.0);
	glVertex3f(0.0, -2.0, 0.0);
	glVertex3f(0.5, -1.0, 0.0);
	glEnd(); 
}

void LosangoVerticalDireito(){
	x1 = 137 + x2;
	y1 = 193 + y2;
	z1 = 250 + z2;
	glBegin(GL_POLYGON);
	glColor3ub(x1, y1, z1);
	glVertex3f(2.0, 1.0, 0.0);
	glVertex3f(1.5, 0.0, 0.0);
	glVertex3f(2.0, -1.0, 0.0);
	glColor3ub(25, 25, 25);
	glVertex3f(2.5, 0.0, 0.0);
	glEnd(); 
	
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(2.0, 1.0, 0.0);
	glVertex3f(1.5, 0.0, 0.0);
	glVertex3f(2.0, -1.0, 0.0);
	glVertex3f(2.5, 0.0, 0.0);
	glEnd();  
}

void LosangoVerticalEsquerdo(){
	x1 = 137 + x2;
	y1 = 193 + y2;
	z1 = 250 + z2;
	glBegin(GL_POLYGON);
	glColor3ub(x1, y1, z1);
	glVertex3f(-2.0, 1.0, 0.0);
	glVertex3f(-1.5, 0.0, 0.0);
	glVertex3f(-2.0, -1.0, 0.0);
	glColor3ub(25, 25, 25);
	glVertex3f(-2.5, 0.0, 0.0);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(-2.0, 1.0, 0.0);
	glVertex3f(-1.5, 0.0, 0.0);
	glVertex3f(-2.0, -1.0, 0.0);
	glVertex3f(-2.5, 0.0, 0.0);
	glEnd(); 
}

void LosangoHorizontalSuperiorDireito(){
	x1 = 14 + x2;
	y1 = 174 + y2;
	z1 = 41 + z2;
    glBegin(GL_POLYGON);
    glColor3ub(25, 25, 25);
	glVertex3f(0.0, 0.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(0.5, 1.0, 0.0);
	glVertex3f(2.0, 1.0, 0.0);
	glVertex3f(1.5, 0.0, 0.0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.5, 1.0, 0.0);
	glVertex3f(2.0, 1.0, 0.0);
	glVertex3f(1.5, 0.0, 0.0);
	glEnd(); 
}

void LosangoHorizontalSuperiorDireito2(){
	x1 = 137 + x2;
	y1 = 193 + y2;
	z1 = 250 + z2;
    glBegin(GL_POLYGON);
    glColor3ub(x1, y1, z1);
	glVertex3f(0.0, 2.0, 0.0);
	glColor3ub(25, 25, 25);
	glVertex3f(1.5, 2.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(2.0, 1.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(0.5, 1.0, 0.0);
    glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.0, 2.0, 0.0);
	glVertex3f(1.5, 2.0, 0.0);
	glVertex3f(2.0, 1.0, 0.0);
	glVertex3f(0.5, 1.0, 0.0);
	glEnd(); 	
}

void LosangoHorizontalSuperiorEsquerdo(){
	x1 = 209 + x2;
	y1 = 22 + y2;
	z1 = 22 + z2; 
    glBegin(GL_POLYGON);
    glColor3ub(25, 25, 25);
	glVertex3f(0.0, 0.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(-0.5, 1.0, 0.0);
	glVertex3f(-2.0, 1.0, 0.0);
	glVertex3f(-1.5, 0.0, 0.0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(-0.5, 1.0, 0.0);
	glVertex3f(-2.0, 1.0, 0.0);
	glVertex3f(-1.5, 0.0, 0.0);
	glEnd(); 
}

void LosangoHorizontalSuperiorEsquerdo2(){
	x1 = 137 + x2;
	y1 = 193 + y2;
	z1 = 250 + z2;
    glBegin(GL_POLYGON);
    glColor3ub(x1, y1, z1);
	glVertex3f(0.0, 2.0, 0.0);
	glColor3ub(25, 25, 25);
	glVertex3f(-1.5, 2.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(-2.0, 1.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(-0.5, 1.0, 0.0);
    glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.0, 2.0, 0.0);
	glVertex3f(-1.5, 2.0, 0.0);
	glVertex3f(-2.0, 1.0, 0.0);
	glVertex3f(-0.5, 1.0, 0.0);
	glEnd(); 	
}

void LosangoHorizontalInferiorDireito(){
	x1 = 13 + x2;
	y1 = 18 + y2;
	z1 = 155 + z2;
    glBegin(GL_POLYGON);
    glColor3ub(25, 25, 25);
	glVertex3f(0.0, 0.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(0.5, -1.0, 0.0);
	glVertex3f(2.0, -1.0, 0.0);
	glVertex3f(1.5, 0.0, 0.0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.5, -1.0, 0.0);
	glVertex3f(2.0, -1.0, 0.0);
	glVertex3f(1.5, 0.0, 0.0);
	glEnd(); 
}

void LosangoHorizontalInferiorDireito2(){
	x1 = 137 + x2;
	y1 = 193 + y2;
	z1 = 250 + z2;
    glBegin(GL_POLYGON);
    glColor3ub(x1, y1, z1);
	glVertex3f(0.0, -2.0, 0.0);
	glColor3ub(25, 25, 25);
	glVertex3f(1.5, -2.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(2.0, -1.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(0.5, -1.0, 0.0);
    glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.0, -2.0, 0.0);
	glVertex3f(1.5, -2.0, 0.0);
	glVertex3f(2.0, -1.0, 0.0);
	glVertex3f(0.5, -1.0, 0.0);
	glEnd(); 	
}

void LosangoHorizontalInferiorEsquerdo(){
	x1 = 233 + x2;
	y1 = 233 + y2;
	z1 = 39 + z2;
    glBegin(GL_POLYGON);
    glColor3ub(25, 25, 25);
	glVertex3f(0.0, 0.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(-0.5, -1.0, 0.0);
	glVertex3f(-2.0, -1.0, 0.0);
	glVertex3f(-1.5, 0.0, 0.0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(-0.5, -1.0, 0.0);
	glVertex3f(-2.0, -1.0, 0.0);
	glVertex3f(-1.5, 0.0, 0.0);
	glEnd(); 
}

void LosangoHorizontalInferiorEsquerdo2(){
	x1 = 137 + x2;
	y1 = 193 + y2;
	z1 = 250 + z2;
    glBegin(GL_POLYGON);
    glColor3ub(x1, y1, z1);
	glVertex3f(0.0, -2.0, 0.0);
	glColor3ub(25, 25, 25);
	glVertex3f(-1.5, -2.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(-2.0, -1.0, 0.0);
	glColor3ub(x1, y1, z1);
	glVertex3f(-0.5, -1.0, 0.0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.0, -2.0, 0.0);
	glVertex3f(-1.5, -2.0, 0.0);
	glVertex3f(-2.0, -1.0, 0.0);
	glVertex3f(-0.5, -1.0, 0.0);
	glEnd(); 
}

void DesenhaFigura() {
    glClear(GL_COLOR_BUFFER_BIT);
    LosangoVerticalSuperior();
    LosangoVerticalInferior();
    LosangoVerticalDireito();
    LosangoVerticalEsquerdo();
	LosangoHorizontalSuperiorDireito();
	LosangoHorizontalSuperiorDireito2();
    LosangoHorizontalSuperiorEsquerdo();
	LosangoHorizontalSuperiorEsquerdo2();
	LosangoHorizontalInferiorDireito();
	LosangoHorizontalInferiorDireito2();
	LosangoHorizontalInferiorEsquerdo();
	LosangoHorizontalInferiorEsquerdo2();
    glFlush();
}

void Teclado(unsigned char tecla, int x, int y){
	if (tecla == 27){
		exit(0);	
	}		
}

void AlterarCores(int tecla, int x, int y){
    if(tecla == GLUT_KEY_UP){
    	x2 += 50;
    	y2 += 50;
    	z2 += 50;
		x1 = (x1 + 50) > 255 ? 0 : x1 + 50;
        y1 = (y1 + 50) > 255 ? 0 : y1 + 50;
        z1 = (z1 + 50) > 255 ? 0 : z1 + 50;
	}
	if(tecla == GLUT_KEY_DOWN){
		x2 -= 50;
    	y2 -= 50;
    	z2 -= 50;
		x1 = (x1 - 50) < 0 ? 255 : x1 - 50;
        y1 = (y1 - 50) < 0 ? 255 : y1 - 50;
        z1 = (z1 - 50) < 0 ? 255 : z1 - 50;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutCreateWindow("Ilusão de Ótica");
    glutDisplayFunc(DesenhaFigura);
	glutKeyboardFunc (Teclado);
	glutSpecialFunc(AlterarCores);
	Inicializa();
    glutMainLoop();
    return 0;
}
