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
	cout << "Ret�ngulo:" << endl;
	cout << "Base: " << base << "cm" << endl;
	cout << "Altura: " << altura << "cm" << endl;
	cout << "�rea: " << area << "cm� "<<endl << endl;
}