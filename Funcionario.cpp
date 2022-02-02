#include "Funcionario.hpp" 

void Funcionario::print() {
    std::cout << "[Funcionario]" << std::endl 
        << "  Idade: " << Funcionario::idade << std::endl 
        << "  RGFunc: " << Funcionario::rg_func << std::endl;
}

void Funcionario::print_oi(){
    std::cout << "Tchau" << std::endl;
}
