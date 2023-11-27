
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"

class Venda : public Cliente
{

private:
    double _valor;
    std::string _descricao;
    Especialista *_especialista;

public:
    
    Venda(std::string nome, std::string descricao, double valor, Especialista *especialista);

    double getValor();
    std::string getDescricao();
    Especialista getEspecialista();

    void print();
};

#endif
