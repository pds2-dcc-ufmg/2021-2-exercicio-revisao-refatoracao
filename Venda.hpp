
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:


    void print() {
        std::cout << "Especialista: ";
        cout << this->auxEspecialista().auxNome();
        std::cout << " Cliente: ";
        cout << this->auxCliente;
    }
    
    void getVenda(double valor, string descricao, Especialista esp, string cliente){
            this->double _valor = valor;
            this->string _descricao = descricao;
            this->Especialista _esp = esp;
            this->string _cliente = cliente;
    }
    
    double auxValor() {
        return this->_valor;
    }

    string auxDescricao() {
        return this->_descricao;
    }
    
    Especialista auxEspecialista() {
        return this-> _esp;
    }
    
    string auxCliente(){
        return this-> _cliente;
    }

    
    private:
        
        double _valor;
        string _descricao;
        Especialista _esp;
        string _cliente;
};

#endif
