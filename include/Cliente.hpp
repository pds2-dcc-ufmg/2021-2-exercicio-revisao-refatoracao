#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {

private:
    string NOME;
    string endereco;
    string Cep;

public:
    void setNome(std::string nome);

    void setEndereco(std::string endereco);

    void setCep(std::string Cep);

    void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
