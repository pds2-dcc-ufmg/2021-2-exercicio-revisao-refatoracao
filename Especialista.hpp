#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"


class Especialista : public Funcionario {

    private:
        std::string especialidade;
        const float PERCENTUAL_COMISSAO = 0.1;
        unsigned NumAtendimentos = 0;
        double ComissaoAcumulada = 0;
    
    public:

        Especialista(std::string _nome, int _idade, int _rg, double _SalarioBase, std::string _especialidade);
        
        void comissionar_venda(double ValorVenda);

        void Atender();
        unsigned GetNumAtendimentos() const;

        std::string GetNome();

        void print() const;

    
};

#endif
