#include "Especialista.hpp"

double Especialista::perc = 0.1;
double Especialista::percWanda = 0.1;

Especialista::Especialista(std::string Nome, std::string Idade, int RG, double SalarioBase, std::string Especialidade, int NumAtendimentos, double Comissao) {
    this->Nome = Nome;
    this->Idade = Idade;
    this->RG = RG;
    this->SalarioBase = SalarioBase;
    this->Especialidade = Especialidade;
    this->NumAtendimentos = NumAtendimentos;
    this->Comissao = Comissao;
}

double Especialista::comissao(double ValorVenda) {
    return ValorVenda * perc;
}

void Especialista::Print() {
    std::cout << "[Especialista]" << std::endl;

    Funcionario::Print();

    std::cout << "  Nome: " << get_Nome() << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << get_SalarioBase() << std::endl;
}

void Especialista::AddComissao(double Valor) {
    Comissao += Valor;
}

void Especialista::AddAtendimento() {
    NumAtendimentos++;
}

int Especialista::get_NumAtendimentos() {
    return NumAtendimentos;
}

double Especialista::get_Comissao() {
    return Comissao;
}