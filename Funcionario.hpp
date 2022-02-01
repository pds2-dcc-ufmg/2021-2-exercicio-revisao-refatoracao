#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Funcionario {
    protected:

        double SalarioBase; 
        std::string IDADE;
        std::string nome;
        int rgFunc;

    public:

        std::string getNome();
		std::string getIdade();
		double getSalarioBase();
        double getrg();
		void setNome(std::string nome);
		void setIdade(std::string Idade);
		void setSalarioBase(int SalarioBase);
        void setrg(int rg);

        void print();

        void print_oi();
};

#endif

//Adicionam-se os 'std' antes dos 'endl','cout' e string
//Transforma-se os atributos em protected, a título de permitir a herança, porém não dar acesso direto a esses atributos.
//Adição de getters e setters e definição do escopo das funções print e print_oi no .cpp