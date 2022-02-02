#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
//Bibliotecas
#include <iostream>
#include <iomanip>
#include "Pessoa.hpp"

using namespace std;

class Funcionario : public Pessoa{
    public:
    //Implementação dos Metodos de Set da Classe Cliente
	void SetSalarioBase(double SalarioBase);
    //Implementação dos Metodos de Set da Classe Cliente
	double GetSalarioBase();
	// imprime na tela os dados de um cliente cadastrado
	void Print() override;
    protected:
    // Parametros da Classe
    double SalarioBase;
    string Nome;
};

#endif
