#include "Funcionario.hpp"
#include "Cliente.hpp"
//#include "Especialista.hpp"
#include "Venda.hpp"

void Venda::print() {

        std::cout << "Especialista: ";
        std::cout << esp.nome;

        std::cout << " Cliente: ";
        std::cout << cliente;

}