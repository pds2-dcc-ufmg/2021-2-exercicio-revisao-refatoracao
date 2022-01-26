#include <string>
#include "Gerente.hpp"

using namespace std;

const double ValorBONIFICACAO = 15.0;

void Gerente::print(){
	cout << "[Funcionario]" << endl
	<< "[Gerente]" << endl
	<< "  Nome: " << nome << endl
	<< "  idade: " << idade << endl
	<< "  RGFunc: " << rgFunc << endl
	<< "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    double x;
    return numTOTALVendas*ValorBONIFICACAO;
} 