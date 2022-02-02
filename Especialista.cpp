#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Cliente.hpp"

Especialista::Especialista(){
    perc = 0.1;
    percWanda = 0.1;
}
void Especialista::setEspecialidade(std::string especialidade){
	this->especialidade = especialidade;
}
std::string Especialista::getEspecialidade(){
	return this->especialidade;
}
double Especialista::comissao(double valorVenda) {
    double c = valorVenda*perc;
    return c;
}
void Especialista::print() {

    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();

    std::cout << "  Nome: " << nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl;

}