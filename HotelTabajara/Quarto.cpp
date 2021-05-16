//
//  Quarto.cpp
//  HotelTabajara
//
//  Created by Marcos Carvalho on 15/05/21.
//

#include "Quarto.hpp"
Quarto::Quarto(string t, int n, int a)
{
    tipoQuarto = t == "L" ? "Luxo" : "Simples";
    numero = n;
    andar = a;
}

void Quarto::adicionarCama(string t)
{
    camas.push_back(Cama(t));
}

string Quarto::getTipoQuarto()
{
    return tipoQuarto;
}

int Quarto::getNumero()
{
    return numero;
}

int Quarto::getAndar()
{
    return andar;
}

void Quarto::imprimeDados()
{
    int casal = 0;
    int solteiro = 0;
    
    for(int i = 0; i < camas.size(); i++)
    {
        if(camas[i].getTipo() == "S")
        {
            solteiro++;
        }
        else
        {
            casal++;
        }
    }
    
    cout << "Quarto nº: " << numero << endl;
    cout << "Andar: " << andar << "º" << endl;
    cout << "Tipo de quarto: " << tipoQuarto << endl;
    cout << "Qtd. camas de solteiro: " << solteiro << endl;
    cout << "Qtd. camas de casal: " << casal << endl;
}
