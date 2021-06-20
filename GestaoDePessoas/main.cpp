//
//  main.cpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 13/06/21.
//

#include <iostream>
#include "SistemaDeGestao.hpp"

int main(int argc, const char * argv[]) {
    SistemaDeGestao sg;
    sg.adicionarFornecedor("João", "Rua ABC, nr: 1", "9999-9999", 1000, 999);
    sg.adicionarFornecedor("Juca", "Rua DEF, nr: 12", "8888-8888", 1900, 4000);
    sg.adicionarFornecedor("Pedro", "Rua GHI, nr: 100", "7777-7777", 32000, 0);

    sg.adicionarAdministrador("Bruno", "Rua STU, nr: 19", "3333-3333", 1, 4000, 25, 2000);
    sg.adicionarAdministrador("Mateus", "Rua STU, nr: 19", "2222-2222", 2, 4000, 25, 2000);
    sg.adicionarAdministrador("Michel", "Rua VXY, nr: 184", "1111-1111", 10, 4000, 25, 1800);
    
    sg.adicionarOperario("Gustavo", "Rua ABC, nr: 229", "1212-1212", 10, 1800, 15, 9000, 10);
    sg.adicionarOperario("Luis", "Rua DEF, nr: 22", "1313-1313", 2, 1950, 17, 6500, 8);
    sg.adicionarOperario("Antonio", "Rua DEF, nr: 14", "1212-1212", 2, 1850, 15, 4000, 5);
    
    sg.adicionarVendedor("Marcio", "Rua GHI, nr: 400", "1414-1414", 1, 4700, 25, 13000, 15);
    sg.adicionarVendedor("Julio", "Rua JKL, nr: 9", "1515-1515", 1, 4599, 25, 10800, 11);
    sg.adicionarVendedor("José", "Rua MNO, nr: 2", "1616-1616", 1, 4830, 25, 23000, 18);
    
    //sg.listaPessoas();
    //sg.listaFornecedores();
    //sg.listaOperarios();
    //sg.listaAdministradores();
    //sg.listaVendedores();
    //sg.listaFuncionarios();
    sg.atualizarVendedor("Marcio", "Rua GHI, nr: 4909", "23907839823", 0, 0, 0, 0, 0);
    sg.listaPessoas();
    return 0;
}
