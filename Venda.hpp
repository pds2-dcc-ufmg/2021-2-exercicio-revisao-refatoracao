#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include <string>

using namespace std;

class Venda{

    private:
    double valor;
    string descricao;
    Especialista especialista;
    string nomeCliente;

    public:
Venda(const double& valor, const std::string& descricao, const Especialista& especialista, const std::string& nomeCliente);

double getValor();
std::string getDescricao();
std::string getNomeCliente();

void print();
};

#endif
