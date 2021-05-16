//
//  Quarto.hpp
//  HotelTabajara
//
//  Created by Marcos Carvalho on 15/05/21.
//

#ifndef Quarto_hpp
#define Quarto_hpp

#include <iostream>
#include <vector>
#include "Cama.hpp"
using namespace std;

class Quarto
{
private:
    vector<Cama> camas;
    string tipoQuarto;
    int numero;
    int andar;
    
public:
    Quarto(string t, int n, int a);
    void adicionarCama(string t);
    string getTipoQuarto();
    int getNumero();
    int getAndar();
    void imprimeDados();
};

#endif /* Quarto_hpp */
