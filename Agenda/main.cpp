//
//  main.cpp
//  Agenda
//
//  Created by Marcos Carvalho on 21/03/21.
//

#include <iostream>
#include "Agenda.hpp"

int main(int argc, const char * argv[]) {
    Agenda agenda;
    
    agenda.removePessoa("Paulo");
    
    agenda.armazenaPessoa("João", 22, 1.70);
    agenda.armazenaPessoa("Maria", 10, 1.80);
    agenda.armazenaPessoa("José", 9, 1.62);
    agenda.armazenaPessoa("Lucas", 35, 1.77);
    agenda.armazenaPessoa("Pedro", 40, 1.55);
    agenda.armazenaPessoa("Paulo", 82, 1.92);
    agenda.armazenaPessoa("Pablo", 90, 1.74);
    agenda.armazenaPessoa("Tiago", 30, 1.65);
    agenda.armazenaPessoa("Mateus", 25, 1.71);
    agenda.armazenaPessoa("Marcos", 27, 1.82);
    
    agenda.imprimePessoa(agenda.buscaPessoa("Paulo"));
    
    agenda.imprimeAgenda();
    agenda.removePessoa("Lucas");
    agenda.imprimeAgenda();
}
