#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

namespace Cliente{

	class Cliente{

		private:

			std::string __nome; 
			std::string __endereco; 
			std::string __Cep;

		public:

			/* Retorna o nome do cliente */
			std::string getNome();

			/* Retorna o endereço do cliente */
			std::string getEndereco();

			/* Retorna o CEP do cliente */
			std::string getCEP();

			/* Método construtor da classe cliente */
			Cliente(std::string nome, std::string endereco, std::string cep);

			/* Imprime os dados de um determinado cliente */
			void imprimeDados();

	};

}

#endif
