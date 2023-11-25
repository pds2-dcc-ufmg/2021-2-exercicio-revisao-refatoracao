#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
public:
    std::string nome;
    std::string endereco;
    std::string cep;

    void print() const;
};

#endif
