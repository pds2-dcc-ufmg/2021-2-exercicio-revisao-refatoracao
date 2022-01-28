#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
//Todos os atributos estao como publicos, não aconselhavel. Sugestao: colocar os atributos como private
//e criar novas funcoes que os retornam
	public:
//O atributo "altura dos pais" não apresenta nenhuma utilidade, então sera descartado
		std::string GetNome();
		std::string GetEndereco();
		std::string GetCep();

		void SetNome(std::string nome);
		void SetEndereco(std::string endereco);
		void SetCep(std::string cep);

		void print(); // imprime na tela os dados de um cliente cadastrado

	private:
		//Tambem eh preciso padronizar os nomes. 
		std::string _nome;
		std::string _endereco;
		std::string _cep;

};

#endif
