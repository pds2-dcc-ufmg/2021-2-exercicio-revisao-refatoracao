#include "Especialista.hpp"

void Especialista::print(){

        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase <<std::endl;

    }
    
double Especialista::comissao(double ValorVenda){
        double _Comissao = ValorVenda*perc;
                  return _Comissao;
    }
