#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Pessoa.hpp"
using namespace std;

class Cliente: public Pessoa{

	public:
	//Implementação dos Metodos de Set da Classe Cliente
	void SetEndereco(string Endereco);
	void SetCep(string Cep);
	//Implementação dos Metodos de Set da Classe Cliente
	string GetEndereco();
	string GetCep(); 
	// imprime na tela os dados de um cliente cadastrado
	void Print() override; 
	private:
		string Nome;
		string Endereco;
		string Cep;
};

#endif
