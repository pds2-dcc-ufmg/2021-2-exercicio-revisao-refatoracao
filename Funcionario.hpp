#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
    
        double auxSalarioBase(){
	        return this->_salarioBase;
        }   

        string auxIdade(){
	        return this->_idade;
        }

        string auxNome(){
	        return this->_nome;
        }
        int auxRgFunc(){
	        return this->_rgFuncionario;
        }
        
        void Funcionario(string nome, string idade, int rgFuncionario, double salarioBase){       
            this->string _nome = nome;
            this->string _idade = idade;
            this->int _rgFuncionario = rgFuncionario;
            this->double _salarioBase = salarioBase;
        }
        
        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << this->auxIdade() << endl
            << "  RGFunc: " << this->auxRgFunc() << endl;
        }
    
    private:
        double _salarioBase; // valor mínimo recebido pelo funcionário
        string _idade;
        string _nome;
        int _rgFuncionario;
};

#endif
