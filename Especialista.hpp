#ifndef ESPECIALISTA_HPP
#define ESPECIALISTA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario {

    public:

        int getNumAtendimentos();
        double getComissao();
        std::string getEspecialidade();

        void setEspecialidade(std::string especialidade);
        void setNumAtendimentos(int numAtendimentos);
        void setComissao(double comissao);

        double comissao(double ValorVenda);
        void imprimeDadosEspecialista();
        void initDados();

    private:

        std::string _especialidade;
        int _numAtendimentos;
        double _comissao;
};

#endif
