//
//  Pessoa.hpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 13/06/21.
//

#ifndef Pessoa_hpp
#define Pessoa_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Pessoa
{
public:
    Pessoa(){};
    Pessoa(string n, string e, string t);
    string getNome();
    string getEndereco();
    string getTelefone();
    void setNome(string n);
    void setEndereco(string e);
    void setTelefone(string t);
    void imprimirDados();
    virtual void atualizar(string n, string e, string t);

protected:
    string nome;
    string endereco;
    string telefone;
};

#endif /* Pessoa_hpp */
