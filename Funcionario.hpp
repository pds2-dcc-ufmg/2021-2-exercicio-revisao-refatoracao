#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>

//Não irei usar o namespace std no começo por não ser boa prática em codigos maiores

class Funcionario {
//Atributos todos publicos e nomes não padronizados. 
    public:
	double GetSalarioBase();
	std::string GetIdade();
	std::string GetNome();
	int GetRGFuncionario();
	
	void SetSalarioBase(double valorMinimo);
	void SetIdade(const std::string& _idade);
	void SetNome(const std::string& _nome);
	void SetRGFuncionario(int RG);
	
	//Como o arquivo .hpp é apenas o contrato, não é aconselhavel definir as proprias funções nele
        void print();
	//Com instruções confusas, foi criado duas funções que atendem a ambos os requisitos.
        void print_oi();
	void print_tchau();

     protected:
	double salarioBase;// Valor minimo recebido pelo funcionario
	std::string idade;
	std::string nome;
	int rgFuncionario;
};

#endif
