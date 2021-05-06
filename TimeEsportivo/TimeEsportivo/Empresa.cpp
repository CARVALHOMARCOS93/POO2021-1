//
//  Empresa.cpp
//  TimeEsportivo
//
//  Created by Marcos Carvalho on 04/05/21.
//

#include "Empresa.hpp"
void Empresa::pesquisarJogador(int id)
{
    for(int i=0; i < times.size(); i++)
    {
        Time t = times[i];
        for(int x= 0; x < t.getJogadores().size(); x++)
        {
            Jogador j = t.getJogadores()[x];
            if(j.getId() == id)
            {
                cout << "O jogador pertence ao time: " << t.getNome() << endl;
                j.imprimeDadosFinanceiros();
                cout << endl;
                return;
            }
        }
    }
    cout << "Nenhum jogador encontrado com o id " << id << endl << endl;
    return;
}
void Empresa::pesquisarJogador(string nome)
{
    for(int i=0; i < times.size(); i++)
    {
        Time t = times[i];
        for(int x= 0; x < t.getJogadores().size(); x++)
        {
            Jogador j = t.getJogadores()[x];
            if(j.getNome() == nome)
            {
                cout << "O jogador pertence ao time: " << t.getNome() << endl;
                j.imprimeDadosFinanceiros();
                cout << endl;
                return;
            }
        }
    }
    cout << "Nenhum jogador encontrado com o nome " << nome << endl << endl;
    return;
}

void Empresa::adicionarTime(Time t)
{
    times.push_back(t);
}

void Empresa::imprimeRelatorio()
{
    cout << "Relatório geral: " << endl;
    for(int i=0; i < times.size(); i++)
    {
        times[i].relatorioGeral();
    }
}

void Empresa::imprimeRelatorioFinanceiro()
{
    float salTotal = 0;
    float inssTotal = 0;
    float irTotal = 0;
    
    cout << "Relatório financeiro: " << endl;
    for(int i=0; i < times.size(); i++)
    {
        Time t = times[i];
        for(int x=0; x < t.getJogadores().size(); x++)
        {
            Jogador j = t.getJogadores()[x];
            if(j.isAtivo())
            {
                salTotal += j.calculaSalarioLiquido();
                inssTotal += j.getInss();
                irTotal += j.getIr();
            }
        }
    }
    
    cout << "Total salários: R$" << salTotal << endl;
    cout << "Total INSS: R$" << inssTotal << endl;
    cout << "Total IR: R$" << irTotal << endl;
    cout << "Total Geral: R$" << salTotal + inssTotal + irTotal << endl << endl;
}

Time Empresa::getTime(string n)
{
    for(int i = 0; i < times.size(); i++)
    {
        if(times[i].getNome() == n)
        {
            return times[i];
        }
    }
    return Time();
}
