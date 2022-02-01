#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario{

    private:

        std::string _especialidade;

    public:

        /**
		 * @brief Construtor padrao que inicializa todos os atributos privados da classe.
		 */
        Especialista(std::string especialidade = "",
                const std::string nome = "",
                std::string idade = "",
                double SalarioBase = 0,
                int RegistroFuncional = 0,
                int NumeroDeAtendimentos = 0,
                double Comissao = 0);

        double comissao(double ValorVenda);
        std::string getEspecialidade();

        /**
		 * @brief Imprime na tela os dados de um Especialista cadastrado. 
		 */
        void print();
};

#endif