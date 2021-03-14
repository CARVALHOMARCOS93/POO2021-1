//
//  Funcionario.hpp
//  Notas
//
//  Created by Marcos Carvalho on 14/03/21.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Funcionario
{
    public:
        Funcionario(string n, float s, string c);
        void setNome(string n);
        void incluirDescontos(float desc);
        void setSalarioBase(float s);
        float getDescontos();
        float getSalario();
        float getSalarioBase();
        float calcularInss();
        float calcularIrpf();
        string getNome();
        string getCargo();
    
        
    private:
    string cargo;
        string nome;
        float salarioBase;
        vector<float> descontos;
};

