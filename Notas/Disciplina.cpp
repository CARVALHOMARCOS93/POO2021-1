//
//  Disciplina.cpp
//  Notas
//
//  Created by Marcos Carvalho on 14/03/21.
//

#include "Disciplina.hpp"
Disciplina::Disciplina(string n)
{
    nome = n;
}
void Disciplina::setNome(string n)
{
    nome = n;
}
void Disciplina::incluirAluno(Aluno aluno)
{
    alunos.push_back(aluno);
}

void Disciplina::imprimeNotasFinais()
{
    cout << "Notas de " << nome << endl;
    for(int i = 0; i < alunos.size(); i++)
    {
        alunos[i].imprimeGrauFinal();
    }
    cout << "\n\n";
}
