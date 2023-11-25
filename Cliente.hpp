#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <iostream>

class Cliente {
private:
    std::string nome;
    std::string endereco;
    std::string cep;

public:
    void setNome(const std::string& nome);
    void setEndereco(const std::string& endereco);
    void setCep(const std::string& cep);
    void print() const;
};

#endif
