#include <iostream>
#include <string>
#include "../include/Venda.hpp"

using namespace std;

Venda::Venda(double _valor, string _descricao, Especialista _especialista, Cliente _cliente){
    setValor(_valor);
    setDescricao(_descricao);
    setEspecialista(_especialista);
    setCliente(_cliente);
}

void Venda::printNomesEspecialistaCliente() { 
    cout << "Especialista: " << especialista.getNome();
    cout << " Cliente: " << cliente.getNome();
}

double Venda::getValor(){return valor;}
string Venda::getDescricao(){return descricao;}
string Venda::getNomeEspecialista(){return especialista.getNome();}
std::string Venda::getNomeCliente(){return cliente.getNome();}

void Venda::setValor(_valor){valor = _valor;}
void Venda::setDescricao(string _descricao){descricao = _descricao;}
void Venda::setEspecialista(Especialista _especialista){especialista = _especialista;}
void Venda::setCliente(Cliente _cliente){Cliente = _cliente;}