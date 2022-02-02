#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        /**
        *@brief Imprime informações do funcionário
        */
        virtual void print();
        /**
        *@brief Calcula a renda extra do funcionario
        */
        virtual double calculaExtra();
        /**
        *@brief Define o valor da renda extra do funcionario
        */
        virtual double setRendaExtra();
        /**
        *@brief Define o salário base do funcionário
        *@param salarioMin Salário base do funcionário
        */
        void setSalarioBase(double salarioMin) {
            salarioBase = salarioMin;
        }
        /**
        *@brief Retorna o nome do funcionário
        */
        string getNome(){
            return nome;
        }
        /**
        *@brief Retorna a idade do funcionário
        */
        int getIdade(){
            return idade;
        }
        /**
        *@brief Retorna o rg do funcionário
        */
        int getRg(){
            return rg;
        }
        /**
        *@brief Define o nome do funcionário
        */
        void setNome(string nomeFuncionario){
            nome = nomeFuncionario;
        }
        /**
        *@brief Define a idade do funcionário
        */
        void setIdade(int idadeFuncionario){
            return idade = idadeFuncionario;
        }
        /**
        *@brief Define o rg do funcionário
        */
        void setRg(int rgFuncionario){
            rg = rgFuncionario;
        }
        /**
        *@brief Retorna o percentual de comissão/bonificação
        */
        double getPercComissao(){
            return percComissao;
        }
    
    private:
        /**
        *@brief Valor mínimo recebido pelo funcionário    
        */
        double salarioBase;
        /**
        *@brief Percentual de comissão recebido pelo funcionário    
        */   
        double percComissao;
        /**
        *@brief Renda extra que o funcionario ganhará (bonificação ou comissão)  
        */
        double rendaExtra;
        /**       
        *@brief Dados do funcionário
        */
        int idade;
        string nome;
        int rg;
};

#endif
