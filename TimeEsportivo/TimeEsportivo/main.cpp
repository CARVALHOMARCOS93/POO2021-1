//
//  main.cpp
//  TimeEsportivo
//
//  Created by Marcos Carvalho on 03/05/21.
//

#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <sstream>
#include "Time.hpp"
#include "Empresa.hpp"

vector<string> split (const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}

int main(int argc, const char * argv[]) {
    ifstream dados("dados.txt");
    if(!dados.is_open())
    {
        cout << "Falha ao abrir arquivo" << endl;
    }
    
    string _nome;
    string _dataNascimento;
    string _nacionalidade;
    string _categoria;
    string _salarioBruto;
    string _time;
    
    vector<string>_dados;
    map<string, char> times_map;
    
    while (dados.good()) {
        getline(dados, _nome, ',');
        getline(dados, _dataNascimento, ',');
        getline(dados, _nacionalidade, ',');
        getline(dados, _categoria, ',');
        getline(dados, _salarioBruto, ',');
        getline(dados, _time, '\n');
        
        _dados.push_back(_nome + "," + _dataNascimento + "," + _nacionalidade + "," + _categoria + "," + _salarioBruto + "," + _time);
        times_map.insert(pair<string, char>(_time, _categoria.c_str()[0]));
    }
    
    Empresa emp;
    
    for(auto it = times_map.begin(); it != times_map.end(); ++it)
    {
        Time t(it->first, it->second);
        for(int i=0; i < _dados.size();i++)
        {
            if(split(_dados[i], ',')[5] == t.getNome())
            {
                string nome = split(_dados[i], ',')[0];
                string dataNascimento= split(_dados[i], ',')[1];
                string nacionalidade = split(_dados[i], ',')[2];
                char cat = split(_dados[i], ',')[3].c_str()[0];
                float salarioBruto = stof(split(_dados[i], ',')[4]);
                t.adicionarJogador(cat, nome, nacionalidade, dataNascimento, salarioBruto);
            };
        }
        emp.adicionarTime(t);
    }

    //emp.imprimeRelatorio();
    //emp.pesquisarJogador(99);
    //emp.pesquisarJogador("Carlos");
    //emp.imprimeRelatorioFinanceiro();
    
    //emp.getTime("Inter").relatorioFinanceiro();
    emp.getTime("Inter").relatorioGeral();
    
    return 0;
}
