//
//  main.cpp
//  Cubos
//
//  Created by Marcos Carvalho on 01/04/21.
//

#include <iostream>
#include "Cubo.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    Cubo c1(29);
    Cubo c2(27);
    Cubo c3(28);
    Cubo c4(6);
    
    c1.Dados();
    c2.Dados();
    c3.Dados();
    c4.Dados();
    
    cout << "Total de cubos: " << c3.totalDeCubos() << endl;
    return 0;
}
