#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:
		std::string nome;
		std::string endereco;
		std::string cep;

	public:
		std::string getNome() {return(nome);}
		std::string getEndereco() {return(endereco);}
		std::string getCep() {return(cep);}

		void setNome(std::string novoNome) {nome = novoNome;}
		void setEndereco(std::string novoEndereco) {endereco = novoEndereco;}
		void setCep(std::string novoCep) {cep = novoCep;}

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
