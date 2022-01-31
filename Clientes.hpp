
#ifndef CLIENTES_HPP
#define CLIENTES_HPP

#include <vector>
#include "Cliente.hpp"


class Clientes {
public:
    void adicionar_cliente(Cliente cliente);
    const Cliente &operator[](const std::string &nome) const;
    void print() const;

private:
    std::vector<Cliente> clientes;
};

#endif
