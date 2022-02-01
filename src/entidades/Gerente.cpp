#include "Gerente.hpp"

//Inicializando a variável estática
const double Gerente::bonificacaoPorVenda = 15.0;

Gerente::Gerente(const string& nome, int idade, int rgFunc, double salarioBase) : Funcionario(nome, idade, rgFunc, salarioBase) {}

void Gerente::print() {
        std::cout << "[Funcionario]" << endl
        << "[Gerente]" << endl
        << "  Nome: " << this->getNome() << endl
        << "  Idade: " << this->getIdade() << endl
        << "  RGFunc: " << this->getRgFunc() << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << this->getSalarioBase() <<endl
        << "Salario Total: " << setprecision(2) << this->valorTotalBonificacao+ this->getSalarioBase()  << endl;
}

//retirado "double x" - variável livre
void Gerente::calculaBonificacaoGerente(int numTotalVendas) {
    valorTotalBonificacao = numTotalVendas * bonificacaoPorVenda;
}