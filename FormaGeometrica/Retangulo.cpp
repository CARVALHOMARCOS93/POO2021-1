#include "Retangulo.h"

void Retangulo::setBase(float b)
{
	base = b;
}
void Retangulo::setAltura(float a)
{
	altura = a;
}

void Retangulo::calculaArea()
{
	area = base * altura;
	cout << "Retângulo:" << endl;
	cout << "Base: " << base << "cm" << endl;
	cout << "Altura: " << altura << "cm" << endl;
	cout << "Área: " << area << "cm² "<<endl << endl;
}