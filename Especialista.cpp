#include "Especialista.hpp"

using namespace std;

Especialista::Especialista(string nome, std::string idade, int rg_func, double salario_base, string especialidade) {
    this->_nome = nome;
    this->_idade = idade;
    this->_rg_func = rg_func;
    this->_salario_base = salario_base;
    this->_especialidade = especialidade;
}

int Especialista::get_num_atendimentos() {
    return this->_num_atedimentos;
}

void Especialista::novo_atendimento() {
    this->_num_atedimentos++;
}

void Especialista::calcular_comissao(double ValorVenda){
    this->_comissao_acumulada += ValorVenda * this->_percentual;
}

void Especialista::print() {
    cout << "[Especialista]" << endl;
    cout << "  Nome: " << this->_nome << endl;
    cout << "  Idade: " << this->_idade << endl;
    cout << "  RGFunc: " << this->_rg_func << endl;
    cout << "  SalarioBase: R$ " << fixed << setprecision(2) << this->_salarioBase<< endl;
    cout << "  Num Atendimentos: " << this->_numAtedimentos << endl;
    cout << "  Salario Total: R$ " << this->_salarioBase + this->_comissaoAcumulada << endl;
}
