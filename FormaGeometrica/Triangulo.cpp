#include "Triangulo.h"
#include <math.h>

void Triangulo::setLadoUm(float l)
{
	l1 = l;
}
void Triangulo::setLadoDois(float l)
{
	l2 = l;
}
void Triangulo::setLadoTres(float l)
{
	l3 = l;
}

void Triangulo::calculaArea()
{
	//fórmula de Heron
	float perimetro = (l1 + l2 + l3)/2;
	area = sqrt(perimetro * (perimetro - l1) * (perimetro - l2) * (perimetro - l3));
	
	cout << "Retângulo:" << endl;
	cout << "Lado 1: " << l1 << "cm" << endl;
	cout << "Lado 2: " << l2 << "cm" << endl;
	cout << "Lado 3: " << l3 << "cm" << endl;
	cout << "Area: " << area << "cm² "<<endl << endl;
}