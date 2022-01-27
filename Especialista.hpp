#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"


class Especialista : public Funcionario {

    private:

      double perc = 0.1;

    public:

	std::string especialidade;

	void set_perc(double new_perc) { this->perc = new_perc; }

	double get_perc() { return this->perc; }

        double comissao(double ValorVenda) {
            double c = ValorVenda*perc;
                return c;
        }

        void print() {
            std::cout << "[Especialista]" << std::endl
	    << " Especialidade: " << especialidade <<std::endl;
            Funcionario::print();
            std::cout << "  Nome: " << Nome << std::endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << std::endl;
        }
};

#endif
