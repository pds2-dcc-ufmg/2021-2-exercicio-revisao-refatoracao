#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;
class Gerente
{
public:
    double SalarioBase; // valor m�nimo recebido pelo funcion�rio
    string IDADE, nome;
    int rgFunc;
    double bonificacao;
    //printa informações do gerente
    void print();
    //Calcula a Bonificação do Gerente a partir do número total de vendas e do valor da bonificação
    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
};

#endif
