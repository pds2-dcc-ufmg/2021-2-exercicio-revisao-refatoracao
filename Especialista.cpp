#include "Especialista.hpp"

double Especialista::calculaComissao(double valorVenda){
    double c = valorVenda * PERCENTUAL_COMISSAO;
    return c;
}

void Especialista::imprimeFuncionario(){

    cout << "[Especialista]" << endl
         << "[Funcionario]" << endl
         << "  Nome: " << nome << endl
         << "  Idade: " << idade << endl
         << "  RGFunc: " << rgFunc << endl
         << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl
         << "  Especialidade: " << especialidade << endl;
}
