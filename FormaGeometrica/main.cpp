#include <iostream>
#include <locale.h>
#include "Triangulo.h"
#include "Retangulo.h"
#include "Circulo.h"

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
    Triangulo t;
    t.setLadoUm(9);
    t.setLadoDois(7);
    t.setLadoTres(14);
    t.calculaArea();
    
    Retangulo r;
    r.setBase(10);
    r.setAltura(2);
    r.calculaArea();
    
    Circulo c;
    c.setRaio(20);
    c.calculaArea();
    
    return 0;       
}