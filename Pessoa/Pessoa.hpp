//
//  Pessoa.hpp
//  Pessoa
//
//  Created by Marcos Carvalho on 20/03/21.
//
#include <iostream>
using namespace std;

struct Data
{
    int dia;
    int mes;
    int ano;
};

class Pessoa{
    private:
    string nome;
    float altura;
    Data dtNascimento;
    int idade;
    void setIdade();
    
public:
    Pessoa(){};
    Pessoa(string n, float alt, int d, int m, int a);
    void setNome(string n);
    string getNome();
    void setAltura(float a);
    float getAltura();
    void setDtNascimento(int d, int m, int a);
    string getDtNascimento();
    void imprimeDados();
    int getIdade();
};
