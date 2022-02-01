#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario {

    public:

        Especialista ();
        Especialista (std::string nome,
                      int idade,
                      int rgFunc,
                      int salarioBase,
                      std::string especialidade);
        ~Especialista ();

        double comissao(double ValorVenda);
        void print();

        std::string getEspecialidade ();

        void setEspecialidade (std::string especialidade);


    private:

        std::string especialidade;
        
        const double perc = 0.1;
};

#endif
