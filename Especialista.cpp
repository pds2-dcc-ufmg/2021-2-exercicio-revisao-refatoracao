#include "Especialista.hpp"

Especialista::Especialista(double Salario = 0.0, std::string Idade = 0,
         std::string Nome = " ", int RgFuncionario = 0, std::string Especialidade = " ", int NumAtendimentos = 0, double Comissao = 0.0) : 
         Funcionario(Salario, Idade, Nome, RgFuncionario), Especialidade(Especialidade), NumAtendimentos(NumAtendimentos),
         Comissao(Comissao){}

double Especialista::getComissao(double ValorVenda) {
        double ComissaoFuncionario = ValorVenda*PERCENTUAL_COMISSAO;
        this->NumAtendimentos++;
        return ComissaoFuncionario;
}

void Especialista::Print() const {

        std::cout << "[Especialista]" << std::endl;
        std::cout << "  Nome: " << this->getNome() << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->getSalarioBase() <<std::endl;
        std::cout << "Num Atendimentos: " << this->getNumAtendimentos() << std::endl;      
        std::cout << "Salario Total: " << this->getSalarioTotal() << std::endl; 
    }
Especialista::~Especialista() = default; 

int Especialista::getNumAtendimentos() const {
    return this->NumAtendimentos;
}