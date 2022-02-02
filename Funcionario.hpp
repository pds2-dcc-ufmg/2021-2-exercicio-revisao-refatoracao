#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>


class Funcionario {
    public:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string IDADE;
        std::string nome;
        int rgFunc; // numero de registro do funcionario

        virtual void print(); // imprime na tela os dados de um funcionario cadastrado
        void print_oi(); // imprime na tela tchau
};

class Especialista : public Funcionario {

    private:
        double perc = 0.1; // porcentagem de comissao
        double percWanda = 0.1; // porcentagem de comissao especifico
    public:
        std::string especialidade;

    double comissao(double ValorVenda);
    void print();

};

#endif
