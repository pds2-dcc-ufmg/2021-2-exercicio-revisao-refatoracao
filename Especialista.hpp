//NOTA DE ALTERA��ES
//Remo��o de redund�ncia public
//Corre��o de identa��o e espa�amentos
//Remo��o de vari�vel c criada desnecessariamente, e tamb�m da vari�vel percWanda
//Mudan�a da vari�vel perc para um par�metro de define, j� que � um n�mero est�tico
//Cria��o de arquivo cpp separado
//Incorpora��o de vari�veis que estavam para fora da fun��o em main
//Cria��o de m�todo construtor

#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

//Porcentagem de comissao
#define perc  0.1

class Especialista : public Funcionario {
public:
    //Informa��es especialista
    string especialidade;
    int numAtendimentos;
    double comissaoValor;

    //M�todo de inicializa��o
    Especialista(string, string, int, double, string, int, double);
    
    //C�lculo que retorna o valor de comissao
    double comissao(double);

    //Mostra os dados do especialista
    void print();
};

#endif
