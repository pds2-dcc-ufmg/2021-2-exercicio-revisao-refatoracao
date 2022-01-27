#ifndef INC_2021_2_EXERCICIO_REVISAO_REFATORACAO_SERVIDOR_HPP
#define INC_2021_2_EXERCICIO_REVISAO_REFATORACAO_SERVIDOR_HPP


#include <iostream>
#include <iomanip>

using std::string;

class Servidor {

public:
    double salarioBase;
    int idade;
    string nome;
    int rgFunc;

    virtual void print() {

    }
};


#endif