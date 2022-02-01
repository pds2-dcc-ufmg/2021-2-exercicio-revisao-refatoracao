#include "Venda.hpp"
 //Implementação dos Metodos de Set da Classe Cliente
void Venda::SetValor(double Valor){
    this->Valor = Valor;
}
void Venda::SetDescricao(string Descricao){
    this->Descricao = Descricao;
}
void Venda::SetEspecialista(Especialista Esp){
    this->Esp = Esp;
}
void Venda::SetCliente(string Cliente){
    this->Cliente = Cliente;
}
//Implementação dos Metodos de Set da Classe Cliente
double Venda::GetValor(){
    return Valor;
}
string Venda::GetDescricao(){
    return Descricao;
}
Especialista Venda::GetEspecialista(){
    return Esp;
}
string Venda::SetCliente(){
    return Cliente;
}
void Venda::Print() {

    std::cout << "Especialista: ";
    cout << Esp.GetNome();
    std::cout << " Cliente: ";
    cout << Cliente;
    cout << " Descricao: " << GetDescricao() << endl;
}