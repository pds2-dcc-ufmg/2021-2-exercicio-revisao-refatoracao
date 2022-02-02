#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Atendente {
    public:
        virtual std::string getNome() const = 0;
        virtual double getSalarioBase() const = 0;
        virtual int getIdade() const = 0;
        virtual int getRgFunc() const = 0;
        virtual ~Atendente() {};
};

class Funcionario : public Atendente{
    public:
        double getSalarioBase() const{
            return this->_salarioBase;
        }

        int getIdade() const{
            return this->_idade;
        }

        std::string getNome() const{
            return this->_nome;
        }

        int getRgFunc() const{
            return this->_rgFunc;
        }
        Funcionario(double salarioBase,int idade, std::string nome, int rgFunc){
            this->_salarioBase = salarioBase;
            this->_idade = idade;
            this->_nome = nome;
            this->_rgFunc = rgFunc;
        }
    protected:
        double _salarioBase; // valor m�nimo recebido pelo funcion�rio
        int _idade;
        std::string _nome;
        int _rgFunc;
};

#endif
