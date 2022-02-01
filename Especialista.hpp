#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
// #include "Cliente.hpp"

static constexpr double PERCENTUAL_COMISSAO = 0.1;


class Especialista : public Funcionario {
    private:
        std::string Especialidade;
        int NumAtendimentos;
        double Comissao;

    public:

     /**
     * @brief Destrutor da classe
     *
     */
    ~Especialista();

    /**
     * @brief Construtor padrao que inicializa todas as variaveis da classe.
     *
     * @param Salario Salario em reais.
     * @param Idade Idade do Especialista envolvido.
     * @param Nome Nome do Especialista envolvido.
     * @param RgFuncionario O rg do Especialista envolvido.
     * @param Especialidade A especialidade do Especialista.
     * @param NumAtendimentos O numero de atendimentos realizados.
     * @param Comissao A Comissao recebida pelas vendas.
     */
    Especialista(double Salario, std::string Idade,
         std::string Nome, int RgFuncionario, std::string Especialidade, int NumAtendimentos, double Comissao);

    /**
    * @brief Retorna a Comissao do especialista
    *
    * @return double Comissao do especialista
    */
    double getComissao(double ValorVenda);

    /**
    * @brief Retorna o Numero de atendimentos do especialista
    *
    * @return int Numero de atendimentos do especialista
    */    
    int getNumAtendimentos() const;

    /**
     * @brief  Imprime na tela os dados de um Especialista cadastrado
     *
     */
    void Print() const override;
};

#endif
