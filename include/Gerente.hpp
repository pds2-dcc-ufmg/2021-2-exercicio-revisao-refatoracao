#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"


class Gerente : public Funcionario{

    public:

        /**
		 * @brief Construtor padrao que inicializa todas as variaveis privadas da classe.
		 */
        Gerente(std::string nome, std::string idade, double salario, int Registro);
                
        /**
		 * @brief Imprime na tela os dados de um Gerente cadastrado.
		 */
        void print();
        
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif

