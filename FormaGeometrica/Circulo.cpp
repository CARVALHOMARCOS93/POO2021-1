#include "Circulo.h"
#include <math.h>

void Circulo::setRaio(float r)
{
	raio = r;
}

void Circulo::calculaArea()
{
	area = M_PI * pow(raio, 2) ; //pi * raio ao quadrado
	cout << "Circulo:" << endl;
	cout << "Raio: " << raio << "cm" << endl;
	cout << "Area: " << area << "cm² "<<endl << endl;
}