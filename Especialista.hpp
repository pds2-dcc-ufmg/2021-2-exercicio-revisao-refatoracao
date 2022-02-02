#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario {
    private:
            double valorComissao;
            double perc;
            string especialidade;
    
    public:
            double calculaComissao(double ValorVenda);
            double getComissao();
            void setComissao(double valorComissaoNovo);
            string getEspecialidade();
            void setEspecialidade(string especialidadeNovo);
            
            void print();
};

#endif
