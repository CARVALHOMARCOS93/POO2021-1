//
//  Cubo.cpp
//  Cubos
//
//  Created by Marcos Carvalho on 01/04/21.
//

#include "Cubo.hpp"
int Cubo::total = 0;

Cubo::Cubo(int lado)
{
    this->lado = lado;
    id = ++Cubo::total;
    
}

double Cubo::obterArea()
{
    return 6 * pow(lado, 2);
}

double Cubo::obterVolume()
{
    return pow(lado, 3);
}

double Cubo::obterLado()
{
    return lado;
}

int Cubo::totalDeCubos()
{
    return Cubo::total;
}

void Cubo::Dados()
{
    cout << "Cubo " << id << endl;
    cout << "Lado: " << lado << "m" << endl;
    cout << "Área total: " << this->obterArea() << "m²" << endl;
    cout << "Volume: " << this->obterVolume() << "m³" << endl << endl;
}
