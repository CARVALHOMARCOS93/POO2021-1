//
//  Carro.hpp
//  Carros
//
//  Created by Marcos Carvalho on 13/03/21.
//

#include<iostream>
using namespace std;

class Carro{
public:
    Carro(string t, string c, string p, int np, int a);
    string toString();
    void setCor(string c);
    void setPlaca(string placa);
    string getTipo();
    string getCor();
    string getPlaca();
    string getEstadoCarro();
    int getNrPortas();
    int getAno();
    void acelerar();
    void frear();
    void ligar();
    void desligar();
    
private:
    string tipo;
    string cor;
    string placa;
    int nrPortas;
    int ano;
    bool ligado = false;
    bool acelerando = false;
    bool freando = false;
};
