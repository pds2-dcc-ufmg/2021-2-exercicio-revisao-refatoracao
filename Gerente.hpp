#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.hpp"
#include <iostream>
#include <iomanip>



class Gerente : public Funcionario {
    private:
        double _bonificacao;
        double ValorBONIFICACAO = 15.0;

    public:

        /**
         * @brief Atualiza a bonificacao do gerente
         *
         * @param bonificacao nova bonificacao do gerente
         */
        void setBonificacao(const double& bonificacao);	


        /**
         * @brief Retorna a bonificacao do gerente
         *
         * @return double _bonificacao
         */
		double getBonificacao() const;
  
        void print() override; 

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            return numTOTALVendas*ValorBONIFICACAO;
        }

};

#endif

