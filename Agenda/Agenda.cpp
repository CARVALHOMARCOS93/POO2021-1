//
//  Agenda.cpp
//  Agenda
//
//  Created by Marcos Carvalho on 21/03/21.
//

#include "Agenda.hpp"
void Agenda::armazenaPessoa(string nome, int idade, float altura)
{
    listaDePessoas.push_back(Pessoa(nome, idade, altura));
}

void Agenda::removePessoa(string nome)
{
    if(listaDePessoas.size() > 0)
    {
        for(int i = 0; i < listaDePessoas.size(); i++)
        {
            if(listaDePessoas[i].getNome() == nome)
            {
                listaDePessoas.erase(listaDePessoas.begin()+i);
                cout << nome << " foi removido da agenda.\n" << endl;
            }
        }
    }
    else
    {
        cout << "Agenda vazia!!!" << endl;
    }
    
}

int Agenda::buscaPessoa(string nome)
{
    if(listaDePessoas.size() > 0)
    {
        for(int i = 0; i < listaDePessoas.size(); i++)
        {
            if(listaDePessoas[i].getNome() == nome)
            {
                return i;
            }
        }
        cout << "A pessoa informada não está cadastrada." << endl;
        return NULL;
    }
    else
    {
        cout << "Agenda vazia!!!" << endl;
        return NULL;
    }
}

void Agenda::imprimeAgenda()
{
    if(listaDePessoas.size() > 0)
    {
        for(int i = 0; i < listaDePessoas.size(); i++)
        {
            listaDePessoas[i].imprimeDados();
        }
    }
    else
    {
        cout << "Agenda vazia!!!" << endl;
    }
    
}

void Agenda::imprimePessoa(int index)
{
    listaDePessoas[index].imprimeDados();
}
