#ifndef Hotel_hpp
#define Hotel_hpp

#include <iostream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "Quarto.hpp"

using namespace std;

struct Reserva
{
	string dataInicio;
	string dataFim;
	int nrQuarto;
	int codCliente;
	string nomeFunc;
};
struct Cliente
{
	string nome;
	string telefone;
	int codCliente;
};

class Hotel
{
	private:
		vector<Reserva> reservas;
		vector<Quarto> quartos;
		vector<Cliente> clientes;
		
	public:
		Hotel(){};
		void verificaQuartoOcupado(int n);
		bool verificaQuartoOcupado(int n, string d1, string d2);
		void adicionarQuarto(Quarto q);
		void adicionarReserva(string dI, string dF, int nr, int cod, string n);
		void imprimirReservas(int cod);
		void relatorioGeral();
		void adicionaCliente(string n, int cod, string t);
		void alterarDadosCliente(int cod, string n, string t);
		void listarClientes();	
};
#endif /* Hotel_hpp */