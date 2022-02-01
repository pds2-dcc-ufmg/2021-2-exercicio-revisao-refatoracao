#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

/*
Foi feito um construtor para a classe Cliente, além da declaração de suas variáveis como private,
respeitando o encapsulamento.
Para o acesso dessas variáveis foram feitas funções get() const, definidas no hpp
Ademais, as variáveis foram inicializadas no construtor definido
Foi arrumada a indentação
A variável ValorBONIFICACAO foi declarada no .hpp em sua função.
*/

class Gerente {
    public:
        Gerente (string idade, int rg, string Nome, double salario,double Bonificacao):IDADE(idade),
                                                                        rgFunc(rg),
                                                                        nome(Nome),
                                                                        SalarioBase(salario),
                                                                        bonificacao(Bonificacao){};


        void printGerente();
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

        double getSalario() const;
        string getIdade() const;
        std::string getNome() const;
        int getRg() const;
        double getBonificacao() const;
        
        private:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string IDADE;
        string nome;
        int rgFunc;
        double bonificacao;

};

#endif

