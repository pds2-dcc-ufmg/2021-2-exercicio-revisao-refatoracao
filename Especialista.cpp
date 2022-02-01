#include "Funcionario.hpp"
#include "Especialista.hpp"

double Especialista::comissao(double valor_venda) {
        return valor_venda*percentual_sobre_venda;
}

void Especialista::print() {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();
        std::cout << "  Nome: " << getNome() << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() <<endl;

}
    
string Especialista::getEspecialidade(){
    return especialidade;
}

void Especialista::setEspecialidade(string _especialidade){
    this->especialidade = _especialidade;
}

void Especialista::setPercentual(double _percentual_sobre_vendas){
    this->percentual_sobre_venda = _percentual_sobre_vendas;
}

double Especialista::getPercentual(){
    return percentual_sobre_venda;
}