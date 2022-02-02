#include "Venda.hpp"
#include <iostream>

Venda::venda(double valor, string descricao, Especialista* especialista, Cliente* cliente){
    
    valor_ = valor;
    descricao_ = descriacao;
    especialista_ = *especialista;
    cliente_ = *cliente;
 
    void Venda::print(){
        
        cout << "Especialista: " << this->especialista_.getNome() << endl;
        cout << "Cliente: " << this->cliente_.getNome() << endl;
        cout << "Descrição: " << this->descricao_;
    }
}