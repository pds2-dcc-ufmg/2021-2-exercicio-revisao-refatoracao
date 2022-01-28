#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <iomanip>
#include <string>


class Funcionario {
    public:
        /**
         * @brief Atualiza o salário base
         *
         * @param salario_base Novo salário base
         */
        void setSalarioBase(const double& salario_base);

		/**
         * @brief Atualiza a idade
         *
         * @param idade nova idade
         */
        void setIDADE(const std::string& idade);


		/**
         * @brief Atualiza o nome
         *
         * @param nome Novo nome do funcionario
         */
        void setNome(const std::string& nome);


		/**
         * @brief Atualiza o rg_Func
         *
         * @param rg_Func Novo rg_Func do funcionario
         */
        void setRgFunc(const int& rg_Func);				


		/**
         * @brief Retorna o SalarioBase
         *
         * @return double _SalarioBase
         */
		double getSalarioBase() const;


		/**
         * @brief Retorna a idade do funcionario
         *
         * @return std::string _IDADE
         */
		std::string getIdade() const;

		/**
         * @brief Retorna o nome do funcionário
         *
         * @return std::string _nome
         */
		std::string getNome() const;


		/**
         * @brief Retorna o _rgFunc
         *
         * @return int _rgFunc
         */
		int getRgFunc() const;

        virtual void print();

        void print_oi();

    private:
        double _SalarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string _IDADE;
        std::string _nome;
        int _rgFunc;
};

#endif
