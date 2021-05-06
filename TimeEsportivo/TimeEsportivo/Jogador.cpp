//
//  Jogador.cpp
//  TimeEsportivo
//
//  Created by Marcos Carvalho on 03/05/21.
//
#include <sstream>
#include <vector>
#include "Jogador.hpp"

int Jogador::geraId = 1;

Jogador::Jogador(char cat, string nome, string nacionalidade, string dtNascimento, float salarioBruto)
{
    this->nome = nome;
    this->nacionalidade = nacionalidade;
    this->dataNascimento = dtNascimento;
    this->salarioBruto = salarioBruto;
    this->id = geraId++;
    this->setCategoria(cat);
}

void Jogador::setCategoria(char c)
{
    switch (tolower(c)) {
        case 'p':
            this->categoria = "Profissional";
            break;
        case 'b':
            this->categoria = "Base";
            break;
        default:
            this->categoria = "Base";
            break;
    }
}

float Jogador::getIr()
{
    if(salarioBruto < 1100)
        return 0;
    
    if(salarioBruto < 2000)
        return salarioBruto * (7.5/100.0);
    
    if(salarioBruto < 3100)
        return salarioBruto * (15/100.0);
    
    if(salarioBruto < 4100)
        return salarioBruto * (22/100.0);
    
    return salarioBruto * (27/100.0);
}

float Jogador::getInss()
{
    if(salarioBruto < 1100)
        return salarioBruto * (7.5/100.0);
    
    if(salarioBruto < 2000)
        return salarioBruto * (9/100.0);
    
    if(salarioBruto < 3100)
        return salarioBruto * (12/100.0	);
    
        return salarioBruto * (14/100.0);
}

string Jogador::getCategoria()
{
    return categoria;
}

string Jogador::getNome()
{
    return nome;
}

string Jogador::getNacionalidade()
{
    return nacionalidade;
}

string Jogador::getDataNascimento()
{
    return dataNascimento;
}

int Jogador::getId()
{
    return id;
}

float Jogador::getSalarioBruto()
{
    return salarioBruto;
}

bool Jogador::isAtivo()
{
    return this->calculaIdade() < 60;
}

int Jogador::calculaIdade()
{
        time_t t = time(0);
        struct tm * now = localtime(&t);
        int _ano = now->tm_year + 1900;
        int _mes = now->tm_mon + 1;
        int _dia = now->tm_mday;
    
        vector<string> result;
        stringstream xx (this->getDataNascimento());
        string item;

        while (getline(xx , item, '/')) {
            result.push_back (item);
        }
    
    
        int diaNascimento = stoi(result[0]);
        int mesNascimento = stoi(result[1]);
        int anoNascimento = stoi(result[2]);
        
        int difAno = (_ano-anoNascimento) * 365;
        int difMes = (_mes-mesNascimento) * 30;
        int difDia = _dia-diaNascimento;
        
        return (int)((difAno + difMes + difDia) / 365);
    

}

int Jogador::calculaTempo()
{
    int idade = this->calculaIdade();
    return 60 - idade;
}

void Jogador::setNome(string n)
{
    nome = n;
}

void Jogador::setNacionalidade(string n)
{
    nacionalidade = n;
}

void Jogador::setDataNascimento(string d)
{
    dataNascimento = d;
}

void Jogador::setSalarioBruto(float s)
{
    salarioBruto = s;
}

float Jogador::calculaSalarioLiquido()
{
    return salarioBruto-getIr()-getInss();
}

void Jogador::imprimeDados()
{
    cout << "Nome: " << nome << endl;
    cout << "Id: " << id << endl;
    cout << "Data de nascimento: " << dataNascimento << endl;
    cout << "Idade: " << calculaIdade() << " anos" << endl;
    cout << "Categoria: " << categoria << endl;
    cout << "Nacionalidade: " << nacionalidade << endl;
    
    if(isAtivo())
    {
        cout << "Se aposenta em: " << calculaTempo() << " anos" << endl << endl;
    }
    else
    {
        cout << "O jogador está aposentado." << endl << endl;
    }
    
}

void Jogador::imprimeDadosFinanceiros()
{
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << calculaIdade() << endl;
    if(isAtivo())
    {
        
        cout << "Salário bruto: R$" << salarioBruto << endl;
        cout << "Salário líquido: R$" << calculaSalarioLiquido() << endl;
    }
    else
    {
        cout << "O jogador está aposentado." << endl;
    }
    cout << endl;
}
