#include "Especialista.hpp"

double Especialista::CalculaComissao(double ValorVenda) {
    return ValorVenda*perc;
}

void Especialista::ImprimeDados()const{
    std::cout << "[Especialista]" << std::endl;
    Funcionario::ImprimeDados();
    std::cout << "  Nome: " << this->getNome() << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;

}

Especialista::Especialista(const std::string& Nome, int Idade, int rgFunc, int NumAtendimentos, double SalarioBase, const std::string& Especialidade, double Comissao){
    this->Nome = Nome;
    this->Idade = Idade;
    this->rgFunc = rgFunc;
    this->NumAtendimentos = NumAtendimentos;
    this->SalarioBase = SalarioBase;
    this->Especialidade = Especialidade;
    this->Comissao = Comissao;

}