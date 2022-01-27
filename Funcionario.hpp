#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include "Servidor.hpp"

using namespace std;

class Funcionario : public Servidor {

public:
    void print() override {
        cout << "[Funcionario]" << endl
             << "  Idade: " << idade << endl
             << "  RGFunc: " << rgFunc << endl;
    }

    static void print_oi() {
        cout << "Tchau" << endl;
    }
};

#endif
