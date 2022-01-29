#include "Gerente.hpp"

Gerente::Gerente (double Salario, std::string Idade,
         std::string Nome, int RgFuncionario) : Funcionario(Salario, Idade, Nome, RgFuncionario)
            {}

Gerente::~Gerente(){
    delete this;
}

double Gerente::calculaBonificacaoGerente(int NumTotalVendas){
            return NumTotalVendas*VALOR_BONIFICACAO;
        }


void Gerente::Print() {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << this->getNome() << std::endl
            << "  Idade: " << this->getIdade() << std::endl
            << "  RGFunc: " << this->getRgFuncionario() << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->getSalarioBase() <<std::endl
            << "Salario Total: " << this->getSalarioTotal() <<std::endl;
        }

