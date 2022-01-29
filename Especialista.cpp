#include "Especialista.hpp"

Especialista::Especialista(double Salario, std::string Idade,
         std::string Nome, int RgFuncionario, std::string Especialidade) : 
         Funcionario(Salario, Idade, Nome, RgFuncionario), Especialidade(Especialidade){}

double Especialista::getComissao(double ValorVenda) {
        double ComissaoFuncionario = ValorVenda*PERCENTUAL_COMISSAO;
                  return ComissaoFuncionario;
    }

void Especialista::Print() {

        std::cout << "[Especialista]" << std::endl;
        Funcionario::Print();
     std::cout << "  Nome: " << this->getNome() << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->getSalarioBase() <<std::endl;

    }