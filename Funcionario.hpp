
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
        double SalarioTotal;

    public:

        virtual ~Funcionario(){};

        double getSalarioTotal() const;
        double getSalarioBase() const ;
        void setSalarioTotal(double ValorAdicionado);
        std::string getIdade() const;
        std::string getNome() const;
        int getRgFuncionario() const;

        Funcionario(double Salario, std::string Idade,
         std::string Nome, int RgFuncionario);

        virtual void Print() const;
};

#endif