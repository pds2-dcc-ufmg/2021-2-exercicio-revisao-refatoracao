#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

class Funcionario {
    public:

        Funcionario(std::string nome, std::string idade, int rgFunc, double SalarioBase): nome(nome), idade(idade), rgFunc(rgFunc), SalarioBase(SalarioBase) {}
        virtual void print() const = 0; // imprime na tela os dados de um funcion�rio cadastrado
        virtual ~Funcionario() = default;
        std::string GetNome() const { return nome; }
    
    protected:
    
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string idade;
        std::string nome;
        int rgFunc;

};

#endif