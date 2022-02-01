#include "Gerente.hpp"

Gerente::Gerente(std::string _nome,
            std::string _idade,
            int _rgFunc,
            double _salarioBase) {
    nome = _nome;
    idade = _idade;
    rgFunc = _rgFunc;
    salarioBase = _salarioBase;
}

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: "   << nome     << std::endl
    << "  Idade: "  << idade    << std::endl
    << "  RGFunc: " << rgFunc   << std::endl
    << "  SalarioBase: R$ "     << std::fixed << std::setprecision(2) << salarioBase << std::endl
    << "Salario Total: " << salarioBase + bonificacao << std::endl;
}

void Gerente::calculaBonificacao(int totalVendas) {
    bonificacao = totalVendas*BONIFICACAO;
}
