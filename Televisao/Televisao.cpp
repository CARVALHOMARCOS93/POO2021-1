//
//  Televisao.cpp
//  Televisao
//
//  Created by Marcos Carvalho on 21/03/21.
//

#include "Televisao.hpp"
Televisao::Televisao()
{
    canal = 0;
    volume = 0;
    ligado = false;
}

int Televisao::getVolume()
{
    return volume;
}

void Televisao::aumentaVolume()
{
    if(volume < 100 && ligado)
    {
        cout << "Aumentando o volume...\n" << endl;
        volume += 1;
    }
    else if(!ligado)
    {
        cout << "Ligue a televisão antes!!!\n" << endl;
    }
    else
    {
        cout << "O volume está no máximo!!!\n" << endl;
    }
}

void Televisao::diminuiVolume()
{
    if(volume > 0 && ligado)
    {
        cout << "Diminuindo o volume...\n" << endl;
        volume -= 1;
    }
    else if(!ligado)
    {
        cout << "Ligue a televisão antes!!!\n" << endl;
    }
    else
    {
        cout << "O volume está no mínimo!!!\n" << endl;
    }
}

int Televisao::getCanal()
{
    return canal;
}

void Televisao::setCanal(int c)
{
    if(ligado)
    {
        cout << "Trocando de canal...\n" << endl;
        canal = c;
    }
    else
    {
        cout << "Ligue a televisão antes!!!\n" << endl;
    }
    
}

void Televisao::imprimeEstado()
{
    if(ligado)
    {
        cout << "O televisor está ligado no canal " << canal << " e o volume está no nível " << volume << "\n" << endl;
    }
    else
    {
        cout << "O televisor está desligado.\n" << endl;
    }
}

void Televisao::setLigaDesliga()
{
    if(!ligado)
    {
        cout << "Ligando...\n" << endl;
    }
    else
    {
        cout << "Desligando...\n" << endl;
    }
    ligado = !ligado;
}
