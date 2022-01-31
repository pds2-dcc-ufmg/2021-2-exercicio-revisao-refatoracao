#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{
    private:
        double valor;
        std::string descricao;
        Especialista especialista;
        Cliente cliente;

    public:
        Venda(double valor, std::string descricao, Especialista especialista, Cliente cliente) {
            this->valor = valor;
            this->descricao = descricao;
            this->especialista = especialista;
            this->cliente = cliente;
        }
        
        void relatorioVendas() {
            std::cout << "[Especialista: " << especialista.nome << "]";
            std::cout << " -> Cliente: " << cliente.nome;
            std::cout << " -> Descricao: " << descricao;
            std::cout << std::endl;
        }
};

#endif