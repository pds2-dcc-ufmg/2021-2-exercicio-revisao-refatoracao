#include "Gerente.hpp"

Gerente::Gerente(std::string nomeAux,
                 std::string idadeAux,
                 int rgFuncAux,
                 double salarioMinimoAux,
                 double bonificacaoAux)
{
    nome = nomeAux;
    idade = idadeAux;
    rgFunc = rgFuncAux;
    salarioMinimo = salarioMinimoAux;
    bonificacao = bonificacaoAux;
}

void Gerente::acrescentarBonificacao()
{
    bonificacao += valorBonificacao;
}

void Gerente::imprimirDados()
{
    std::cout << "[Funcionario]" << std::endl
              << "[Gerente]" << std::endl
              << "  Nome: " << nome << std::endl
              << "  Idade: " << idade << std::endl
              << "  RGFunc: " << rgFunc << std::endl
              << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioMinimo << std::endl;
}