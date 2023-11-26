#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    public:
        Funcionario(double SalarioBase, std::string IDADE, std::string nome, int rgFunc):
                    _SalarioBase(SalarioBase), _IDADE(IDADE), _nome(nome), _rgFunc(rgFunc) {}

        double getSalarioBase() const{
            return _SalarioBase;
        }
        std::string getIdade() const{
            return _IDADE;
        }
        std::string getNome() const{
            return _nome;
        }
        int getRG() const{
            return _rgFunc;
        }

        void print() const {
            std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << this->getIdade() << std::endl
            << "  RGFunc: " << this->getRG() << std::endl;
        }

    private:
        double _SalarioBase; // valor minimo recebido pelo funcionario
        std::string _IDADE;
        std::string _nome;
        int _rgFunc;
};

#endif
