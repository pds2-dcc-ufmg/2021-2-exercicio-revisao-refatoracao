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
        void setValor(double novoValor){
            valor = novoValor;
        }

        void setDescricao(std::string novaDescricao){
            descricao = novaDescricao;
        }

        void setEspecialista(Especialista novoEspecialista){
            especialista = novoEspecialista;
        }

        void setCliente(Cliente novoCliente){
            cliente = novoCliente;
        }
        
        void relatorioVendas() {
            std::cout << "[Especialista: " << especialista.nome << "]";
            std::cout << " -> Cliente: " << cliente.nome;
            std::cout << " -> Descricao: " << descricao;
            std::cout << std::endl;
        }
};

#endif
