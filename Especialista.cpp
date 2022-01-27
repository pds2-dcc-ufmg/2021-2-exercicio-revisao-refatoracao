#include "Especialista.hpp"
double percentual = 0.1;


void Especialista::print(){

        std::cout << "[Especialista]" << endl;
        Funcionario::print();

        std::cout << "  Nome: " << _nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << _salarioBase <<endl;


}
double Especialista::comissao(double ValorVenda){
    
    double comissao= ValorVenda*percentual;
    return comissao;
}