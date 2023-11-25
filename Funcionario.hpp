#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Funcionario {
    private:
        string nome;
        string idade;
        int rgFunc;
        double salarioBase; // valor mínimo recebido 


    public:
      Funcionario(const std::string& nome, const std::string&       idade, const int& rgFunc, const double& salarioBase);

      double getSalarioBase();
      std::string getIdade();
      std::string getNome();
      int getRgFunc();

        void print();     
};

#endif