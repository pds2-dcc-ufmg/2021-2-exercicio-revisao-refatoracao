#include <iostream>
#include <iomanip>
#include "Gerente.hpp"

using namespace std;

double ValorBONIFICACAO = 15.0;
void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}

 double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
        double x;
      return numTOTALVendas*ValorBONIFICACAO;
 }
