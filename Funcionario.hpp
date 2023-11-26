#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    private: 
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string IDADE;
        string nome;
        int rgFunc;

    public:
        void setdata(string name, string age, int doc, double wage){
            SalarioBase = wage;
            IDADE = age;
            nome = name;
            rgFunc = doc;
        }

        string getname(){
            return nome;
        }

        double getwage(){
            return SalarioBase;
        }

        string getage(){
            return IDADE;
        }

        int getdoc(){
            return rgFunc;
        }

        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl;
        }
};

#endif
