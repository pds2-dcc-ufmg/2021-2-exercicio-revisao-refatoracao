#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

class Gerente : public Funcionario {
    public:
        Gerente(std::string nome = "", int idade = 0, std::string RG = "", int salario = 0);
        
        void imprimirDados() const override; 

        void atribuirBonificacao(int numTotalVendas); 

        
    private:
        double _bonificacao;
    

};

#endif

