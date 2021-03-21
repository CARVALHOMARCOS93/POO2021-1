//
//  Pessoa.cpp
//  Pessoa
//
//  Created by Marcos Carvalho on 20/03/21.
//

#include "Pessoa.hpp"
#include <ctime>
#include <string>
#include <iomanip>

Pessoa::Pessoa(string n, float alt, int d, int m, int a)
{
    nome = n;
    altura = alt;
    dtNascimento.dia = d;
    dtNascimento.mes = m;
    dtNascimento.ano = a;
    this -> setIdade();
}

void Pessoa::setNome(string n)
{
    nome = n;
}

string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setAltura(float a)
{
    altura = a;
}

float Pessoa::getAltura()
{
    return altura;
}

void Pessoa::setDtNascimento(int d, int m, int a)
{
    dtNascimento.dia = d;
    dtNascimento.mes = m;
    dtNascimento.ano = a;
    
    this->setIdade();
}

string Pessoa::getDtNascimento()
{
    return to_string(dtNascimento.dia) + "/" + to_string(dtNascimento.mes) + "/" + to_string(dtNascimento.ano);
}

void Pessoa::setIdade()
{
    time_t t = time(0);
    struct tm * now = localtime(&t);
    int ano = now->tm_year + 1900;
    int mes = now->tm_mon + 1;
    int dia = now->tm_mday;
    
    int difAno = (ano-dtNascimento.ano) * 365;
    int difMes = (mes-dtNascimento.mes) * 30;
    int difDia = dia-dtNascimento.dia;
    
    idade = (int)((difAno + difMes + difDia) / 365);
}

int Pessoa::getIdade()
{
    return idade;
}

void Pessoa::imprimeDados()
{
    cout << "Nome: " << nome << endl;
    cout << "Altura: " << altura << "m" << endl;
    
    cout << "Data nascimento: " << setfill('0') << setw(2) << dtNascimento.dia << "/" << setfill('0') << setw(2) << dtNascimento.mes << "/" << dtNascimento.ano << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "\n";
}
