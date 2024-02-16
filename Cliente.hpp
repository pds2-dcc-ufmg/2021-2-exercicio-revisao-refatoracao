#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
public:
Cliente(const std::string& nome, 
const std::string& end, 
const std::string& cep, 
const std::string& altura): NOME(nome), endereco(end), Cep(cep), AlturaDosPais(altura) {}
/*Adicionei um construtor padrão para a classe cliente*/
	public:

		string NOME;
		string endereco;
		string Cep;
		string AlturaDosPais;

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
