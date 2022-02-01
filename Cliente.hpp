// Retirei comentarios descenessarios e o namespace std, nesse caso descenessario por serem poucas utilizacoes
// Arrumei os nomes das variaveis do tipo string presentes para que fiquem de acordo com as boas praticas
// Alem de tirar uma variavel nao utilizada no programa

#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:

		std::string nome;
		std::string endereco;
		std::string cep;

		void print(); // Impressao dos dados de um cliente cadastrado

};

#endif
