#include <iostream>
#include <string>
#include "Especialista.hpp" 


//funcao que calcula a comissao sobre cada venda separadamente
double Especialista::comissao(double ValorVenda) {
      double c = ValorVenda*perc;
      return c;
    }
    
//funcao que imprime todos os dados deste funcionario, mudando apenas da classe base a implementacao do salario total e do num de vendas- numero de atendimentos- realizados
void Especialista::print(){
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();
    std::cout<< "  Num Atendimentos: "<< numvendas <<endl;
    std::cout<< "  Salario Total: "<< this->calculasalariototal() << std::endl <<"\n";
}
 
//funcao utilizada para adicionar uma venda realizada por este vendedor
void Especialista::adicionavenda(Venda x){

    this->vendas.push_back(x);
    this->numvendas=this->numvendas+1;

     
};

//funcao usada para calcular o salario total, que varia conforme a quantidade de vendas e a comissao sobre cada uma delas, esta funcao utiliza a funcao que calcula a comissao sobre cada venda da realizada por este especialista
double Especialista::calculasalariototal(){

    double valor= this-> SalarioBase;
      
      for(int i=0;i<numvendas;i++){
          valor+= comissao(vendas[i].VALOR) ;
        }

    return valor;
}



