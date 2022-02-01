#include "Especialista.hpp"
#include "Funcionario.hpp"

double Funcionario::Especialista::COMISSAO = 0.1;

// Funcionario::Especialista::Especialista(double salario, std::string idade, std::string nome, int rg, std::string especialidade) :
//     Funcionario(salario, idade, nome, rg) { __especialidade = especialidade; }

void Funcionario::Especialista::imprimeDados() const{
    
    std::cout << "[Especialista]" << std::endl;
    Funcionario::Funcionario::imprimeDados();
    std::cout << "  Nome: " << __nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << __salarioBase << std::endl;
}

void Funcionario::Especialista::recebeComissao(double valorVenda){
    
    __numAtendimentos++;
    __comissao += valorVenda*Especialista::COMISSAO;

}

unsigned int Funcionario::Especialista::getNumAtendimentos(){
    return __numAtendimentos;
}

double Funcionario::Especialista::salarioTotal() {
    return __salarioBase + __comissao;
}