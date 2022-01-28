#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Pessoa {
    public:
        string nome;

        virtual void print() const = 0; 
};

#endif