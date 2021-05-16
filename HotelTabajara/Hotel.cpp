#include "Hotel.h"
vector<string> split(const string& str, const string& delim)
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if (pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos-prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    }
    while (pos < str.length() && prev < str.length());
    return tokens;
}

void Hotel::relatorioGeral()
{
	if(reservas.size() > 0)
	{
		cout << "Relatório detalhado: " << endl; 
		for(int i = 0; i < reservas.size(); i++)
		{
			string dataInicio = reservas[i].dataInicio;
			string dataFim = reservas[i].dataFim;
			int nrQuarto = reservas[i].nrQuarto;
			int codCliente = reservas[i].codCliente;
			string nomeFunc = reservas[i].nomeFunc;
			cout << "Cliente: " << codCliente << endl;
			for(int x = 0; x < quartos.size(); x++)
			{
				if(quartos[x].getNumero() == nrQuarto)
				{
					quartos[x].imprimeDados();
				}
			}
			cout << "Período: " << dataInicio << " à " << dataFim << endl;
			cout << "Funcionário: " << nomeFunc << endl << endl;
		}
	}
	else
	{
		cout << "Nenhum registro de reservas." << endl << endl;
	}
}

void Hotel::verificaQuartoOcupado(int n)
{
	time_t t = time(0);
    struct tm * now = localtime(&t);
    int _ano = now->tm_year + 1900;
    int _mes = now->tm_mon + 1;
    int _dia = now->tm_mday;
	
	int dataAtual = (_ano * 365) + (_mes * 30) + _dia;
	
	for(int i = 0; i < reservas.size(); i++)
	{
		if(reservas[i].nrQuarto == n)
		{
			string dtIni = reservas[i].dataInicio;
			string dtFim = reservas[i].dataFim;
			int dIni = (atoi(split(dtIni, "/")[2].c_str()) * 365) + (atoi(split(dtIni, "/")[1].c_str()) * 30) + atoi(split(dtIni, "/")[0].c_str());
			int dFim = (atoi(split(dtFim, "/")[2].c_str()) * 365) + (atoi(split(dtFim, "/")[1].c_str()) * 30) + atoi(split(dtFim, "/")[0].c_str());
			//verifica se a data informada está no intervalo da reserva existente
			if(dataAtual >= dIni && dataAtual <= dFim)
			{
				cout << "O quarto " << n << " está ocupado pelo cliente " << reservas[i].codCliente << ". Previsão de saída em: " << dtFim << "." << endl << endl;
				return;
			}
		}
	}
}

bool Hotel::verificaQuartoOcupado(int n, string d1, string d2)
{
	int data1 = (atoi(split(d1, "/")[2].c_str()) * 365) + (atoi(split(d1, "/")[1].c_str()) * 30) + atoi(split(d1, "/")[0].c_str());
	int data2 = (atoi(split(d2, "/")[2].c_str()) * 365) + (atoi(split(d2, "/")[1].c_str()) * 30) + atoi(split(d2, "/")[0].c_str());
	
	
	for(int i = 0; i < reservas.size(); i++)
	{
		if(reservas[i].nrQuarto == n)
		{
			string dtIni = reservas[i].dataInicio;
			string dtFim = reservas[i].dataFim;
			int dIni = (atoi(split(dtIni, "/")[2].c_str()) * 365) + (atoi(split(dtIni, "/")[1].c_str()) * 30) + atoi(split(dtIni, "/")[0].c_str());
			int dFim = (atoi(split(dtFim, "/")[2].c_str()) * 365) + (atoi(split(dtFim, "/")[1].c_str()) * 30) + atoi(split(dtFim, "/")[0].c_str());
			//verifica se a data informada está no intervalo da reserva existente
			if((data1 >= dIni && data1 <= dFim) || (data2 >= dIni && data2 <= dFim) || (data1 <= dIni && data2 >= dFim))
			{
				cout << "O quarto " << n << " possui uma reserva entre " << dtIni << " e " << dtFim << " para o cliente " <<  reservas[i].codCliente << endl << endl;
				return true;
			}
		}
	}
	return false;
}

void Hotel::adicionarQuarto(Quarto q)
{
	quartos.push_back(q);
}

void Hotel::adicionarReserva(string dI, string dF, int nr, int cod, string n)
{
	bool existeCliente = false;
	for(int i = 0; i < clientes.size(); i++)
	{
		if(clientes[i].codCliente == cod)
		{
			existeCliente = true;
		}
	}
	if(!existeCliente)
	{
		cout << "O cliente informado não está cadastrado." << endl << endl;
		return;	
	}
	
	bool existeQuarto = false;
	for(int i = 0; i < quartos.size(); i++)
	{
		if(quartos[i].getNumero() == nr)
		{
			existeQuarto = true;
		}	 	
	}
	if(!existeQuarto)
	{
		cout << "O quarto informado não existe." << endl << endl;
		return;	
	}
	if(verificaQuartoOcupado(nr, dI, dF))
	{
		return;
	}
	
	Reserva reserva;
	reserva.dataInicio = dI;
	reserva.dataFim = dF;
	reserva.nrQuarto = nr;
	reserva.codCliente = cod;
	reserva.nomeFunc = n;
	
	reservas.push_back(reserva);
	cout << "Reserva do quarto " << nr << " realizada com sucesso." << endl << endl; 
}

void Hotel::imprimirReservas(int cod)
{
	int count = 0;
	for(int i = 0; i < reservas.size(); i++)
	{
	   if(reservas[i].codCliente == cod)
	   {
		   count++;
	   }	
	}
	if(count > 0)
	{
		cout << "O cliente " << cod << " já realizou " << count << " reserva(s)." << endl << endl;
	}
	else
	{
		cout << "O cliente " << cod << " não realizou nenhuma reserva." << endl << endl;
	}
}

void Hotel::adicionaCliente(string n, int cod, string t)
{
	Cliente cli;
	cli.nome = n;
	cli.codCliente = cod;
	cli.telefone = t;
	clientes.push_back(cli);
}

void Hotel::alterarDadosCliente(int cod, string n, string t)
{
	
	for(int i = 0; i < clientes.size(); i++)
	{
		if(clientes[i].codCliente == cod)
		{
			clientes[i].nome = n;
			clientes[i].telefone = t;
			return;
		}
	}
}

void Hotel::listarClientes()
{
	if(clientes.size() > 0)
	{
		cout << "Lista de clientes: " << endl;
		for(int i = 0; i < clientes.size(); i++)
		{
			cout << "Nome: " << clientes[i].nome << endl;
			cout << "Código do cliente: " << clientes[i].codCliente << endl;
			cout << "Telefone: " << clientes[i].telefone << endl << endl;
		}
	}
	else
	{
		 cout << "Nenhum cliente cadastrado." << endl << endl;	
	}
}