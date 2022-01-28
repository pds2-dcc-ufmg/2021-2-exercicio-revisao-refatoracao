#ifndef VENDA_H
#define VENDA_H

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda {
    public:
        Venda(double valor, std::string descricao, Especialista* especialista, Cliente* cliente);

        void imprime_dados() const;

        void setValor(double valor);
        void setDescricao(std::string descricao);
        void setEspecialista(Especialista* especialista);
        void setCliente(Cliente* cliente);

        double getValor();
        std::string getDescricao();
        Especialista* getEspecialista();
        Cliente* getCliente();

    private:
        double _valor;
        std::string _descricao;
        Especialista* _especialista;
        Cliente* _cliente;
};

#endif
