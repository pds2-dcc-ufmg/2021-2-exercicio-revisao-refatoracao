#include "Funcionario.hpp"

double Funcionario::perc = 0.1;
double Funcionario::percWanda = 0.1;
double Funcionario::valorBonificacao = 15.0;

void Funcionario::imprimirDados()
{
    std::cout << "[Funcionario]" << std::endl
              << "  Idade: " << idade << std::endl
              << "  RGFunc: " << rgFunc << std::endl;
}

Especialista::Especialista(std::string nomeAux,
                           std::string idadeAux,
                           int rgFuncAux,
                           int salarioMinimoAux,
                           std::string especialidadeAux,
                           int numAtendimentosAux,
                           double comissaoAux)
{
    nome = nomeAux;
    idade = idadeAux;
    rgFunc = rgFuncAux;
    salarioMinimo = salarioMinimoAux;
    especialidade = especialidadeAux;
    numAtendimentos = numAtendimentosAux;
    comissao = comissaoAux;
}

void Especialista::acrescentarComissao(double valorVenda)
{
    ++numAtendimentos;
    comissao += valorVenda * perc;
}

void Especialista::imprimirDados()
{
    std::cout << "[Especialista]" << std::endl;
    Funcionario::imprimirDados();

    std::cout << "  Nome: " << nome << std::endl
              << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioMinimo << std::endl;
}

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