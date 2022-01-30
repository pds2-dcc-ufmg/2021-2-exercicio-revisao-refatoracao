#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <string>

class Gerente : public Funcionario {
	private:
		double valorBonificacao = 15.0;

	public:
		void print();
		double calculaBonificacaoGerente(int numVendas);

};

#endif
