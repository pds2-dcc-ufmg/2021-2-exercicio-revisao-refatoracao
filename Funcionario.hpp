#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {

    public:

        string idade;
        string nome;
        int rgFunc;

        virtual void print();

        virtual double salario_extra(double x);

        double get_Salario_Base();

        void set_Salario_Base(double salario_novo);

        virtual double get_Salario_Total();


    private :

       double SalarioBase; // valor m�nimo recebido pelo funcion�rio
       double Salario_Total; 
};

class Gerente : public Funcionario{
    public:
    
        double bonificacao;

        void print () override ;

        double salario_extra(double x) override;

        double get_Salario_Total() override;

        void set_bonificacao(double bonus);

};


class Especialista : public Funcionario {

    public:
        double comissao;
        string especialidade;


    double salario_extra(double x) override;

    double get_Salario_Total() override;

    void set_comissao(double valor_comissao);


    void print() override;


};

#endif
