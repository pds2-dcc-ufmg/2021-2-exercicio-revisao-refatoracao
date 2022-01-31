
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    private:
        double VALOR;
        string descricao;
        
    
    public:
        string cliente;
        Especialista esp; 

        double getVALOR(){
            return VALOR;
        }

        void setVALOR(double v){
            VALOR = v;
        }

        string getdescricao(){
            return descricao;
        }

        void setdescricao(string desc){
            descricao = desc;
        }

        void print() {

            std::cout << "Especialista: ";
            cout << esp.getnome();

            std::cout << " Cliente: ";
            cout << cliente;

        }

};

#endif
