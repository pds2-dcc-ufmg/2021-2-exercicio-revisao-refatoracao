#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <string>

class Gerente : public Funcionario {
	private:
		double valorBonificacao = 15.0;
		double bonificacao;
	public:
		void print();
		double calculaBonificacaoGerente(int numVendas);

		double getSalarioBase();
		std::string getIdade();
		std::string getNome();
		int getRgFunc();
		double getBonificacao();
		void setSalarioBase(double novoSalario);
		void setNome(std::string novoNome);
		void setIdade(std::string novaIdade);
		void setRgFunc(int novoRgFunc);
		void setBonificacao(double novaBonificacao);
};

#endif
