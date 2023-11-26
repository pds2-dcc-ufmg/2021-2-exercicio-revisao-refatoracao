#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

double perc = 0.1;
double percWanda = 0.1;

class Especialista : public Funcionario {
    public:
        Especialista(double SalarioBase, std::string IDADE, std::string nome, int rgFunc, std::string especialidade):
                    Funcionario(SalarioBase, IDADE, nome, rgFunc), _especialidade(especialidade) {}

        std::string getEspecialidade(){
            return _especialidade;
        }

        double comissao(double valorVenda) {
            double c = valorVenda*perc;
            return c;
        }

        void print() const {

            std::cout << "[Especialista]" << std::endl;
            Funcionario::print();

            std::cout << "  Nome: " << this->getNome() << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->getSalarioBase() << std::endl;

        }
    private:
        std::string _especialidade;
};

#endif
