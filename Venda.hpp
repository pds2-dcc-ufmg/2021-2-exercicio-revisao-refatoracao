
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda {

private:
    double Valor;
    std::string Descricao;
    Especialista* esp;
    std::string Cliente;

public:
    Venda (std::string Cliente, Especialista* esp, std::string Descricao, double Valor);

    void Print();

    std::string get_Cliente();
    
    std::string get_Descricao();

    double get_Valor();


};

#endif
