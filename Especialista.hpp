#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;
double percWanda = 0.1;


class Especialista : public Funcionario {

  public:
    double comissao(double ValorVenda) {
      return ValorVenda*perc;
    }
    
    Especialista(int a){};

    Especialista(string nome,string idade,int rgFunc,double salarioBase,string especialidade){
      this->nome = nome; 
      this->idade = idade; 
      this->rgFunc = rgFunc;
      this->salarioBase = salarioBase; 
      this->especialidade = especialidade;
    }

    string getName(){
      return nome;
    }
    
    double getSalarioBase(){
      return salarioBase;
    }

    void print() {
      std::cout << "[Especialista]" << endl;
      Funcionario::print();
      
      std::cout << "  Nome: " << nome << endl
      << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
    }

  private:
    string especialidade;
};

#endif

