#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
   public:
    std::string _NOME;
    std::string _endereco;
    std::string _Cep;

    Cliente(std::string nome, std::string endereco, std::string cep) {
        _NOME = nome;
        _endereco = endereco;
        _Cep = cep;
    }

    void print();  // imprime na tela os dados de um cliente cadastrado
};

#endif
