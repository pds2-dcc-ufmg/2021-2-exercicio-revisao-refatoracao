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