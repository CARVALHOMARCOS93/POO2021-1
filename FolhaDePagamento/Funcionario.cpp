//
//  Disciplina.cpp
//  Notas
//
//  Created by Marcos Carvalho on 14/03/21.
//

#include "Funcionario.hpp"
Funcionario::Funcionario(string n, float s, string c)
{
    nome = n;
    salarioBase = s;
    cargo = c;
}

string Funcionario::getNome()
{
    return nome;
}

string Funcionario::getCargo()
{
    return cargo;
}

void Funcionario::setNome(string n)
{
    nome = n;
}

void Funcionario::setSalarioBase(float s)
{
    salarioBase = s;
}

void Funcionario::incluirDescontos(float desc)
{
    descontos.push_back(desc);
}

float Funcionario::getDescontos()
{
    float totalDescontos = 0;
    for(int i = 0; i < descontos.size(); i++)
    {
        totalDescontos += descontos[i];
    }
    return totalDescontos;
}

float Funcionario::calcularInss()
{
    float inss = salarioBase * 0.11;
    return inss > 318 ? 318 : inss;
}

float Funcionario::calcularIrpf()
{
    if(salarioBase <= 1192)
    {
        return 0;
    }
    else if(salarioBase <= 1700)
    {
        return salarioBase * 0.125;
    }
    else if(salarioBase <= 2200)
    {
        return salarioBase * 0.15;
    }
    else if(salarioBase <= 2700)
    {
        return salarioBase * 0.20;
    }
    else
    {
        return salarioBase * 0.275;
    }
}

float Funcionario::getSalarioBase()
{
    return salarioBase;
}

float Funcionario::getSalario()
{
    return salarioBase - calcularInss() - calcularIrpf() - getDescontos();
}
