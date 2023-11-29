
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda
{

private:
    double _valor;
    std::string _descricao;
    Especialista _especialista;
    std::string _cliente;

public:
    void print();
    void set_valor(double valor);
	void set_descricao(std::string descricao);
	void set_especialista(Especialista especialista);
	void set_cliente(std::string cliente);
	double get_valor();
	std::string get_descricao();
	Especialista get_especialista();
	std::string get_cliente();
};

#endif
