#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

#define VALOR_BONIFICACAO 15.0

class Gerente
{
public:
    double salarioBase; // valor m�nimo recebido pelo funcion�rio
    string idade;
    string nome;
    int rgFunc;
    double bonificacao;

    void print();

    double calcula_bonificacao_gerente(int numTotalVendas);
};

#endif
