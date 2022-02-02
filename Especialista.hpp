#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include <string>

const double perc = 0.1;

class Especialista : public Funcionario {
    
    public:
    double comissao(double ValorVenda);
    
    void print();
    
    void set_especialidade(std::string _especialidade);
	std::string get_especialidade();
		
    private:
    std::string especialidade;
};

#endif
