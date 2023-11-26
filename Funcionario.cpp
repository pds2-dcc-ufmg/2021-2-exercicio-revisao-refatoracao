 #include <iostream>
#include <string>
#include "Funcionario.hpp"
 
 void Funcionario::print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl;
        }

Funcionario::Funcionario(_idade, _nome, _rgFunc, _SalarioBase): idade(_idade), nome(_nome), rgFunc(_rgFunc), SalarioBase(_SalarioBase);


