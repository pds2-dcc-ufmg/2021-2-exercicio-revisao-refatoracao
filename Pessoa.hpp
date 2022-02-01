#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
using namespace std;

class Pessoa{

	public:
	//Implementação dos Metodos de Set da Classe Cliente
	void SetNome(string Nome);
	void SetRg(int Rg);
	//Implementação dos Metodos de Set da Classe Cliente
	string GetNome();
	int GetRg();
    //Metodo virtual
    virtual void Print() = 0; 
	private:
		string Nome;
        int Rg;
};

#endif