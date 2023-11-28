
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
    Venda(double VALOR, string descricao, Especialista esp, string cliente): 
    _VALOR(VALOR), _descricao(descricao), _esp(esp), _cliente(cliente) {}
    
    void print() {

        std::cout << "Especialista: ";
        cout << esp.print_nome();

        std::cout << " Cliente: ";
        cout << cliente;

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
