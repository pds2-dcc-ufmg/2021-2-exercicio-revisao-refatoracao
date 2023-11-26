
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{
private:
    double valor;
    std::string descricao;
    Especialista& especialista;
    std::string cliente;
public:
    Venda(std::string _cliente, Especialista& _especialista, std::string _descricao, double _valor) : cliente(_cliente), especialista(_especialista), descricao(_descricao), valor(_valor){
        especialista.addAtendimento();
        especialista.addComissao(valor);
    }
    
    void print() {
        std::cout << "Especialista: ";
        std::cout << especialista.getNome();
        std::cout << " Cliente: ";
        std::cout << cliente;
        std::cout << " Descricao: " << descricao << std::endl;
    }
};

#endif
