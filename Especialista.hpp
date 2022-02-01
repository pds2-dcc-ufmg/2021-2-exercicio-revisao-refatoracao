#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double PercentualDoGerente = 0.1;



class Especialista : public Funcionario {

    

     private:
        string Especialidade;
        

    
    public:



    Especialista(string nome, string idade, int rgDoFuncionario, double salarioBase, string especialidade)  : Funcionario( nome,  idade,  rgDoFuncionario, salarioBase) {
      this->Especialidade=especialidade;
      
    }


    
    double Comissao(double ValorVenda) {
        return ValorVenda*PercentualDoGerente;            
    }
  

  double getSalarioBase () {
    return this->SalarioBase;
  }

   string getNome(){
     return this->Nome;
   }
   
    

    void print() {

        std::cout << "[Especialista]" << endl;
        
        Funcionario::print();



        std::cout << "  Nome: " << Nome << endl << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;

    }
};

#endif
