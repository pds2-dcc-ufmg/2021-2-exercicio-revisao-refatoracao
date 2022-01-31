#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double ValorBonificacao = 15.0;

class Gerente {
    private:
    
    // @brief: valor mínimo recebido pelo funcionario
        double SalarioBase; 
        string Idade;
        string Nome;
        int RgDoFuncionario;
        double Bonificacao;


        void print() {
            cout << "[Funcionario]" << endl << "[Gerente]" << endl  << "  Nome: " << Nome << endl  << "  Idade: " << Idade << end << "  RGFunc: " << RgDoFuncionario << end  << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
        }

        double Calcula_Bonificacao_Gerente(int NumTotalVendas){
            return NumTotalVendas*ValorBonificacao;
        }

};

#endif

