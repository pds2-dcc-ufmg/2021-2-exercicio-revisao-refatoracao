//NOTA DE ALTERA��ES
//Classe Gerente passa a herdar classe Funcionario por conter vari�veis que podem ser reaproveitadas
//Remo��o de vari�veis reutilizadas
//Mudan�a da vari�vel ValorBONIFICACAO para um par�metro de define, j� que � um n�mero est�tico
//Cria��o de m�todo construtor
//Separa��o em arquivo cpp
//Remo��o vari�vel x desnecess�ria

#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

#define ValorBONIFICACAO 15.0

class Gerente : public Funcionario {
    public:
        double bonificacao;
        
        //Inicializa as vari�veis
        Gerente(string, string, int, double, double);
        
        //Imprime os dados do gerente
        void print();
        
        //Calcula a bonfica��o
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
};

#endif

