//Bibliotecas 
#include "Especialista.hpp"
//Metodo para Setar a Especialidade
void Especialista::SetEspecialidade(string Especialidade){
    this->Especialidade = Especialidade;
}
//Metodo para dar Get na Especialidade
string Especialista::GetEspecialidade(){
    return Especialidade;
}
//Metodo que calcula a commissão a partir do valor de venda e porcentagem
double Especialista::comissao(double ValorVenda) {
    return ValorVenda*perc;
 }
 //Metodo que imprime os dados dos especialistas
void Especialista::Print() {
    std::cout << "[Especialista]" << endl;
    Funcionario::Print();
}