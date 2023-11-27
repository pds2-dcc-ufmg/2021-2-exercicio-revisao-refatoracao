#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <iomanip>

class Pessoa
{

public:
    virtual void ImprimeDados() const = 0;
    std::string getNome() const;
    int getIdade() const;

protected:
    std::string Nome;
    int Idade{0};
};
#endif