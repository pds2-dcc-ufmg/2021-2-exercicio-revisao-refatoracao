#include <iostream>
#include <string>
#include "Venda.hpp"

void Venda::print(){
  cout << "Especialista: "<< _esp._nome
            << " Cliente: " << _cliente
            << " Descricao: " << _descricao<< endl;
}
