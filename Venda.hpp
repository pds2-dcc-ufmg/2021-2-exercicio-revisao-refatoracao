#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:
    void print();
    
    void set_VALOR(double _VALOR);
	double get_VALOR();
		
	void set_descricao(std::string _descricao);
	std::string get_descricao();
	
	void set_esp(Especialista _esp);
	Especialista get_esp();
		
	void set_cliente(std::string _cliente);
	std::string get_cliente();
    
    private:
    
    double VALOR;
    std::string descricao;
    Especialista esp;
    std::string cliente;
};

#endif
