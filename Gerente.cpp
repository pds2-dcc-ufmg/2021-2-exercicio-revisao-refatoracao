//Bibliotecas 
#include "Gerente.hpp"
//Metodo Get para Bonificacao do Gerente 
double Gerente::GetBonificacao(){
    return Bonificacao;
}
//Metodo que imprimi os dados do gerente
void Gerente::Print() {
     cout << "[Funcionario]" << endl
     << "[Gerente]" << endl
     << "  Nome: " << GetNome() << endl
     << "  Idade: " << GetIdade() << endl
     << "  RGFunc: " << GetRg() << endl
     << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}
//Metodo que calcula a Bonificacao do Gerente
void Gerente::CalculaBonificacaoGerente(int NumTotalVendas){
     Bonificacao = NumTotalVendas*ValorBonificacao;
}