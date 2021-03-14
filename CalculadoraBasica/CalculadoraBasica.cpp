//
//  CalculadoraBasica.cpp
//  CalculadoraBasica
//
//  Created by Marcos Carvalho on 13/03/21.
//

#include "CalculadoraBasica.hpp"
#include <math.h>
#include <iostream>
using namespace std;

const char opcoes[5] = {'+', '-', '*', '/', '%'};

double Calculadora::somar(double x, double y)
{
    return x + y;
}

double Calculadora::subtrair(double x, double y)
{
    return x - y;
}

double Calculadora::multiplicar(double x, double y)
{
    return x * y;
}

double Calculadora::dividir(double x, double y)
{
    return x / y;
}

double Calculadora::modulo(double x, double y)
{
    return fmod(x, y);
}

void Calculadora::iniciar()
{
    char opcao = '0';
    double vlr1 = 0, vlr2 = 0;
    
    while (opcao != '#')
    {
        cout << "Calculadora\nOpções:\nAdição(+)\nSubtração(-)\nMultiplicação(*)\nDivisão(/)\nMódulo(%)\nSair(#)" << endl;
        cout << "Selecione uma opção: ";
        cin >> opcao;
        
        if (find(begin(opcoes), end(opcoes), opcao) != end(opcoes))
        {
            cout << "Digite o primeiro valor: ";
            cin >> vlr1;
            cout << "Digite o segundo valor: ";
            cin >> vlr2;
        }
        
        switch (opcao) {
            case '+':
                cout << vlr1 << opcao << vlr2 << " = " << somar(vlr1, vlr2) << endl;
                break;
            case '-':
                cout << vlr1 << opcao << vlr2 << " = " << subtrair(vlr1, vlr2) << endl;
                break;
            case '*':
                cout << vlr1 << opcao << vlr2 << " = " << multiplicar(vlr1, vlr2) << endl;
                break;
            case '/':
                cout << vlr1 << opcao << vlr2 << " = " << dividir(vlr1, vlr2) << endl;
                break;
            case '%':
                cout << vlr1 << opcao << vlr2 << " = " << modulo(vlr1, vlr2) << endl;
                break;
            case '#':
                cout << "\nSaindo..." << endl;
                break;
            default:
                cout << "\nOpção inválida." << endl;
            break;
        }
        
        cout << "\n";
    }
}
