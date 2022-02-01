#include "Especialista.hpp"

double Especialista::calculaComissao(double ValorVenda) {
        double comissao = ValorVenda*perc;
        return comissao;
}

void Especialista::print(){
    std::cout << "[Especialista]" << endl;
        Funcionario::print();
        std::cout << "  Nome: " << _nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << _salarioBase <<endl;
        std::cout << "Num Atendimentos: " << _numAtendimentos << endl;
        std::cout << "Salario Total: " << _salarioBase+calculaComissao(_valorVenda)<<endl;
}