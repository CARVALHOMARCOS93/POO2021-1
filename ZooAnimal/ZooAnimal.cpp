//
//  ZooAnimal.cpp
//  ZooAnimal
//
//  Created by Marcos Carvalho on 01/04/21.
//

#include "ZooAnimal.hpp"
string ZooAnimal::ultimaDataPesagem;
ZooAnimal::ZooAnimal(string nome, int nr, string dt, int peso)
{
    this->nome = nome;
    numeroLocalizacao = nr;
    dataPesagem = dt;
    this->peso = peso;
}
void ZooAnimal::setPeso(int p)
{
    peso = p;
    dataPesagem = ZooAnimal::ultimaDataPesagem;
}
int ZooAnimal::getPeso()
{
    return peso;
}
void ZooAnimal::setUltimaDataPesagem(string dt)
{
    ZooAnimal::ultimaDataPesagem = dt;
}
void ZooAnimal::Detalhes()
{
    cout << "Nome do animal: " << nome << endl;
    cout << "Nrº: " << numeroLocalizacao << endl;
    cout << "Última pesagem: " << dataPesagem << endl;
    cout << "Peso: " << peso << "kg" << endl << endl;
}
