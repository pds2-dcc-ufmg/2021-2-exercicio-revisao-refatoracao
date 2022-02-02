#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

using namespace std;

class Especialista : public Funcionario {
    private:
            double valorComissao;
            double perc;
            string especialidade;
    
    public:
            double comissao(double ValorVenda);
            void setComissao(double valorComissaoNovo);
            string getEspecialidade();
            void setEspecialidade(string especialidadeNovo);
            
            void print();
};

#endif
