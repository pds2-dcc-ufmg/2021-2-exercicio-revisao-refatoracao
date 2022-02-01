#include <iostream>
#include <string>
#include "../include/Funcionario.hpp"

using namespace std;

Funcionario::Funcionario(double _salarioBase, int _idade, string _nome, int _rg){
    setSalarioBase(_salarioBase);
    setIdade(_idade);
    setNome(_nome);
    setRg(_rg);
}
    
double Funcionario::getSalarioBase(){return salarioBase; }
int Funcionario::getIdade(){return idade; }      
string Funcionario::getNome(){return nome; }
int Funcionario::getRg(){return rg; }

void Funcionario::setSalarioBase(double _salarioBase){salarioBase = _salarioBase; }      
void Funcionario::setIdade(int _idade) {idade = _idade;}       
void Funcionario::setNome(string _nome) {nome = _nome;}        
void Funcionario::setRg(int _rg){rg = _rg;}           

void Funcionario::printDados() {        
    cout << "[Funcionario]" << endl
    << "  Idade: " << getIdade() << endl
    << "  RGFunc: " << getRg() << endl;
}
