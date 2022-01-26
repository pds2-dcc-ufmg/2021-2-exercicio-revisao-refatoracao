
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
    void print();

    double getValor();

    std::string getDescricao();

    void setEspecialista(Especialista especialista);

    void setCliente(std::string cliente);

    void setDescricao(std::string descricao);

    void setValor(double valor);
};

#endif
