#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

//Gerente possui muitas caracteristicas em comum com Funcionario.
#include "Funcionario.hpp"

class Gerente : public Funcionario{
    //Atributos publicos
    public:
        double GetBonificacao();
	double GetValorBonificacao();

	void SetValorBonificacao(int valorBonificacao);
	void SetBonificacao(int numTotalVendas);

        void print();

      private:
	double _bonificacao;
	double _valorBonificacao;

};

#endif

