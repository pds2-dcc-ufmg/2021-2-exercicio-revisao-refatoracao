#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda
{

public:
    Venda();
    double _valor;
    std::string _descricao;
    Especialista _especialista;
    std::string _cliente;

    Venda(double valor,
          std::string descricao,
          Especialista especialista,
          std::string cliente);

    double getValor();
    void setValor(double);

    Especialista getEspecialista();
    void setEspecialista(Especialista);

    std::string getDescricao();
    void setDescricao(std::string);

    std::string getCliente();
    void setCliente(std::string);

    void print();
};
#endif
