#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include <string>

const double Valor_Bonificacao = 15.0;

class Gerente {
    public:
        void print();

        double calcula_BONIFICACAO_GERENTE(int Total_Vendas);
        
        void set_SalarioBase(double _SalarioBase);
		double get_SalarioBase();
		
		void set_IDADE(std::string _IDADE);
		std::string get_IDADE();
		
		void set_nome(std::string _nome);
		std::string get_nome();
		
		void set_rgFunc(int _rgFunc);
		int get_rgFunc();
		
		void set_bonificacao(double _bonificacao);
		double get_bonificacao();
		
    private: 
        double SalarioBase;
        std::string IDADE;
        std::string nome;
        int rgFunc;
        double bonificacao;

};

#endif
