#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario
{
protected:
    double _salarioBase; // valor m�nimo recebido pelo funcion�rio
    int _idade;
    std::string _nome;
    std::string _rgFunc;

public:
    void print();
    void set_salarioBase(double salarioBase);
    void set_idade(int idade);
	void set_nome(std::string nome);
	void set_rgFunc(std::string rgFunc);
	double get_salarioBase();
	int get_idade();
	std::string get_nome();
	std::string get_rgFunc();
};

#endif
