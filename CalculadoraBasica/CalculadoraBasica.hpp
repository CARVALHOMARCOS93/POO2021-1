//
//  CalculadoraBasica.hpp
//  CalculadoraBasica
//
//  Created by Marcos Carvalho on 13/03/21.
//
#include <stdio.h>

class Calculadora{
public:
    Calculadora(){};
    void iniciar();
    
private:
    double somar(double x, double y);
    double subtrair(double x, double y);
    double multiplicar(double x, double y);
    double dividir(double x, double y);
    double modulo(double x, double y);
};

