#include "Venda.hpp"

void Venda::print() {

    std::cout << "Especialista: ";
    std::cout << esp.getNome();

    std::cout << " Cliente: ";
    std::cout << cliente.getNome();
}

double Venda::getValor(){
    return this -> VALOR;
}
std::string Venda::getDescricao(){
    return this-> descricao;
}
void Venda::setValor(double Valor){
    this-> VALOR = Valor;
}
void Venda::setDescricao(std::string Descricao){
    this -> descricao = Descricao;
}