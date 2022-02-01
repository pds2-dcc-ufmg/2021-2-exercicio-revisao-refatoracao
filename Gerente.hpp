#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double ValorBonificacao = 15.0;

class Gerente : public Funcionario {
    private:
    
    // @brief: valor mínimo recebido pelo funcionario

        double SalarioBase; 
        string Idade;
        string Nome;
        int RgDoFuncionario;
        double Bonificacao;

 public:

         
 Gerente(string nome, string idade, int rgDoFuncionario, double salarioBase): Funcionario( nome,  idade, rgDoFuncionario, salarioBase){
      
      this->SalarioBase=salarioBase;
      this->Idade=idade;
      this->Nome=nome;
      this->RgDoFuncionario=rgDoFuncionario;

      
    }

    double getSalarioBase () {
    return this->SalarioBase;
  }


   double getBonificacao () {
    return this->Bonificacao;
  }
      
      void set_Bonificacao(int bonificacao) {
         Bonificacao = bonificacao; 
         }


        void print() {
            cout << "[Funcionario]" << endl << "[Gerente]" << endl  << "  Nome: " << Nome << endl  << "  Idade: " << Idade << endl << "  RGFunc: " << RgDoFuncionario << endl  << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
        }

        double Calcula_Bonificacao_Gerente(int NumTotalVendas){
            return NumTotalVendas*ValorBonificacao;
        }

};

#endif


