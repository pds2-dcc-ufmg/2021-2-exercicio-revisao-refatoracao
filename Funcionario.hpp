#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    protected:
    
    // @brief: valor mínimo recebido pelo funcionario
    
        double SalarioBase; 
        string Idade;
        string Nome;
        int RgDoFuncionario;

        public:

       Funcionario(string nome, string idade, int rgDoFuncionario, double salarioBase){

         this->SalarioBase=salarioBase;
      this->Idade=idade;
      this->Nome=nome;
      this->RgDoFuncionario=rgDoFuncionario;


         
       };

        
       

        void print() {
            cout << "[Funcionario]" << endl  << "  Idade: " << Idade << endl  << " RGFunc: " << RgDoFuncionario << endl;
        }

      
};

#endif
