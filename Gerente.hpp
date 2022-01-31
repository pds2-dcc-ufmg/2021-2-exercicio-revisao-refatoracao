//NOTA DE ALTERAÇÕES
//Classe Gerente passa a herdar classe Funcionario por conter variáveis que podem ser reaproveitadas
//Remoção de variáveis reutilizadas
//Mudança da variável ValorBONIFICACAO para um parâmetro de define, já que é um número estático
//Criação de método construtor
//Separação em arquivo cpp
//Remoção variável x desnecessária

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
        
        //Inicializa as variáveis
        Gerente(string, string, int, double, double);
        
        //Imprime os dados do gerente
        void print();
        
        //Calcula a bonficação
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
};

#endif

