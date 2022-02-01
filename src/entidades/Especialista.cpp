#include "Especialista.hpp"

//Inicializando variável estática
const double Especialista::taxaComissao = 0.1;

//Especialista::Especialista() {};
Especialista::Especialista(const string& nome, int idade, int rgFunc, double salarioBase, string especialidade) : Funcionario(nome, idade, rgFunc, salarioBase) {
    this->_especialidade = especialidade;
}

void Especialista::print() {
    cout << "[Especialista]" << endl
    << "[Funcionario]" << endl
    << "  Idade: " << getIdade() << endl
    << "  RGFunc: " << getRgFunc() << endl
    << "  Nome: " << getNome() << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() << endl
    << "Num Atendimentos: " << this->numAtendimentos << endl
    << "Salario Total: " << setprecision(2) << (getSalarioBase() + this->_comissao) << endl;
}   

void Especialista::calculaComissao(double valorVenda) {
    this->_comissao += valorVenda * taxaComissao;
}

void Especialista::addNumAtendimentos(){
    ++numAtendimentos;
}

string Especialista::getEspecialidade(){
    return this->_especialidade;
}
