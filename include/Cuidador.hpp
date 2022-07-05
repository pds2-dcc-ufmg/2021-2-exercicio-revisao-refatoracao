#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <iostream>
#include <string>

class Cuidador{
	private:
		std::string nome;
		std::string cpf;
		std::string telefone;
		std::string nascimento;
		std::string salario;
	public:
		Cuidador();
		Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _nascimento, std::string _salario);
		void print();
		std::string getNome();
};

#endif
