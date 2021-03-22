//
//  Elevador.cpp
//  Elevador
//
//  Created by Marcos Carvalho on 21/03/21.
//

#include "Elevador.hpp"
Elevador::Elevador(int c, int a)
{
    capacidadeElevador = c;
    totalAndares  = a;
    andarAtual = 0;
    numeroPesoas = 0;
}

void Elevador::entra()
{
    if(numeroPesoas < capacidadeElevador)
    {
        cout << "Entrou!!!\n" << endl;
        numeroPesoas += 1;
    }
    else
    {
        cout << "O elevador está lotado!!!\n" << endl;
    }
}

void Elevador::sai()
{
    if(numeroPesoas > 0)
    {
        cout << "Saiu!!!\n" << endl;
        numeroPesoas -= 1;
    }
    else
    {
        cout << "O elevador está vazio!!!\n" << endl;
    }
}

void Elevador::sobe()
{
    if(andarAtual < totalAndares)
    {
        cout << "Subindo!!!\n" << endl;
        andarAtual += 1;
    }
    else
    {
        cout << "O elevador já está no último andar!!!\n" << endl;
    }
}

void Elevador::desce()
{
    if(andarAtual > 0)
    {
        cout << "Descendo!!!\n" << endl;
        andarAtual -= 1;
    }
    else
    {
        cout << "O elevador já está no térreo!!!\n" << endl;
    }
}


void Elevador::imprimeEstado()
{
    cout << "O prédio possui " << totalAndares << " andares" << endl;
    if(andarAtual == 0)
    {
        cout << "O elevador está parado no térreo" << endl;
    }
    else
    {
        cout << "O elevador está parado no " << andarAtual << "º andar" << endl;
    }
    cout << "A capacidade máxima do elevador é de " << capacidadeElevador << " pessoas" << endl;
    cout << "No momento, existe(m) " << numeroPesoas << " pessoa(s) dentro do elevador\n" << endl;
    
}
