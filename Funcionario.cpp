#include "Funcionario.hpp"

/*
Arquivo com as implementacoes dos metodos e funcoes da classe Especialista
*/

void Funcionario::print(){} // o metodo esta vazio pois sera sobrescrito

std::string Funcionario::getNome(){
    return this->_nome;
} 