#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

class Funcionario {

    public:
        Funcionario(std::string nome, std::string IDADE, int rgFunc, double SalarioBase);
        virtual std::string getNome() const;
        virtual double calcula_SALARIO_TOTAL() const = 0;
        virtual void print() const;
    
    protected:
        double SalarioBase; // Valor mínimo recebido pelo funcionário.
        std::string IDADE;
        std::string nome;
        int rgFunc;
};

#endif