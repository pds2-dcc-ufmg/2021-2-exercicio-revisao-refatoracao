
#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
/**
 * \class Funcionario
 *
 * \brief Esta classe eh um Colaborador de uma empresa.
 *
 * \details  Um Funcionário possui ...
*/

class Funcionario {
    private: 
    // valor minimo recebido pelo funcionario
        double SalarioBase; 
        std::string Idade;
        std::string Nome;
        int RgFuncionario;
        double SalarioTotal;

    public:

     /**
     * @brief Destrutor da classe
     *
     */
        virtual ~Funcionario(){};

        /**
        * @brief Retorna o Salario final, somado às comissões
        *
        * @return double Salario final do funcionario
        */
        double getSalarioTotal() const;

        /**
        * @brief Retorna o Salario base, inicial
        *
        * @return double Salario inicial do funcionario
        */
        double getSalarioBase() const ;

        /**
        * @brief ajusta o salario do funcionario
        * 
        * @param ValorAdicionado valor a ser acrescido no salario inicial
        */
        void setSalarioTotal(double ValorAdicionado);

        /**
        * @brief Retorna a idade do funcionario
        *
        * @return std::string Idade do funcionario
        */
        std::string getIdade() const;

        /**
        * @brief Retorna o Nome do funcionario
        *
        * @return std::string Nome do funcionario
        */
        std::string getNome() const;

        /**
        * @brief Retorna o Rg do funcionario
        *
        * @return int Rg do funcionario
        */
        int getRgFuncionario() const;

        
        /**
         * @brief Construtor padrao que inicializa todas as variaveis da classe.
         *
         * @param Salario Salario em reais.
         * @param Idade Idade do Funcionario envolvido.
         * @param Nome Nome do Funcionario envolvido.
         * @param RgFuncionario O rg do Funcionario envolvido.
         */
        Funcionario(double Salario, std::string Idade,
         std::string Nome, int RgFuncionario);

        /**
		 * @brief  Imprime na tela os dados de um Funcionario cadastrado
		 *
		 */
        virtual void Print() const;
};

#endif