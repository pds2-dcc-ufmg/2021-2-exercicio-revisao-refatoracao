
#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
/**
 * \class Funcionario
 *
 * \brief Esta classe eh um Colaborador de uma empresa.
 *
 * \details  Um Funcionário possui ...
*/

class Funcionario {
    private: 
    // valor minimo recebido pelo funcionario
        double SalarioBase; 
        std::string Idade;
        std::string Nome;
        int RgFuncionario;

    public:

        virtual ~Funcionario(){};

        double getSalarioBase();
        std::string getIdade();
        std::string getNome();
        int getRgFuncionario();

        Funcionario(double Salario, std::string Idade,
         std::string Nome, int RgFuncionario);
         
                 // void setSalarioBase(double Salario){
        //     this->SalarioBase=Salario;
        // }
        virtual void Print();
        void print_oi();
};

#endif