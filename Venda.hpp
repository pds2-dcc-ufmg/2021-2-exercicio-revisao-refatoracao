
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Funcionario.hpp"

class Venda {
   public:
    double _VALOR;
    std::string _descricao;
    Especialista _esp;
    std::string _cliente;

    Venda(std::string cliente, Especialista esp, std::string descricao, double VALOR) {
        _cliente = cliente;
        _esp = esp;
        _descricao = descricao;
        _VALOR = VALOR;
    }

    void print() {
        std::cout << "Especialista: ";
        std::cout << _esp._nome;

        std::cout << " Cliente: ";
        std::cout << _cliente;
    }
};

#endif
