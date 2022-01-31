#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario{
    public:
        //Não será necessário, pois é subclasse de Funcionário
        //double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        //string idade;
        //string nome;
        //int rgFunc;
        
        double bonificacao;


        void print() override {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << get_nome() << endl
            << "  Idade: " << get_idade() << endl
            << "  RGFunc: " << get_rg() << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << get_salario() <<endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double x;
            return numTOTALVendas*ValorBONIFICACAO;
        }

};

#endif

