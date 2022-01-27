#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda
{
private:
    Cliente *cliente = nullptr;
    Especialista *especialista = nullptr;
    std::string descricao;
    double valor;

public:
    Venda(Cliente *clienteAux,
          Especialista *especialistaAux,
          std::string descricaoAux,
          double valorAux);

    void imprimirDados();

    Especialista *getEspecialista() { return especialista; }
    Cliente *getCliente() { return cliente; }
    std::string getDescricao() { return descricao; }
    double getValor() { return valor; }
};

#endif