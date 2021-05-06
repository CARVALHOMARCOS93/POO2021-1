//
//  Time.cpp
//  TimeEsportivo
//
//  Created by Marcos Carvalho on 04/05/21.
//

#include "Time.hpp"
int Time::geraId = 1;

Time::Time(string nome, char cat)
{
    this->nome = nome;
    this->categoria = cat;
    id = geraId++;
}

string Time::getNome()
{
    return nome;
}

string Time::getCategoria()
{
    return categoria;
}

int Time::getId()
{
    return id;
}

vector<Jogador>Time::getJogadores()
{
    return jogadores;
}

void Time::setNome(string n)
{
    nome = n;
}

void Time::setCategoria(string c)
{
    categoria = c;
}

void Time::adicionarJogador(char cat, string nome, string nacionalidade, string dataNascimento, float salarioBruto)
{
    jogadores.push_back(Jogador(cat, nome, nacionalidade, dataNascimento, salarioBruto));
}

void Time::relatorioGeral()
{
    cout << "Time: " << nome << endl;
    cout << "Total de jogadores: " << jogadores.size() << endl << endl;
    
    if(jogadores.size() > 0)
    {
        for(int i = 0; i < jogadores.size(); i++)
        {
            jogadores[i].imprimeDados();
        }
    }
    
}

void Time::relatorioFinanceiro()
{
    for(int i = 0; i < jogadores.size(); i++)
    {
        jogadores[i].imprimeDadosFinanceiros();
    }
}
