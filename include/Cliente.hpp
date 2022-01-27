#ifndef CLIENTE_H
#define CLIENTE_H


class Cliente {

	public:

		Cliente(std::string nome, std::string endereco, std::string cep);

		void print();

	private:
	
		std::string nome;
		std::string endereco;
		std::string cep;
		
};

#endif
