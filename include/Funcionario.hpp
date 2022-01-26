#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iomanip>
#include <iostream>

using namespace std;

class Funcionario {
private:
    double SalarioBase; // valor m�nimo recebido pelo funcion�rio
    string IDADE;
    string nome;
    int rgFunc;

public:
    void setNome(std::string nome);

    void setIdade(std::string idade);

    void setRgFunc(int rgFunc);

    void setSalarioBase(double SalarioBase);

    std::string getNome();

    std::string getIdade();

    double getSalarioBase();

    int getRgFunc();

    void print();

    void print_oi();

    // void setNome(std::string nome) {
    //     this->nome = nome;
    // }

    // void setIdade(std::string idade) {
    //     this->IDADE = idade;
    // }

    // void setRgFunc(int rgFunc) {
    //     this->rgFunc = rgFunc;
    // }

    // void setSalarioBase(double SalarioBase) {
    //     this->SalarioBase = SalarioBase;
    // }

    // std::string getNome() {
    //     return this->nome;
    // }

    // std::string getIdade() {
    //     return this->IDADE;
    // }

    // double getSalarioBase() {
    //     return this->SalarioBase;
    // }

    // int getRgFunc() {
    //     return this->rgFunc;
    // }

    // void print() {
    //     cout << "[Funcionario]" << endl
    //     << "  Idade: " << IDADE << endl
    //     << "  RGFunc: " << rgFunc << endl;
    // }

    // void print_oi(){
    //     cout << "Tchau" << endl;
    // }
};

#endif
