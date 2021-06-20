//
//  SistemaDeGestao.hpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 16/06/21.
//

#ifndef SistemaDeGestao_hpp
#define SistemaDeGestao_hpp

#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include "Fornecedor.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
using namespace std;

class SistemaDeGestao
{
private:
    vector<Fornecedor> fornecedores;
    vector<Administrador> administradores;
    vector<Operario> operarios;
    vector<Vendedor> vendedores;
public:
    void adicionarFornecedor(string n, string e, string t, float vc, float vd);
    void adicionarAdministrador(string n, string e, string t, int c, float sb, float im, float ac);
    void adicionarOperario(string n, string e, string t, int c, float sb, float im, float vp, float cm);
    void adicionarVendedor(string n, string e, string t, int c, float sb, float im, float vv, float cm);
    
    //7C1
    void listaPessoas();
    
    //7C2
    void listaFornecedores();
    
    //7C3
    void listaFuncionarios();
    void listaAdministradores();
    void listaOperarios();
    void listaVendedores();
    
    void atualizarFornecedor(string n, string e, string t, float vc, float vd);
    void atualizarAdministrador(string n, string e, string t, int c, float sb, float im, float ac);
    void atualizarOperario(string n, string e, string t, int c, float sb, float im, float vp, float cm);
    void atualizarVendedor(string n, string e, string t, int c, float sb, float im, float vv, float cm);
};

#endif /* SistemaDeGestao_hpp */
