#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {
    private:
            double perc;
            string especialidade;
    
    public:
            double comissao(double ValorVenda);

            string getEspecialidade();
            void setEspecialidade(string especialidadeNovo);
    
            void print();
};

#endif
