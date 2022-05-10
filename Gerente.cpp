#include "Gerente.hpp"


Gerente::Gerente(std::string _nome, int _idade, int _rg, double _salariobase){
    nome = _nome;
    idade = _idade;
    rg = _rg;
    SalarioBase = _salariobase;
}

void Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas) {
    BonificacaoAcumulada += numTOTALVendas * TAXA_BONIFICACAO;
}

void Gerente::print() const {
    std::cout   << "[Funcionario]\n"
                << "[Gerente]\n"
                << "  Nome: " << nome << std::endl
                << "  Idade: " << idade << std::endl
                << "  RGFunc: " << rg << std::endl
                << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl
                << "  Salario Total: R$ " << SalarioBase + BonificacaoAcumulada << std::endl;
}