//
//  ZooAnimal.hpp
//  ZooAnimal
//
//  Created by Marcos Carvalho on 01/04/21.
//

#include <iostream>
using namespace std;

class ZooAnimal
{
private:
    string nome;
    int numeroLocalizacao;
    string dataPesagem;
    int peso;
    static string ultimaDataPesagem;
    
public:
    ZooAnimal(string nome, int nr, string dt, int peso);
    void setPeso(int p);
    int getPeso();
    static void setUltimaDataPesagem(string dt);
    void Detalhes();
};
