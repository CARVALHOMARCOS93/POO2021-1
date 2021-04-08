//
//  Cubo.hpp
//  Cubos
//
//  Created by Marcos Carvalho on 01/04/21.
//

#include <iostream>
using namespace std;

class Cubo
{
private:
    double lado;
    static int total;
    int id;
    
public:
    Cubo(int lado);
    double obterArea();
    double obterVolume();
    double obterLado();
    static int totalDeCubos();
    void Dados();
};
