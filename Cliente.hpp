#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
	//Implementação dos Metodos de Set da Classe Cliente
	void SetNome(string Nome);
	void SetEndereco(string Endereco);
	void SetCep(string Cep);
	//Implementação dos Metodos de Set da Classe Cliente
	string GetNome();
	string GetEndereco();
	string GetCep(); 
	// imprime na tela os dados de um cliente cadastrado
	void Print(); 
	private:
		string Nome;
		string Endereco;
		string Cep;
};

#endif
