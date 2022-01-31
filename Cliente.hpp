#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

using namespace std;

class Cliente{
    
    public:

    Cliente(string nome, string endereco, string cep);

    string cep, nome, endereco;

    void print();

};

#endif
