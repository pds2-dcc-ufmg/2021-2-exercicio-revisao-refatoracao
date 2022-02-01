#include <iostream>
#include <string>

#include "Venda.hpp"

//imprime apenas o nome do vendedor, o nome do cliente e a descricao da
 void Venda::imprimirvendas() {

        std::cout << "Especialista: ";
        std::cout << esp->nome;
  

        std::cout << " Cliente: ";
        std::cout << cliente->NOME;
      
        std::cout<< " Descricao: "<< descricao;
        
    }