#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Funcionario {
	private:
        	double salarioBase; // valor minimo recebido pelo funcionario
        	std::string idade;
        	std::string nome;
        	int rgFunc; // numero do RG do funcionario
	public:
        	void print();

		double getSalarioBase();
		std::string getIdade();
		std::string getNome();
		int getRgFunc();

		void setSalarioBase(double novoSalario);
		void setNome(std::string novoNome);
		void setIdade(std::string novaIdade);
		void setRgFunc(int novoRgFunc);
};

#endif
