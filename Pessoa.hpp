#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <iomanip>

class Pessoa {
    private:
        std::string idade;
        std::string nome;

        virtual void imprimirDados() {}
        virtual void setNome(std::string nome) {}
        virtual void setIdade(int idade) {}
};

#endif