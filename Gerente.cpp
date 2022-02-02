#include "Gerente.hpp"

void Gerente::imprimeFuncionario() {
    cout << "[Funcionario]" << endl
         << "[Gerente]" << endl
         << "  Nome: " << nome << endl
         << "  Idade: " << idade << endl
         << "  RGFunc: " << rgFunc << endl
         << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl
         << "Salario Total: " << fixed << setprecision(2) << salarioBase + bonificacao << endl;

}

void Gerente::calculaBonificacaoGerente(int numTotalVendas) {

    bonificacao = numTotalVendas * VALOR_BONIFICACAO;
}