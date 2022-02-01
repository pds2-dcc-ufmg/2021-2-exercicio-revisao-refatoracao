#include "Gerente.hpp"
double Gerente::GetBonificacao(){
    return Bonificacao;
}
void Gerente::Print() {
     cout << "[Funcionario]" << endl
     << "[Gerente]" << endl
     << "  Nome: " << GetNome() << endl
     << "  Idade: " << GetIdade() << endl
     << "  RGFunc: " << GetRgFuncionario() << endl
     << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}
void Gerente::CalculaBonificacaoGerente(int NumTotalVendas){
     Bonificacao = NumTotalVendas*ValorBonificacao;
}