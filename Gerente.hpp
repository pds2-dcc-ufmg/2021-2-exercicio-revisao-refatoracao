#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

static constexpr double VALOR_BONIFICACAO = 15.0;

/**
 * @brief Classe responsavel pelo armazenamento e gerenciamento das informacoes
 * de um Gerente.
 *
 */
class Gerente : public Funcionario {

    public:

   /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   *
   * @param Salario Salario em reais.
   * @param Idade Idade do Gerente envolvido.
   * @param Nome Nome do Gerente envolvido.
   * @param RgFuncionario O rg do gerente envolvido.
   */
    Gerente(double Salario, std::string Idade,
        std::string Nome, int RgFuncionario);

    /**
    * @brief Destrutor da classe
    *
    */
    ~Gerente();

    /**
    * @brief  Imprime na tela os dados de um Gerente cadastrado
    *
    */
    void Print() const override;

    double calculaBonificacaoGerente(int NumTotalVendas);

};

#endif

