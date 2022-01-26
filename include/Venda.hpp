
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Funcionario.hpp"

using namespace std;

class Venda {

private:
    double VALOR;
    string descricao;
    Especialista especialista;
    string cliente;

public:
    void print() {

        std::cout << "Especialista: ";
        cout << especialista.getNome();

        std::cout << " Cliente: ";
        cout << cliente;
    }

    double getValor() {
        return this->VALOR;
    }

    std::string getDescricao() {
        return this->descricao;
    }

    void setEspecialista(Especialista especialista) {
        this->especialista = especialista;
    }

    void setCliente(std::string cliente) {
        this->cliente = cliente;
    }

    void setDescricao(std::string descricao) {
        this->descricao = descricao;
    }

    void setValor(double valor) {
        this->VALOR = valor;
    }
};

#endif
