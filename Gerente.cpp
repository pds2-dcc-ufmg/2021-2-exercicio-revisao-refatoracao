#define VALOR_BONIFICACAO 15.0;

#include "Gerente.hpp"
#include "Funcionario.hpp"

double Gerente::getBonificacao(){
	return this->_bonificacao;
}

void Gerente::setBonificacao(double bonificacao){
	this->_bonificacao = bonificacao;
}

void Gerente::imprimeDadosGerente() {
    std::cout << "[Gerente]" << std::endl
              << "  Nome: " << getNome() << std::endl
              << "  Idade: " << getIdade() << std::endl
              << "  RGFunc: " << getRgFunc() << std::endl
              << "  SalarioBase: R$ " << std::setprecision(2) << std::fixed << getSalarioMin() << std::endl
              << "  Salario Total: R$ " << getSalarioMin() + getBonificacao() << std::endl << std::endl;
}

double Gerente::calculaBonificacaoGerente(int numTotalVendas){
    return numTotalVendas * VALOR_BONIFICACAO;
}
