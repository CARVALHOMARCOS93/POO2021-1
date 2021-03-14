//
//  Carro.cpp
//  Carros
//
//  Created by Marcos Carvalho on 13/03/21.
//
#include "Carro.hpp"

Carro::Carro(string t, string c, string p, int np, int a)
{
    tipo = t;
    cor = c;
    placa = p;
    nrPortas = np;
    ano = a;
}

string Carro::toString()
{
    return "\nTipo: " + tipo + "\n" +
           "Cor: " + cor + "\n" +
           "Placa: " + placa + "\n" +
           "Número de Portas: " + to_string(nrPortas) + "\n" +
           "Ano: " + to_string(ano) + "\n"
           + getEstadoCarro();
}

string Carro::getEstadoCarro()
{
    return "\nO carro está: " + string(ligado ? "ligado" : "desligado") + string(acelerando ? " e acelerando" : "") + string(freando ? " e freando" : "") + "\n\n";
}

void Carro::setCor(string c)
{
    cor = c;
}

void Carro::setPlaca(string p)
{
    placa = p;
}

void Carro::ligar()
{
    if(!ligado)
    {
        cout << "Ligando...\n";
        ligado = true;
        acelerando = false;
        freando = false;
    }
    else
    {
        cout << "O carro já está ligado.\n";
    }
}

void Carro::desligar()
{
    if(!ligado)
    {
        cout << "O carro já está desligado.\n";
    }
    else
    {
        cout << "Desligando...\n";
        ligado = false;
        freando = false;
        acelerando = false;
    }
}

void Carro::acelerar()
{
    if(!ligado)
    {
        cout << "Ligue o carro antes.\n";
    }
    else
    {
        cout << "Acelerando...\n";
        acelerando = true;
        freando = false;
    }
}

void Carro::frear()
{
    acelerando = false;
    if(!freando)
    {
        cout << "Freiando...\n";
    }
    freando = !freando;
}

string Carro::getTipo()
{
    return tipo;
}

string Carro::getCor()
{
    return cor;
}

string Carro::getPlaca()
{
    return placa;
}

int Carro::getNrPortas()
{
    return nrPortas;
}

int Carro::getAno()
{
    return ano;
}
