
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:
    double valor;
    std::string descricao;
    Especialista esp;
    std::string cliente;


    void imprimeNome() {

        std::cout << "Especialista: " << esp.nome;
        std::cout << " Cliente: " << cliente;

    }
};

#endif
