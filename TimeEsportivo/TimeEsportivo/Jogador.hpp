//
//  Jogador.hpp
//  TimeEsportivo
//
//  Created by Marcos Carvalho on 03/05/21.
//

#ifndef Jogador_hpp
#define Jogador_hpp

#include <iostream>
using namespace std;

class Jogador
{
public:
    Jogador(char cat, string nome, string nacionalidade, string dataNascimento, float salarioBruto);
    float calculaSalarioLiquido();
    
    string getNome();
    string getNacionalidade();
    string getDataNascimento();
    int getId();
    bool isAtivo();
    float getSalarioBruto();
    int calculaIdade();
    int calculaTempo();
    string getCategoria();
    float getIr();
    float getInss();
    
    void setCategoria(char c);
    void setNome(string n);
    void setNacionalidade(string n);
    void setDataNascimento(string d);
    void setSalarioBruto(float s);
    
    void imprimeDadosFinanceiros();
    void imprimeDados();
    
private:
    string nome;
    string nacionalidade;
    string dataNascimento;
    string categoria;
    int id;
    static int geraId;
    float salarioBruto;
};
#endif /* Jogador_hpp */
