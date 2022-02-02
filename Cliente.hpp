#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
class Cliente{

	public:

		void print_cliente(); // imprime na tela os dados de um cliente cadastrado
		std::string nome;
        std::string endereco;
		std::string cep;
		void setNome(std::string);
        std::string getNome();
        void setEndereco(std::string);
        std::string getEndereco();
		void setCep(std::string);
        std::string getCep();
		
	private:
	
		std::string AlturaDosPais;
};

#endif