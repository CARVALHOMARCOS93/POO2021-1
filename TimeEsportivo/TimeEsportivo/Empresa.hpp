//
//  Empresa.hpp
//  TimeEsportivo
//
//  Created by Marcos Carvalho on 04/05/21.
//

#ifndef Empresa_hpp
#define Empresa_hpp

#include <iostream>
#include <vector>
#include "Time.hpp"
using namespace std;

class Empresa
{
private:
    vector<Time>times;
public:
    Empresa(){};
    void pesquisarJogador(int id);
    void pesquisarJogador(string nome);
    void adicionarTime(Time t);
    void imprimeRelatorio();
    void imprimeRelatorioFinanceiro();
    Time getTime(string n);
};
#endif /* Empresa_hpp */
