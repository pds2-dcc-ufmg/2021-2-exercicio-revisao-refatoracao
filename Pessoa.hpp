#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <iomanip>

class Pessoa {
    private:
        std::string idade;
        std::string nome;

    public:
        virtual void imprimirDados() {}
        void setNome(std::string novoNome) {
            nome = novoNome;
        }
        void setIdade(int novaIdade) {
            idade = novaIdade
        }
};

#endif