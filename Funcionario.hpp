#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include "Pessoa.hpp"

using namespace std;

class Funcionario : public Pessoa{
    public:
    //Implementação dos Metodos de Set da Classe Cliente
	void SetSalarioBase(double SalarioBase);
	void SetIdade(int Idade);
    //Implementação dos Metodos de Set da Classe Cliente
	double GetSalarioBase();
	int GetIdade();
	// imprime na tela os dados de um cliente cadastrado
	void Print() override;
    protected:
    // Parametros da Classe
    double SalarioBase;
    int Idade;
    string Nome;
};

#endif
