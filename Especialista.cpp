#include "Especialista.hpp"

void Especialista::print(){

        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();

        std::cout << "  Nome: " << get_nome() << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << get_SalarioBase() <<std::endl;

    }
    
double Especialista::comissao(double ValorVenda){
        double _Comissao = ValorVenda*perc;
                  return _Comissao;
    }

void Especialista::set_especialidade(std::string _especialidade){
    especialidade = _especialidade;
}

std::string Especialista::get_especialidade(){
    return especialidade;
}
