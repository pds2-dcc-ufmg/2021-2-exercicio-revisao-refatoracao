#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>




class Funcionario{
  
    public:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string IDADE; //dados do Funcionario
        std::string nome;
        int rgFunc;

        void print();   //funcao responsavel por imprimir os dados de um Funcionario
        
        
};

#endif
