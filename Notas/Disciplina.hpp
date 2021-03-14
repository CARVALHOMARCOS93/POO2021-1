//
//  Disciplina.hpp
//  Notas
//
//  Created by Marcos Carvalho on 14/03/21.
//

#include <iostream>
#include <string>
#include <vector>
#include "Aluno.hpp"

using namespace std;
class Disciplina
{
    public:
        Disciplina(string n);
        void setNome(string n);
        void incluirAluno(Aluno aluno);
        void imprimeNotasFinais();
        
    private:
        string nome;
        vector<Aluno> alunos;
};

