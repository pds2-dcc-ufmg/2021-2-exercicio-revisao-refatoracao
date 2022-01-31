#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <iomanip>

class Pessoa {
    protected:
        int idade;
        std::string nome;

    public:
        Pessoa(std::string nome, int idade){
            this->nome = nome;
            this->idade = idade;
        }

        Pessoa(std::string nome){
            this->nome = nome;
            this->idade = 0;
        }

        Pessoa(){}

        std::string getNome(){
            return this->nome;
        }

        virtual void imprimirDados() {}
};

#endif