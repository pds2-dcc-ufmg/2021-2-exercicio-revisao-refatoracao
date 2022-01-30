#include "Funcionario.hpp"

void Funcionario::imprimirDados() const {
        std::cout << "[Funcionario]" << std::endl
             << "  Idade: " << _idade << std::endl
             << "  RGFunc: " << _RG << std::endl;
}

std::string Funcionario::getNome() const{
    return this->_nome;
}

