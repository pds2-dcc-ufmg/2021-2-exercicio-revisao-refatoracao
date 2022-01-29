
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"



class Venda{

    private:
    double ValorVenda;
    std::string Descricao;

    public:
    Especialista* _Especialista;
    Cliente* _Cliente;
    Gerente* _Gerente;

    Venda(double ValorVenda, std::string Descricao, Especialista* Especialista, Cliente* Cliente);    
    std::string getDescricao() const;

    void setGerente(Gerente * _Gerente);

    void Print() const;
};

#endif
