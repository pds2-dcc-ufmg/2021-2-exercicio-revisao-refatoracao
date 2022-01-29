#include "Venda.hpp"

void Venda::Print() {

        std::cout << "Especialista: ";
        std::cout << this->_Especialista->getNome();

        std::cout << " Cliente: ";
         this->_Cliente->print();
}
