
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

#include<string>
#include<iostream>

using namespace std;

class Venda{
      
      public:
    
      Venda(Cliente *cliente, Especialista *especialista, string descricao, double valor);
    
      void print();
    
      double _get_valor;
    
      private:
      
      string _descricao;
    
      Especialista* _especialista;
    
      Cliente* cliente;
    
      double valor;
};

#endif
