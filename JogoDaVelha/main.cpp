//
//  main.cpp
//  JogoDaVelha
//
//  Created by Marcos Carvalho on 13/03/21.
//

#include <iostream>

#include "JogoDaVelha.hpp"

int main(int argc, const char * argv[]) {
    JogoDaVelha jogo;
    char c = 'X';
    int x, y;
    bool final = false;
    
        while(!final) {
            cout << "Vez do Jogador \"" << c << "\"" << endl;
            cout << "Informe a linha: ";
            cin >> x;
            cout << "Informe a coluna: ";
            cin >> y;
            cout << "\n";

            if(jogo.jogar(c, x, y))
            {
                final = jogo.acabaJogo(c);
                c = c == 'X' ? 'O' : 'X';
            }
        }
    
    jogo.imprimeGrade();
    
    return 0;
}
