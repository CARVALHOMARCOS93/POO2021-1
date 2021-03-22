//
//  Agenda.hpp
//  Agenda
//
//  Created by Marcos Carvalho on 21/03/21.
//


#include <iostream>
#include <vector>
#include "Pessoa.hpp"
using namespace std;

class Agenda
{
public:
    Agenda(){};
    void armazenaPessoa(string nome, int idade, float altura);
    void removePessoa(string nome);
    int buscaPessoa(string nome);
    void imprimeAgenda();
    void imprimePessoa(int index);
    
private:
    vector<Pessoa> listaDePessoas;
};

