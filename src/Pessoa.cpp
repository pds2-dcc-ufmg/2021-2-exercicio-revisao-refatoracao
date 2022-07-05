#include <iostream>
#include <string>

#include "Pessoa.hpp"

string Pessoa::getNome() { return this->nome; }
void Pessoa::setNome(string nome){ this->nome = nome; }