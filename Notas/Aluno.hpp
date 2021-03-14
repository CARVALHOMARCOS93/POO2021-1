//
//  Aluno.hpp
//  Notas
//
//  Created by Marcos Carvalho on 14/03/21.
//

#include <iostream>
#include <string>
using namespace std;

class Aluno
{
public:
    Aluno(); // construtor
    Aluno(string n, float ga, float gb);
    void setGrauA(float n);
    void setGrauB(float n);
    void setAluno(string n, float ga, float gb);
    void calculaGrauFinal();
    void imprimeGrauFinal();
    
private:
    string nome;
    float grauA, grauB, grauFinal;
};
