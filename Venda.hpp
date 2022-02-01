
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Especialista.hpp"

using namespace std;

class Venda{

    public:
        Venda(Especialista espec, double valor, string descricao, Cliente cliente): 
            _especialista(espec), _valor(valor), _descricao(descricao), _cliente(cliente){};
        double _valor;
        string _descricao;
        Especialista _especialista;
        Cliente _cliente;
        void print();
};

#endif
