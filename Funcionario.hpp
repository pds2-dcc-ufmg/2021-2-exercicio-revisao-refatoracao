#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

class Funcionario {
    
    public:
        virtual void print() = 0;

        void setNome(std::string nome);
        void setIdade(std::string idade);
        void setRgFunc(int rgFunc);
        void setSalarioBase(double salarioBase);

        std::string getNome();
        std::string getIdade();
        int getRgFunc();
        double getSalarioBase();
        
    protected:    
        std::string nome;
        std::string idade;
        int rgFunc;
        double salarioBase;
};

#endif
