//
//  main.cpp
//  ZooAnimal
//
//  Created by Marcos Carvalho on 01/04/21.
//

#include <iostream>
#include "ZooAnimal.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    ZooAnimal animal1("Tigre", 100, "03/02/2020", 250);
    ZooAnimal animal2("Girafa", 123, "14/05/2019", 800);
    ZooAnimal animal3("Lagarto Teiú", 201, "31/12/2017", 5);
    ZooAnimal animal4("Elefante", 400, "20/08/2000", 6000);
    
    animal1.setUltimaDataPesagem("31/03/2021");
    animal1.setPeso(240);
    animal2.setPeso(810);
    animal1.setUltimaDataPesagem("01/04/2021");
    animal3.setPeso(6);
    animal4.setPeso(5986);
    
    animal1.Detalhes();
    animal2.Detalhes();
    animal3.Detalhes();
    animal4.Detalhes();
    return 0;
}
