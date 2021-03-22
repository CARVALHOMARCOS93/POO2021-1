//
//  Pessoa.cpp
//  Agenda
//
//  Created by Marcos Carvalho on 21/03/21.
//

#include "Pessoa.hpp"

Pessoa::Pessoa(string n, int i, float a)
{
    nome = n;
    idade = i;
    altura = a;
}
string Pessoa::getNome()
{
    return nome;
}
void Pessoa::setNome(string n)
{
    nome = n;
}
int Pessoa::getIdade()
{
    return idade;
}
void Pessoa::setIdade(int i)
{
    idade = i;
}
float Pessoa::getAltura()
{
    return altura;
}
void Pessoa::setAltura(float a)
{
    altura = a;
}

void Pessoa::imprimeDados()
{
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;
    cout << "\n";
}
