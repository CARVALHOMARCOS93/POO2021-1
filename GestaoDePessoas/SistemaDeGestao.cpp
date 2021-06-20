//
//  SistemaDeGestao.cpp
//  GestaoDePessoas
//
//  Created by Marcos Carvalho on 16/06/21.
//

#include "SistemaDeGestao.hpp"

void SistemaDeGestao::adicionarFornecedor(string n, string e, string t, float vc, float vd)
{
    fornecedores.push_back(Fornecedor(n, e, t, vc, vd));
}
void SistemaDeGestao::adicionarAdministrador(string n, string e, string t, int c, float sb, float im, float ac)
{
    administradores.push_back(Administrador(n, e, t, c, sb, im, ac));
}
void SistemaDeGestao::adicionarOperario(string n, string e, string t, int c, float sb, float im, float vp, float cm)
{
    operarios.push_back(Operario(n, e, t, c, sb, im, vp, cm));
}
void SistemaDeGestao::adicionarVendedor(string n, string e, string t, int c, float sb, float im, float vv, float cm)
{
    vendedores.push_back(Vendedor(n, e, t, c, sb, im, vv, cm));
}

void SistemaDeGestao::listaFuncionarios()
{
    cout << "Lista de funcionários: " << endl << endl;
    int contador = 0;
    
    for(int i = 0; i < administradores.size(); i++)
    {
        administradores[i].imprimirDados();
        administradores[i].calcularSalario();
        contador++;
    }
    
    for(int i = 0; i < operarios.size(); i++)
    {
        operarios[i].imprimirDados();
        operarios[i].calcularSalario();
        contador++;
    }
    
    for(int i = 0; i < vendedores.size(); i++)
    {
        vendedores[i].imprimirDados();
        vendedores[i].calcularSalario();
        contador++;
    }
    
    cout << "Total de funcionários: " << contador << endl;
    cout << "---------------------------------------------------------" << endl << endl;
}


void SistemaDeGestao::listaPessoas()
{
    cout << "Lista de pessoas: " << endl << endl;
    int contador = 0;
    
    for(int i = 0; i < administradores.size(); i++)
    {
        administradores[i].imprimirDados();
        cout << "\n";
        contador++;
    }
    
    for(int i = 0; i < operarios.size(); i++)
    {
        operarios[i].imprimirDados();
        cout << "\n";
        contador++;
    }
    
    for(int i = 0; i < vendedores.size(); i++)
    {
        vendedores[i].imprimirDados();
        cout << "\n";
        contador++;
    }
    
    for(int i = 0; i < fornecedores.size(); i++)
    {
        fornecedores[i].imprimirDados();
        cout << "\n";
        contador++;
    }
    
    cout << "Total de pessoas cadastrados no sistema: " << contador << endl << endl;
    cout << "---------------------------------------------------------" << endl << endl;
}

void SistemaDeGestao::listaFornecedores()
{
    cout << "Lista de fornecedores: " << endl << endl;
    int contador = 0;
    
    for(int i = 0; i < fornecedores.size(); i++)
    {
        cout << "Nome: " << fornecedores[i].getNome() << endl;
        cout.precision(2);
        cout << "Crédito: R$" << fixed << fornecedores[i].obterValorCredito() << endl;
        cout << "Dívida: R$" << fixed << fornecedores[i].obterValorDivida() << endl;
        fornecedores[i].obterSaldo();
        contador++;
    }
    
    cout << "Total de fornecedores: " << contador << endl << endl;
    cout << "---------------------------------------------------------" << endl << endl;
}

void SistemaDeGestao::listaAdministradores()
{
    cout << "Lista de administradores: " << endl << endl;
    int contador = 0;
    
    for(int i = 0; i < administradores.size(); i++)
    {
        cout << "Nome: " << administradores[i].getNome() << endl;
        cout.precision(2);
        cout << "Salário base: R$" << fixed << administradores[i].getSalarioBase() << endl;
        cout << "Imposto: " << administradores[i].getImposto() << "%" << endl;
        cout << "Ajuda de custo: R$" << fixed << administradores[i].getAjudaDeCusto() << endl;
        administradores[i].calcularSalario();
        contador++;
    }
    
    cout << "Total de administradores: " << contador << endl << endl;
    cout << "---------------------------------------------------------" << endl << endl;
}

void SistemaDeGestao::listaOperarios()
{
    cout << "Lista de operários: " << endl << endl;
    int contador = 0;
    
    for(int i = 0; i < operarios.size(); i++)
    {
        cout << "Nome: " << operarios[i].getNome() << endl;
        cout.precision(2);
        cout << "Salário base: R$" << fixed << operarios[i].getSalarioBase() << endl;
        cout << "Imposto: " << operarios[i].getImposto() << "%" << endl;
        cout << "Valor produção: R$" << fixed << operarios[i].getValorProducao() << endl;
        cout << "Comissão: " << operarios[i].getComissao() << "%" << endl;
        operarios[i].calcularSalario();
        contador++;
    }
    
    cout << "Total de operários: " << contador << endl << endl;
    cout << "---------------------------------------------------------" << endl << endl;
}

void SistemaDeGestao::listaVendedores()
{
    cout << "Lista de vendedores: " << endl << endl;
    int contador = 0;
    
    for(int i = 0; i < vendedores.size(); i++)
    {
        cout << "Nome: " << vendedores[i].getNome() << endl;
        cout.precision(2);
        cout << "Salário base: R$" << fixed << vendedores[i].getSalarioBase() << endl;
        cout << "Imposto: " << vendedores[i].getImposto() << "%" << endl;
        cout << "Valor vendas: R$" << fixed << vendedores[i].getValorVendas() << endl;
        cout << "Comissão: " << vendedores[i].getComissao() << "%" << endl;
        vendedores[i].calcularSalario();
        contador++;
    }
    
    cout << "Total de vendedores: " << contador << endl << endl;
    cout << "---------------------------------------------------------" << endl << endl;
}

void SistemaDeGestao::atualizarFornecedor(string n, string e, string t, float vc, float vd)
{
    for(int i=0; i < fornecedores.size(); i++)
    {
        if(fornecedores[i].getNome() == n)
        {
            fornecedores[i].atualizar(e, t, vc, vd);
            return;
        }
    }
    cout << "Nenhum fornecedor encontrado com o nome informado." << endl << endl;
}

void SistemaDeGestao::atualizarAdministrador(string n, string e, string t, int c, float sb, float im, float ac)
{
    for(int i=0; i < administradores.size(); i++)
    {
        if(administradores[i].getNome() == n)
        {
            administradores[i].atualizar(e, t, c, sb, im, ac);
            return;
        }
    }
    cout << "Nenhum administrador encontrado com o nome informado." << endl << endl;
}
void SistemaDeGestao::atualizarOperario(string n, string e, string t, int c, float sb, float im, float vp, float cm)
{
    for(int i=0; i < operarios.size(); i++)
    {
        if(operarios[i].getNome() == n)
        {
            operarios[i].atualizar(e, t, c, sb, im, vp, cm);
            return;
        }
    }
    cout << "Nenhum operário encontrado com o nome informado." << endl << endl;
}
void SistemaDeGestao::atualizarVendedor(string n, string e, string t, int c, float sb, float im, float vv, float cm)
{
    for(int i=0; i < vendedores.size(); i++)
    {
        if(vendedores[i].getNome() == n)
        {
            vendedores[i].atualizar(e, t, c, sb, im, vv, cm);
            return;
        }
    }
    cout << "Nenhum vendedor encontrado com o nome informado." << endl << endl;
}
