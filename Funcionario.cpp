#include <iostream>
#include <string>
#include "Funcionario.hpp"

void Funcionario::print() {
    cout << " Nome: " << idade << endl 
        << " Idade: " << idade << endl
            << " RG do funcionário: " << rg << endl
                << " Salário base: R$ " << fixed << setprecision(2) << salarioBase <<endl;
}