#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"







class Especialista : public Funcionario {
    public:
        
        
        Especialista(std::string nome = "", int idade = 0, std::string RG = "", int salario = 0, std::string especialidade = "");

        void executarVenda(double valorVenda); //muda o atributo _comissao com base no valor da venda e aumenta em 1 o núemero de atendimentos

        void imprimirDados() const override; 

        int getNumAtendimentos() const;
        
    private:
        std::string _especialidade;
        int _numAtendimentos;
        double _comissao;
        
        
        
        
};

#endif
