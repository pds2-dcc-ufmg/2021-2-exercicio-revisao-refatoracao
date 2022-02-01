#include <iostream>
#include <string>
#include "Venda.hpp"

void Venda::print() {

            std::cout << "Cliente: " << cliente << std::endl;

            std::cout << "Especialista: " << esp.nome << std::endl;

            std::cout << "Descricao: " << descricao << std::endl;

            std::cout << "Valor: " << valor << std::endl;
        }