#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:

		std::string getNome();
		std::string getEndereco();
		std::string getCep();

		void setNome(std::string nome);
		void setEndereco(std::string endereco);
		void setCep(std::string cep);

		void imprimeDadosCliente();

	private:

		std::string _nome;
		std::string _endereco;
		std::string _cep;

};

#endif
