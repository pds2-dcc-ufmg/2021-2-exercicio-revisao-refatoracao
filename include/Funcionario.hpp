#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP


class Funcionario {

    public:

        double getSalarioBase() {
            return this->salarioBase;
        }

    protected:

        double salarioBase;
        std::string idade;
        std::string nome;
        int rgFunc;

};

#endif
