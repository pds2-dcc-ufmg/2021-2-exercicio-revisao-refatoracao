
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:
    //Implementação dos Metodos de Set da Classe Cliente
	void SetValor(double Nome);
	void SetDescricao(string Descricao);
	void SetEspecialista(Especialista esp);
    void SetCliente(string Cliente);
	//Implementação dos Metodos de Set da Classe Cliente
	double GetValor();
	string GetDescricao();
	Especialista GetEspecialista(); 
    string SetCliente();
    void Print();
    private:
    double Valor;
    string Descricao;
    Especialista Esp;
    string Cliente;
};

#endif
