
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    double _valor;
    string _descricao;
    Especialista esp;
    string cliente;

    public:
    
    void set_valor(double s){
        _valor = s;        
    }

    void set_descricao(string s){
        _descricao = s;          
    }

    void set_cliente(string s){
        cliente = s;   
    }

    void set_esp(Especialista e){
        esp = e;   
    }

    double get_valor(){
        return _valor;     
    }

    string get_descricao(){
        return _descricao;         
    }

    string get_cliente(){
        return cliente;   
    }

    Especialista get_esp(){
        return esp;   
    }

    void print() {

        std::cout << "Especialista: ";
        cout << esp.get_nome();

        std::cout << " Cliente: ";
        cout << cliente;
    }
};

#endif
