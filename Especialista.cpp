#define PERC 0.1;

#include "Especialista.hpp"

void Especialista::initDados(){
	this->_numAtendimentos = 0;
    this->_comissao = 0.0;
}

int Especialista::getNumAtendimentos(){
	return this->_numAtendimentos;
}

double Especialista::getComissao(){
	return this->_comissao;
}

std::string Especialista::getEspecialidade(){
	return this->_especialidade;
}

void Especialista::setNumAtendimentos(int numAtendimentos){
	this->_numAtendimentos += numAtendimentos;
}

void Especialista::setComissao(double comissao){
	this->_comissao += comissao;
}

void Especialista::setEspecialidade(std::string especialidade){
	this->_especialidade = especialidade;
}

double Especialista::comissao(double valorVenda) {
    return valorVenda * PERC;
}

void Especialista::imprimeDadosEspecialista() {

        std::cout << "[Especialista]" << std::endl;
        Funcionario::imprimeDadosFuncionario();

        std::cout << "  Nome: " << getNome() << std::endl
                  << "  SalarioBase: R$ "  << std::setprecision(2) << std::fixed << getSalarioMin() << std::endl
                  << "  Num Atendimentos: " << getNumAtendimentos() << std::endl
                  << "  Salario Total: R$" << getSalarioMin() + getComissao() << std::endl << std::endl;

}
