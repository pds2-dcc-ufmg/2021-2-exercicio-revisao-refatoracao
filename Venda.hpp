
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
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;

    }
    
    double getValor(){
        return this->VALOR; 
    }
    
    void setValor(double valor){
        this->VALOR = valor; 
    }

    string getDescricao(){
        return this->descricao; 
    }

    void setDescricao(string descricao){
        this->descricao = descricao; 
    }

    Especialista getEspecialista(){
        return this->esp; 
    }

    void setEspecialista(Especialista esp){
        this->esp = esp; 
    }

    string getCliente(){
        return this->cliente; 
    }

    void setCliente(string cliente){
        this->cliente = cliente; 
    }

    private: 
        double VALOR;
        string descricao;
        Especialista esp;
        string cliente;


};

#endif
