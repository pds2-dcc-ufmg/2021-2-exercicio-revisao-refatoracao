#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

class Animal {
    private:
        std::string idade;
        std::string familia;
        std::string nome;
    public:
        Animal();
        Animal(std::string _idade, std::string _familia, std::string _nome);
        void setIdade(std::string _idade);
        void setFamilia(std::string _familia);
        void setNome(std::string _nome);
        std::string getNome();
        void print();
        void print_oi();
};

#endif
