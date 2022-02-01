#include "Especialista.hpp"

Especialista::Especialista(std::string _nome,
            std::string _idade,
            int _rgFunc,
            double _salarioBase,
            std::string _especialidade) {
    nome = _nome;
    idade = _idade;
    rgFunc = _rgFunc;
    salarioBase = _salarioBase;
    especialidade = _especialidade;
}

void Especialista::adicionaComissao(double valorVenda) {
    comissao += valorVenda * PORCENTAGEM;
}

void Especialista::print() {
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();

    std::cout   << "  Nome: " << nome << std::endl
                << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl
                << "Num Atendimentos: " << numDeAtendimentos << std::endl
                << "Salario Total: " << salarioBase + comissao << std::endl;                
}
