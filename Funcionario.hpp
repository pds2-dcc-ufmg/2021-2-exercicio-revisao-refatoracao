#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        void print() {
        cout << "[Funcionario]" << endl
        << "  Idade: " << IDADE << endl
        << "  RGFunc: " << rgFunc << endl;
    }

    void print_nome(){ //Função "print_oi substituída"
        std::cout << this->nome << endl;
    }

    void print_SalarioBase(){
        std::cout << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
    }

    void print_idade(){
        std::cout << this->IDADE << endl;
    }

    void print_rgFunc(){
        std::cout << this->rgFunc << endl;
    }

    void get_nome(string s){
        this->nome = s;
    }
    void get_SalarioBase(double n){
        this->SalarioBase = n;
    }
    void get_idade(string s){
        this->IDADE = s;
    }
    void get_rgFunc(int n){
        this->rgFunc = n;
    }

    

    protected: //membros privados
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string IDADE;
        string nome;
        int rgFunc;
    };

#endif
