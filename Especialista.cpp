#include "Especialista.hpp"

Especialista::Especialista(std::string _nome, int _idade, int _rg, double _SalarioBase, std::string _especialidade) {
    nome = _nome; 
    idade = _idade; 
    rg = _rg;
    SalarioBase = _SalarioBase; 
    especialidade = _especialidade; 
}

void Especialista::comissionar_venda(double ValorVenda) {
    ComissaoAcumulada += ValorVenda * PERCENTUAL_COMISSAO;    
}


void Especialista::Atender() {
    NumAtendimentos++;
}

unsigned Especialista::GetNumAtendimentos() const {
    return NumAtendimentos;
}
 
std::string Especialista::GetNome() {
    return nome;
}

void Especialista::print() const {

    std::cout   << "[Especialista]\n" 
                << "[Funcionario]\n"
                << "  Idade: " << idade << std::endl
                << "  RGFunc: " << rg << std::endl
                << "  Nome: " << nome << std::endl
                << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl
                << "  Num Atendimentos: " << NumAtendimentos << std::endl
                << "  Salario Total: R$ " << SalarioBase + ComissaoAcumulada << std::endl;

}