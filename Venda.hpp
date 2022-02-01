#ifndef VENDA_HPP
#define VENDA_HPP


#include "Cliente.hpp"
#include "Funcionario.hpp"


#include <iostream>
#include <vector>


//classe que funciona como uma struct de uma dada venda, reunindo dados como ponteiro para o vendedor, valor da venda e dados do cliente
class Venda{

    public:
    double VALOR;
    std::string descricao;
    Funcionario* esp;
    Cliente* cliente;
    
    void imprimirvendas();
   
 
   
};



#endif
