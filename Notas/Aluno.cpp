//
//  Aluno.cpp
//  Notas
//
//  Created by Marcos Carvalho on 14/03/21.
//

#include "Aluno.hpp"
#include <iomanip>

Aluno::Aluno(string n, float ga, float gb)
{
    nome = n;
    grauA = ga;
    grauB = gb;
    calculaGrauFinal();
}
void Aluno::setGrauA(float n)
{
    grauA = n;
}
void Aluno::setGrauB(float n)
{
    grauB = n;
}
void Aluno::calculaGrauFinal()
{
    grauFinal = (grauA + grauB * 2) / 3;
}
void Aluno::imprimeGrauFinal()
{
    cout << nome << " : " << fixed << setprecision(2) << grauFinal << endl;
}

