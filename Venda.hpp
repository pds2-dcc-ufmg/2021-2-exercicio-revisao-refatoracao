
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{
    private:
    double _VALOR;
    string _descricao;
    Especialista _esp;
    string _cliente;
    public:
    Venda(string cliente, Especialista esp, string descricao, double VALOR): 
    _VALOR(VALOR), _descricao(descricao), _esp(esp), _cliente(cliente) 
    {
        _esp.comissao(_VALOR);
    };
    
    void print() {

        cout << "Especialista: ";
        _esp.print_nome();
        cout << " Cliente: " << _cliente << endl;
        cout << " Descricao: " << _descricao << endl
        << "\n";

        //std::cout << " : ";
        //cout << cliente;
    }

    /*void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;
    }*/
};

#endif
