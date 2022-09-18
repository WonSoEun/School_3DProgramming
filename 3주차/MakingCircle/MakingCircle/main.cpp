#include<gl/glut.h>
#include<glm/glm.hpp>

void myDisplay()
{
	//windowâ�� ������ - ���������� ����.
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	//� ���۸� ���� ������ ���� - ������۸� ����.
	//������� : ���� ����Ϳ� ����� ũ�⸸ŭ �ȼ��� ���� �ִ� ����
	glClear(GL_COLOR_BUFFER_BIT);

	//�� ����
	glColor3f(1.0f, 0.0f, 0.0f);
	
	//������ ����
	double rad = 1;

	//���� �׸��� - ������ ������ ���� ���� ó�� �������� ������� �ʴ´�.
	glBegin(GL_LINE_STRIP);


	for (int i = 0; i < 360; i++)
	{
		double angle, x, y;
		
		//�������� �ٲ� ����ؾ��ϱ� ������
		angle = i * 3.141592 / 180;
		x = rad * cos(angle);
		y = rad * sin(angle);
		glVertex2f(x, y);
	}
	
	
	glEnd();

	//����� �� ������� �ʴ� ���¿��� return�� �� ���� - �ӵ� ���鿡�� ����
	glFlush();
}

int main(int argc, char* argv[])
{
	//GLUT���̺귯�� �ʱ�ȭ
	glutInit(&argc, argv);

	//width, height ���� 500 ����
	glutInitWindowSize(500, 500); 

	//window �̸� ����
	glutCreateWindow("3D Programming_Making Circle");
	
	//ȭ�� �׸� �� �Լ� ȣ��
	glutDisplayFunc(myDisplay);

	//��� �Լ� �����ϸ鼭 �߻��ϴ� �޼����� �޾� ó����.
	glutMainLoop();
	return 0;
}