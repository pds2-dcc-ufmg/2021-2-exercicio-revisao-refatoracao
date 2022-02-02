#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Funcionario {
    public:
        void print();
        
        void set_SalarioBase(double _SalarioBase);
		double get_SalarioBase();
		
		void set_IDADE(std::string _IDADE);
		std::string get_IDADE();
		
		void set_nome(std::string _nome);
		std::string get_nome();
		
		void set_rgFunc(int _rgFunc);
		int get_rgFunc();
		
    private:
        double SalarioBase;
        std::string IDADE;
        std::string nome;
        int rgFunc;
};

#endif
