#ifndef VENDA_HPP
#define VENDA_HPP

#include <string>
#include <iostream>

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"


class Venda{

    public:
    Especialista especialista;
    Cliente cliente;

    double GetValor();
    std::string GetDescricao();
    
    void SetValor(double valor);
    void SetDescricao(const std::string& descricao);
 
    void print();

    private:
	double _valor;
	std::string _descricao;
};

#endif
