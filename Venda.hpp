
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    private:
    
    double Valor;
    string Descricao;
     Especialista *Especialista;
    string Cliente;

    public:


    Venda(string cliente,string descricao,double valor, class Especialista &Especialista_ ){

      this->Valor=valor;
      this->Descricao=descricao;
      this->Especialista= &Especialista_;
      this->Cliente=cliente;


    }

       string getDescricao () {
    return this->Descricao;
  }

    double getValor () {
    return this->Valor;
  }
    
     

    
    void print() {

        std::cout << "Especialista: " << Especialista->getNome();
        

        std::cout << " Cliente: " << Cliente;
     
    }

};

#endif
