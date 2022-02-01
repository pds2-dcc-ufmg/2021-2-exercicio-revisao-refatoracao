#include "Especialista.hpp"
void Especialista::SetEspecialidade(string Especialidade){
    this->Especialidade = Especialidade;
}
string Especialista::GetEspecialidade(){
    return Especialidade;
}
double Especialista::comissao(double ValorVenda) {
    return ValorVenda*perc;
 }
void Especialista::Print() {
    std::cout << "[Especialista]" << endl;
    Funcionario::Print();
}