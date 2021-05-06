//
//  Time.hpp
//  TimeEsportivo
//
//  Created by Marcos Carvalho on 04/05/21.
//

#ifndef Time_hpp
#define Time_hpp

#include <iostream>
#include <vector>
#include "Jogador.hpp"
using namespace std;

class Time
{
private:
    string nome;
    string categoria;
    int id;
    vector<Jogador> jogadores;
    static int geraId;
    
public:
    Time(){};
    Time(string nome, char cat);
    string getNome();
    string getCategoria();
    int getId();
    vector<Jogador>getJogadores();
    void setNome(string n);
    void setCategoria(string c);
    void adicionarJogador(char cat, string nome, string nacionalidade, string dataNascimento, float salarioBruto);
    void relatorioGeral();
    void relatorioFinanceiro();
};

#endif /* Time_hpp */
