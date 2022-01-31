#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

#include <iostream>
#include <iomanip>

class Especialista : public Funcionario {

    public:
        void print() override {
            std::cout << "[Especialista]"       << std::endl;
            std::cout << "[Funcionario]"        << std::endl;
            std::cout << "  Idade: "  << idade  << std::endl;
            std::cout << "  RGFunc: " << rgFunc << std::endl;
            std::cout << "  Nome: "   << nome   << std::endl;
            std::cout << "  SalarioBase: R$ "   
                      << std::fixed << std::setprecision(2) << salarioBase << std::endl;
        }

        void setComissao(double valorVenda) {
            this->comissao += valorVenda*percentualVenda;
        }

        double getComissao() {
            return this->comissao;
        }

        void setNumeroAtendimentos() {
            this->numeroAtendimentos++;
        }

        int getNumeroAtendimentos() {
            return this->numeroAtendimentos;
        }

        void setEspecialidade(std::string especialidade){
            this->especialidade = especialidade;
        }

        std::string getEspecialidade(){
            return this->especialidade;
        }

    private:
        std::string especialidade;
        double percentualVenda = 0.1;
        double comissao = 0;
        int numeroAtendimentos = 0;
};

#endif
