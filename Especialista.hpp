#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include <string>
#include <iomanip>


class Especialista : public Funcionario {
    public:
        Especialista(std::string nome, 
                    int idade,
                    double salarioBase,
                    std::string rgFunc,
                    std::string especialidade)
        :Funcionario(nome, idade, salarioBase, rgFunc){
            this->especialidade = especialidade;
        }
        
        double comissao(double valorVenda) {
            return valorVenda*percent;
        }


        void print() override{
            std::cout << "[Especialista]" << std::endl;
            std::cout << "  Nome: " << nome << std::endl;
            std::cout << "Especialidade: " << especialidade << std::endl;
            std::cout<< "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase <<std::endl;

    }

    private:
        double percent = 0.1;
        std::string especialidade;
};

#endif
