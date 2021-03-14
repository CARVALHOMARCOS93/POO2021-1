//
//  main.cpp
//  FolhaDePagamento
//
//  Created by Marcos Carvalho on 14/03/21.
//

#include <iostream>
#include "Empresa.hpp"

int main(int argc, const char * argv[]) {
    Funcionario funcionario1("João", 3000, "Faxineiro");
    funcionario1.incluirDescontos(300); //adiantamento
    Funcionario funcionario2("Vini", 100000, "Professor");
    funcionario2.incluirDescontos(20000); //adiantamento
    Funcionario funcionario3("José", 5000, "Professor");
    funcionario3.incluirDescontos(500); // adiantamento;
    funcionario3.incluirDescontos(200); //faltas;
    
    Empresa ritter("Uniritter");
    ritter.incluirFuncionarios(funcionario1);
    ritter.incluirFuncionarios(funcionario2);
    ritter.incluirFuncionarios(funcionario3);
    
    ritter.imprimirRelatorio();
    
    return 0;
}
