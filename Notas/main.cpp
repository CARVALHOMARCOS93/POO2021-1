//
//  main.cpp
//  Notas
//
//  Created by Marcos Carvalho on 14/03/21.
//

#include <iostream>
#include "Disciplina.hpp"

int main(int argc, const char * argv[]) {
    Disciplina matematica("Matemática");
    matematica.incluirAluno(Aluno("Pedro", 10, 9.5));
    matematica.incluirAluno(Aluno("João", 5, 9.2));
    matematica.incluirAluno(Aluno("Lucas", 3, 3.7));
    
    Disciplina portugues("Português");
    portugues.incluirAluno(Aluno("Marcos", 4, 5.9));
    portugues.incluirAluno(Aluno("Mateus", 2, 8.3));
    portugues.incluirAluno(Aluno("Tiago", 8, 9.3));
    
    matematica.imprimeNotasFinais();
    portugues.imprimeNotasFinais();
    
    return 0;
}
