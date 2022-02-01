#include <iostream>
#include <string>
#include "Funcionario.hpp"
#include "Gerente.hpp"



//funcao que imprime os dados do gerente como override da funcao base, um dos pontos eh que a ordem de impressao eh diferente das outras classes
void Gerente::print() {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << IDADE << std::endl
            << "  RGFunc: " << rgFunc << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;
        }

//retorna o valor de salario extra do gerente
 double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double x;
            return numTOTALVendas*bonificacao;
        }

//calcula o salario total a partir da soma do salario fixo- salario base- mais a bonificacao
double Gerente:: calculasalariototal(int numTOTALVendas){
            double total=0;
            total= calcula_BONIFICACAO_GERENTE(numTOTALVendas)+SalarioBase;
            return total;
        }