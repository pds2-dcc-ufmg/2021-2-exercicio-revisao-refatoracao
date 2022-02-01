#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
using namespace std;


class Especialista : public Funcionario {
 
    public:
        Especialista();
        Especialista(string _nome, int _idade, string _rg, double _salarioBase, string _especialidade);

        /*
        * Chama o método printDados da classe Funcionário, que imprime a idade e o rg do funcionário, e,
        * depois, imprime o nome e o salário base do especialista.
        */
        void printDadosEspecialista();

        double getPercentualComissao();
        void setPercentualComissao(double _percentualComissao);

        string getEspecialidade();
        void setEspecialidade(string _especialidade);

        double getComissaoTotal();
        void setComissaoTotal(double valorVenda); //mudei o nome do método comissao para setComissaoTotal
        
    private:
        double percentualComissao = 0.1;
        string especialidade;
        double comissaoTotal = 0;
};

#endif
