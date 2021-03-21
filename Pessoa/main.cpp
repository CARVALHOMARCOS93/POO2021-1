//
//  main.cpp
//  Pessoa
//
//  Created by Marcos Carvalho on 20/03/21.
//

#include <iostream>
#include "Pessoa.hpp"

int main(int argc, const char * argv[]) {
    Pessoa pessoaMarcos;
    pessoaMarcos.setDtNascimento(20, 8, 1993);
    pessoaMarcos.setNome("Marcos Carvalho");
    pessoaMarcos.setAltura(1.80);
    pessoaMarcos.imprimeDados();
    
    Pessoa pessoaJoao("João da Silva", 1.55, 22, 3, 1999);
    pessoaJoao.imprimeDados();
    
    return 0;
}
