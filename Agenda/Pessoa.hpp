//
//  Pessoa.hpp
//  Agenda
//
//  Created by Marcos Carvalho on 21/03/21.
//
#include <iostream>
using namespace std;

class Pessoa
{
public:
    Pessoa(string n, int i, float a);
    string getNome();
    void setNome(string n);
    int getIdade();
    void setIdade(int i);
    float getAltura();
    void setAltura(float a);
    void imprimeDados();
    
private:
    string nome;
    int idade;
    float altura;
};
