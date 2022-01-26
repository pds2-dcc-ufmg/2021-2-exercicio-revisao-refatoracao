#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda
{
private:
    double valor;
    std::string descricao;
    Especialista especialista;
    Cliente cliente;

public:
    Venda(Cliente clienteAux,
          Especialista especialistaAux,
          std::string descricaoAux,
          double valorAux);
    void imprimirDados();
    std::string getNomeEspecialista() { return especialista.getNome(); }
    std::string getNomeCliente() { return cliente.getNome(); }
    std::string getDescricao() { return descricao; }
};

#endif