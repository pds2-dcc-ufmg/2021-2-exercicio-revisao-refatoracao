
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
    Especialista Especialista;
    string Cliente;

    public:
    
    void print() {

        std::cout << "Especialista: " << Especialista.Nome;
        

        std::cout << " Cliente: " << Cliente;
     
    }

};

#endif
