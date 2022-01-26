#include "Especialista.hpp"

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

void Especialista::acrescentarNumAtendimentos()
{
    numAtendimentos += 1;
}

void Especialista::acrescentarComissao(double valorVenda)
{
    comissao += calcularComissao(valorVenda);
}

double Especialista::calcularComissao(double valorVenda)
{
    return valorVenda * perc;
}

void Especialista::imprimirDados()
{
    std::cout << "[Especialista]" << std::endl;
    Funcionario::imprimirDados();

    std::cout << "  Nome: " << nome << std::endl
              << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioMinimo << std::endl;
}