#include "Especialista.hpp"

void Especialista::print() {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();
        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;

    }
void Especialista::set_especialidade(string espec){
    especialidade = espec;
}
string Especialista::get_especialidade(){
    return especialidade;
}

double Especialista::comissao(double ValorVenda){
        double c = ValorVenda*perc;
                  return c;
    }