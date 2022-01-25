#include "Especialista.hpp"

Especialista::Especialista(std::string nome, std::string idade, std::string rgFunc, std::string especialidade, double salario_base) 
:   Funcionario(nome, idade, rgFunc, salario_base),
    especialidade(especialidade),
    num_atendimentos(0), comissao_total(0)
{
}

void Especialista::adicionarComissao(double valor_venda) {
    this->comissao_total += valor_venda * PERCENTAGEM_COMISSAO;
    this->num_atendimentos += 1;
}

std::string Especialista::getEspecialidade() {
    return this->especialidade;
}

void Especialista::print() {
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();
}

double Especialista::getSalarioTotal() {
    return this->salario_base + this->comissao_total;
}
unsigned Especialista::getNumAtendimentos() {
    return this->num_atendimentos;
}

void Especialista::printResults() {
    std::cout << "Num Atendimentos: " << this->num_atendimentos << std::endl;
    std::cout << "Salario total: " << this->getSalarioTotal() << std::endl;
    std::cout << std::endl;
}