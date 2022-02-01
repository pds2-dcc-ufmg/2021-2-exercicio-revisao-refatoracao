#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
using namespace std;

class Funcionario {
    public:
    //Implementação dos Metodos de Set da Classe Cliente
	void SetSalarioBase(double SalarioBase);
	void SetIdade(int Idade);
	void SetNome(string Nome);
    void SetRgFuncionario(int RgFuncionario);
    //Implementação dos Metodos de Set da Classe Cliente
	double GetSalarioBase();
	int GetIdade();
	string GetNome(); 
    int GetRgFuncionario();
	// imprime na tela os dados de um cliente cadastrado
	void Print();
    protected:
    // Parametros da Classe
    double SalarioBase;
    int Idade;
    string Nome;
    int RgFuncionario;
};

#endif
