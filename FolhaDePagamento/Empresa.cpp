//
//  Empresa.cpp
//  FolhaDePagamento
//
//  Created by Marcos Carvalho on 14/03/21.
//

#include "Empresa.hpp"
#include <iomanip>

Empresa::Empresa(string n)
{
    nome = n;
}
void Empresa::incluirFuncionarios(Funcionario funcionario)
{
    funcionarios.push_back(funcionario);
}
void Empresa::imprimirRelatorio()
{
    cout << "Empresa: " << nome << endl;
    cout << "Folha de pagamento: " << endl;
    cout << "\n";
    for(int i = 0; i < funcionarios.size(); i++)
    {
        cout << "Nome: " << funcionarios[i].getNome() << endl;
        cout << "Cargo: " << funcionarios[i].getCargo() << endl;
        cout << "Salario base: R$" << fixed << setprecision(2) << funcionarios[i].getSalarioBase() << endl;
        cout << "INSS: R$" << fixed << setprecision(2) << funcionarios[i].calcularInss() << endl;
        cout << "IRPF: R$" << fixed << setprecision(2) << funcionarios[i].calcularIrpf() << endl;
        cout << "Outros descontos: R$" << fixed << setprecision(2) << funcionarios[i].getDescontos() << endl;
        cout << "Salário liquido: R$" << fixed << setprecision(2) << funcionarios[i].getSalario() << endl;
        cout << "\n";
    }
}
string Empresa::getNome()
{
    return nome;
}
