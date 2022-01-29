#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"


// Não é uma boa prática utilizar namespaces em escopo global, pois pode gerar conflitos
//using namespace std;



//Variável não utilizada
//double percWanda = 0.1;


class Especialista : public Funcionario {

    private:
        std::string especialidade;
        Funcionario* mf;
        int numAtendimentos;
        double comissao;
        //As variáveis numAtendimentos e comissao agora são próprias da classe

    public:

        double perc = 0.1;

        //Os nomes das funções e das variáveis devem ser bem escolhidos de forma a esclarecer o código
        Especialista(Funcionario *f, std::string especialidade, int numAtendimentos);

        Especialista();

        virtual ~Especialista();
        
        double calculaComissao(double valorVenda);

        double calculaSalario();

        void setComissao(int comissao_);

        double getComissao();

        void setAtendimentos(int atendimentos_);

        int getAtendimentos();

        void print() override;
};

//Declarando as variaveis como private, retirando o include "Cliente.hpp" o qual é desnecessario,
//padronizando o layout das variáveis, alterando o nome das funções de forma a melhor compreensão
//,modularizando em hpp/cpp e a declaração dos metodos setComissao, getComissao, setAtendimentos, getAtendimentos e calculaSalario

#endif
