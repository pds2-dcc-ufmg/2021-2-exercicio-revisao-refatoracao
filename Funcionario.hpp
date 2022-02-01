#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:

        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << this->getIdade() << endl
            << "  RGFunc: " << this->getRgFunc() << endl;
        }

        void addFuncionario(string Nome,
                            string Idade,
                            int RgFunc, 
                            double SalarioBase){
                                
	        this->setNome(Nome);
	        this->setIdade(Idade);
	        this->setRgFunc(RgFunc);
            this->setSalarioBase(SalarioBase);
        }

        double getSalarioBase(){
	        return this->_SalarioBase;
        }   

        string getIdade(){
	        return this->_Idade;
        }

        string getNome(){
	        return this->_Nome;
        }
        int getRgFunc(){
	        return this->_RgFunc;
        }

        void setSalarioBase(double SalarioBase){
	        this->_SalarioBase = SalarioBase;
        }   

        void setIdade(string Idade){
	        this->_Idade = Idade;
        }

        void setNome(string Nome){
	        this->_Nome = Nome;
        }
        void setRgFunc(int RgFunc){
	        this->_RgFunc = RgFunc;
        }

    protected:
        double _SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string _Idade;
        string _Nome;
        int _RgFunc;
};

#endif
