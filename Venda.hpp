
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:

        double valor;
        string descricao;
        Especialista esp;
        string cliente;

        Venda(double _valor, string _descricao, Especialista _esp, string _cliente): 
            valor(_valor), descricao(_descricao), esp(_esp), cliente(_cliente){}

        void print() {

            cout << "Especialista: ";
            cout << esp.nome;

            cout << " Cliente: ";
            cout << cliente;

            cout << " Descricao: ";
            cout << descricao << endl;
        }
};

#endif
