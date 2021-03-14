//
//  JogoDaVelha.cpp
//  JogoDaVelha
//
//  Created by Marcos Carvalho on 13/03/21.
//

#include "JogoDaVelha.hpp"
#include <iostream>

using namespace std;

void JogoDaVelha::imprimeGrade(){
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            cout << tabuleiro[x][y] << " ";
        }
        cout << "\n";
    }
}

bool JogoDaVelha::jogar(char c, int x, int y)
{
    if(toupper(c) != 'X' && toupper(c) != 'O')
    {
        cout << "Símbolo inválido" << endl;
        return false;
    }
    
    if(x < 0 || x > 2)
    {
        cout << "Linha inválida" << endl;
        return false;
    }
    
    if(y < 0 || y > 2)
    {
        cout << "Coluna inválida" << endl;
        return false;
    }
    
    if(tabuleiro[x][y] != '#')
    {
        cout << "A posição já contém a opção " << tabuleiro[x][y] << endl;
        return false;
    }
    else
    {
        tabuleiro[x][y] = toupper(c)	;
    }
    return true;
}

bool JogoDaVelha::acabaJogo(char c)
{
    bool final = true;
    
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            if(tabuleiro[x][y] == '#')
            {
                final = false;
            }
        }
    }
    
    //verifica as linhas
    for(int lin = 0; lin < 3; lin++)
    {
        if(tabuleiro[lin][0] == c && tabuleiro[lin][1] == c && tabuleiro[lin][2] == c)
        {
            cout << "Jogador \"" << c << "\" " << "venceu.\n";
            return true;
        }
    }
    
    //verifica as colunas
    for(int col = 0; col < 3; col++)
    {
        if(tabuleiro[0][col] == c && tabuleiro[1][col]  == c && tabuleiro[2][col] == c)
        {
            cout << "Jogador \"" << c << "\" " << "venceu.\n";
            return true;
        }
    }
    
    //verifica as diagonais
    if(tabuleiro[0][0] == c && tabuleiro[1][1] == c && tabuleiro[2][2] == c)
    {
        cout << "Jogador \"" << c << "\" " << "venceu.\n";
        return true;
    }
    if(tabuleiro[0][2] == c && tabuleiro[1][1] == c && tabuleiro[2][0] == c)
    {
        cout << "Jogador \"" << c << "\" " << "venceu.\n";
        return true;
    }
    
    if(final)
    {
        cout << "Empate!!!\n";
    }
    return final;
}
