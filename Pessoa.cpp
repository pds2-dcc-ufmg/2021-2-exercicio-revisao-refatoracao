#include "Pessoa.hpp"
//Implementação dos Metodos de Set da Classe Cliente
void Pessoa::SetNome(string Nome){
     this->Nome = Nome;
}
void Pessoa::SetRg(int Rg){
    this->Rg = Rg;
}
void Pessoa::SetIdade(int Idade){
    this->Idade = Idade;
}
//Implementação dos Metodos de Set da Classe Cliente
string Pessoa::GetNome(){
    return Nome;
}
int Pessoa::GetRg(){
    return Rg;
}
int Pessoa::GetIdade(){
    return Idade;
}
    