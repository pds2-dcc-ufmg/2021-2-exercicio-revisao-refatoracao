#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <string>

class Gerente : public Funcionario {
	private:
		double valorBonificacao = 15.0;

	public:
		void print();
		double calculaBonificacaoGerente(int numVendas);

		double getSalarioBase();
		std::string getIdade();
		std::string getNome();
		int getRgFunc();

		void setSalarioBase(double salario);
		void setNome(std::string novoNome);
		void setIdade(std::string novaIdade);
		void setRgFunc(int novoRgFunc);
};

#endif
