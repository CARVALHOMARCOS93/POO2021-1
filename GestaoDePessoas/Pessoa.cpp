//
//  Pessoa.cpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 13/06/21.
//

#include "Pessoa.hpp"
Pessoa::Pessoa(string n, string e, string t)
{
    nome = n;
    endereco = e;
    telefone = t;
}

string Pessoa::getNome()
{
    return nome;
}

string Pessoa::getEndereco()
{
    return endereco;
}

string Pessoa::getTelefone()
{
    return telefone;
}

void Pessoa::setNome(string n)
{
    nome = n;
}

void Pessoa::setEndereco(string e)
{
    endereco = e;
}

void Pessoa::setTelefone(string t)
{
    telefone = t;
}

void Pessoa::imprimirDados()
{
    cout << "Nome: " << nome << endl;
    cout << "Endereço: " << endereco << endl;
    cout << "Telefone: " << telefone << endl;
}

void Pessoa::atualizar(string n, string e, string t)
{
    nome = n == "" ? nome : n;
    endereco = e == "" ? endereco : e;
    telefone = t == "" ? telefone : t;
}

