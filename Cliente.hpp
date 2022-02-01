#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	private:
		std::string nome;
		std::string endereco;
		std::string cep;
	public:
		std::string getNome();
		std::string getEndereco();
		std::string getCEP();
		void setNome(std::string nome);
		void setEndereco(std::string endereco);
		void setCEP(std::string cep);
		void print();
};

#endif

//Remove-se o using namespace std pela Boa Prática de se escrever o 'std::'
//Retira-se 'string AlturadosPais', já que não será utilizado.
//Retira-se comentário desnecessário.
//Padroniza-se o nome das variáveis, aplicando as Boas Práticas em todas.
//Introduz-se getters e setters para impossibilitar a alteração direta no objeto (private e public)