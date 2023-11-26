#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private: 

		string NOME;
		string endereco;
		string Cep;

	public:

		void dados(string Name, string Address, string Cep_){
			NOME = Name;
			endereco = Address;
			Cep = Cep_;
		}


		void print() const {
		std::cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;
		}

};

#endif
