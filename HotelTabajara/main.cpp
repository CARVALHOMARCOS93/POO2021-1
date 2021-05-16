//
//  main.cpp
//  HotelTabajara
//
//  Created by Marcos Carvalho on 15/05/21.
//

#include <iostream>
#include "Quarto.hpp"
#include "Hotel.h"
#include <cstdlib>
#include <locale.h>

int main(int argc, const char * argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
//cria os quartos 101, 102 e 103
    Quarto q1("L", 101, 1);
    Quarto q2("S", 202, 2);
    Quarto q3("L", 303, 3);
    
//adiciona camas no quarto 101
    q1.adicionarCama("C");
    q1.adicionarCama("S");
    q1.adicionarCama("S");
    
//adiciona camas no quarto 102
    q2.adicionarCama("S");
    q2.adicionarCama("S");
    
//adiciona camas no quarto 103
    q3.adicionarCama("C");
    q3.adicionarCama("C");
    q3.adicionarCama("S");

//cria o Hotel    
    Hotel h1;

//Adiciona os quartos 101, 102 e 103 no HOTEL
    h1.adicionarQuarto(q1);
    h1.adicionarQuarto(q2);
    h1.adicionarQuarto(q3);

//Adiciona os clientes Nelson e Roberto    
    h1.adicionaCliente("Nelson", 999, "9999-9999");
    h1.adicionaCliente("Roberto", 888, "9999-8888");
    
//Adiciona reservas (Data Inicial, Data Final, Nº do quarto, Código do cliente, Nome do funcionário)
    h1.adicionarReserva("22/05/2021", "22/06/2021", 101, 999, "Juca"); //Reserva com sucesso
    h1.adicionarReserva("21/05/2021", "23/06/2021", 101, 999, "Juca"); //Mensagem de erro, pois tenta realizar a reserva em um período que já está com uma reserva
    h1.adicionarReserva("14/05/2021", "23/06/2021", 202, 999, "João"); //Reserva com sucesso
    h1.adicionarReserva("14/05/2021", "23/06/2021", 202, 777, "João"); //Mensagem de erro, pois o cliente informado (777) não está cadastrado no sistema
    h1.adicionarReserva("14/05/2021", "23/06/2021", 575, 999, "João"); //Mensagem de erro, pois o quarto informado (575) não está cadastrado no sistema
    h1.verificaQuartoOcupado(202); //Verifica se existe reserva para o quarto na data atual e retorna mensagem sinalizando a data de saida e o código do cliente que está no quarto
    h1.imprimirReservas(999); //mostra a quantidade de reservas realizadas pelo cliente com codigo cliente igual a 999 (Nelson)
    h1.imprimirReservas(888); //mostra a quantidade de reservas realizadas pelo cliente com codigo cliente igual a 888 (Roberto)
    h1.relatorioGeral(); //Imprime todas as reservas, informando o codigo do cliente, as informações do quarto, o perído e o nome do funcionário
    h1.alterarDadosCliente(888, "Nome Alterado", "7777-7777"); //altera os dados do cliente existente (nome e telefone) para os dados passados no parâmetro 
    h1.listarClientes(); //lista com todos os dados dos clientes existentes
    
    return 0;
}
