#include <iostream>
#include <string>
#include "Gerente.hpp"

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            
    return numTOTALVendas*bonificacao;
        }

void Gerente::print() {
            cout<< "[Gerente]" << endl;
            Funcionario::print();
    
        }
