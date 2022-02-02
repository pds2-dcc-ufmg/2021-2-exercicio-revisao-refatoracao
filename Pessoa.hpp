#ifndef PESSOA_HPP
#define PESSOA_HPP
//Bibliotecas 
#include <iostream>
using namespace std;

class Pessoa{

	public:
	//Implementação dos Metodos de Set da Classe Cliente
	void SetNome(string Nome);
	void SetRg(int Rg);
	void SetIdade(int Idade);
	//Implementação dos Metodos de Set da Classe Cliente
	string GetNome();
	int GetRg();
	int GetIdade();
    //Metodo virtual
    virtual void Print() = 0; 
	private:
	//Parametros da Classe
		string Nome;
        int Rg;
		int Idade;
};
#endif