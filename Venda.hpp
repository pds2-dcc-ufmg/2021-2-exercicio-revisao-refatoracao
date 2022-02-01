
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{
        
    private:
    double VALOR;
    std::string descricao;
    std::string cliente;
    Especialista esp;
    
     public:
    double getVALOR();
    std::string getDescricao();
    std::string getCliente();
    
    void print() {
        void setVALOR(double novoVALOR);
		void setDescricao(std::string novaDescricao);
		void setCliente(std::string novoCliente);
		void setEspecialista(Especialista especialista);
};
    
#endif
