
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    
    public:
        Venda(std::string descricao, double valor, Cliente cliente, Especialista especialista);
        

        double get_valor()const;
        void print()const;
        std::string get_descricao() const;
        
    private:
        
        string _descricao;
        double _valor;
        Cliente _cliente;
        Especialista _especialista;
   
};

#endif
