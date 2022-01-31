#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario {
    valorBonificacao = 0.1;
    
    private:
        std::string especialidade;

    public:
        void imprimirDados() override {
            std::cout << "[Funcionario]" << endl;
            std::cout << "[Especialista]" << endl;
            Funcionario::imprimirDados();
        }

        void setEspecialidade (std::string novaEspecialidade){
            especialidade = novaEspecialidade;
        }
};

#endif
