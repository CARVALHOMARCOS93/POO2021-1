//
//  Empresa.hpp
//  FolhaDePagamento
//
//  Created by Marcos Carvalho on 14/03/21.
//

#include <iostream>
#include <string>
#include <vector>
#include "Funcionario.hpp"

using namespace std;
class Empresa
{
public:
    Empresa(string n);
    void incluirFuncionarios(Funcionario funcionario);
    void imprimirRelatorio();
    string getNome();
    
private:
    vector<Funcionario> funcionarios;
    string nome;
};
