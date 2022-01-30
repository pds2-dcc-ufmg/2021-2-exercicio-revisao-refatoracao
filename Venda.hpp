
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"



class Venda
{

public:
    Venda(Cliente cliente = Cliente(), Especialista* especialista = new Especialista(), std::string descricao = "", double valor = 0.0);
    
    void imprimirDados() const;

private:
    double _valor;
    std::string _descricao;
    Especialista _especialista;
    Cliente _cliente;
};

#endif
