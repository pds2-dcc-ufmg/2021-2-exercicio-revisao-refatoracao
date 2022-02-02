#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {    
    public:
        /**
        *@brief Imprime informações do especialista (nome, idade, rg e salario base)
        */
        void print() override {
            cout << "[Funcionario]" << endl
            << "[Especialista]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
        };
        /**
        *@brief Calcula o valor da renda extra a ser recebida
        *@param valorVenda Valor da Venda
        */
        double calculaExtra(double valorVenda) override {
            return valorVenda*percComissao;
        };
        /**
        *@brief Define o valor da renda extra a ser recebida
        *@param valorVenda Valor da Venda
        */   
        void setRendaExtra(double valorVenda) {
            rendaExtra =  calculaExtra(valorVenda);   
        };
        /**
        *@brief Define a especialidade do funcionário
        *@param especialidadeFuncionario Especialidade do funcionário
        */   
        void setEspecialidade(string especialidadeFuncionario){
            especialidade = especialidadeFuncionario;
        };

    private:
        percComissao = 0.1;
        string especialidade;
};

#endif
