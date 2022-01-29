
#ifndef VENDA_HPP
#define VENDA_HPP

#include ".././Pessoas/Funcionario.hpp"
#include ".././Pessoas/Cliente.hpp"
#include ".././Pessoas/Especialista.hpp"

using namespace std;

class Venda{

    private:
        double _VALOR;
        string _descricao;
        Especialista _esp;
        string _cliente;

    public:
        Venda(double valor,string descricao, Especialista esp,string cliente);
        double getValor();
        void setValor(double novoValor);
        void setDescricao(string novaDescricao);
        void print();
};

#endif
