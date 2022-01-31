#include "Especialista.hpp"


Especialista::Especialista(double SalarioBase,std::string idade,std::string nome, int rgFunc,std::string especialidade="") 
:Funcionario(SalarioBase,idade,nome,rgFunc){
    this->especialidade=especialidade;
}

double Especialista::comissao(double ValorVenda) {
        double c = ValorVenda*perc;
                  return c;
    }
void Especialista::print() {

        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();



        std::cout << "  Nome: " << nome << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase <<std::endl;

}
