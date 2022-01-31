#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    private:
        double SalarioBase;
        string idade;
        string nome;
        int rgFunc;
    public:
        virtual void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl;
        }

        virtual double get_salario(){
            return this->SalarioBase;
        }

        virtual std::string get_nome(){
            return this->nome;
        }

        virtual std::string get_idade(){
            return this->nome;
        }

        virtual int get_rg(){
            return this->rgFunc;
        }

        virtual void set_salario(double salary){
            this->SalarioBase = salary;
        }

        virtual void set_nome(std::string name){
            this->nome = name;
        }

        virtual void set_idade(std::string age){
            this->idade = age;
        }

        virtual void set_rg(int errege){
            this->rgFunc = errege;
        }

        void print_oi(){
            cout << "Tchau" << endl;
        }
};

#endif
