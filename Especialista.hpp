#ifndef Especialista_H
#define Especialista_H

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include <string>





class Especialista : public Funcionario {
    private:
        string _especialidade;
        double perc = 0.1;
        double percWanda = 0.1;
    public:
        double comissao(double ValorVenda) {
            double c = ValorVenda*perc;
                    return c;
        }


        /**
         * @brief Atualiza a especialidade
         *
         * @param especialidade atualiza a definição da especialidade
         */
        void setEspecialidade(const std::string& especialidade);

		/**
         * @brief Retorna a especialdiade
         *
         * @return std::string _endereco
         */
		std::string getEspecialidade() const;


        void print() override;

};

#endif
