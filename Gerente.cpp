#include <iostream>
#include <string>
#include "Gerente.hpp"

  void Gerente::print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
        }

        double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double x;
            return numTOTALVendas*ValorBONIFICACAO;
        }

Gerente::Gerente(_SalarioBase,_idade,_nome,_rgFunc,_bonificiacao): SalarioBase(_SalarioBase), idade(_idade), nome(_nome), rgFunc(_rgFunc), bonificacao(_bonificiacao);