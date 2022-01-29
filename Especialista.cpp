#include "Especialista.hpp"

void Especialista::print()  {        
        std::cout << "[Especialista]" << std::endl;
        std::cout << "[Funcionario]" << std::endl;
        std::cout << "  Idade: " << this->getIdade() << std::endl;
        std::cout << "  RGFUNC: " << this->getRgFunc() << std::endl;
        std::cout << "  Nome: " << this->getNome() << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->getSalarioBase() <<std::endl;
    }


std::string Especialista::getEspecialidade() const {
    // TODO: Implemente este metodo
    return this->_especialidade;
}

void Especialista::setEspecialidade(const std::string& especialidade) {
    // TODO: Implemente este metodo
    this->_especialidade = especialidade;
}