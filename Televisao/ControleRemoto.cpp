//
//  ControleRemoto.cpp
//  Televisao
//
//  Created by Marcos Carvalho on 21/03/21.
//

#include "ControleRemoto.hpp"
void ControleRemoto::diminuirVolume()
{
    this -> televisao.diminuiVolume();
}

void ControleRemoto::aumentarVolume()
{
    this -> televisao.aumentaVolume();
}

void ControleRemoto::diminuirCanal()
{
    int canalAtual = this->televisao.getCanal();
    if(canalAtual == 0)
    {
        this->televisao.setCanal(100);
    }
    else
    {
        this->televisao.setCanal(canalAtual -= 1);
    }
}

void ControleRemoto::aumentarCanal()
{
    int canalAtual = this->televisao.getCanal();
    if(canalAtual == 100)
    {
        this->televisao.setCanal(0);
    }
    else
    {
        this->televisao.setCanal(canalAtual += 1);
    }
}

void ControleRemoto::trocarCanal(int c)
{
    this->televisao.setCanal(c);
}

void ControleRemoto::imprimirEstado()
{
    this->televisao.imprimeEstado();
}

void ControleRemoto::ligaDesliga()
{
    this->televisao.setLigaDesliga();
}
