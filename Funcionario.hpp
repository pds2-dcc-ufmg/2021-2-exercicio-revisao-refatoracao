#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    
    protected:
        double SalarioBaseFuncionario; 
        string IDADE;
        string nome;
        int rgFunc;

    public:

        void print(){
            cout << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl;
        }
        double getSalarioBase(){
            return SalarioBaseFuncionario;
        }

        void setSalarioBase(double SB){
            SalarioBaseFuncionario = SB;
        }

        string getIDADE(){
            return IDADE;
        }

        void setIDADE(string age){
            IDADE = age;
        }

        string getnome(){
            return nome;
        }

        void setnome(string name){
            nome = name;
        }

        int getrgFunc(){
            return rgFunc;
        }

        void setrgFunc(int i){
            rgFunc = i;
        }
};

#endif
