
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:
        /**
        *@brief Imprime as informações fundamentais da venda (funcionario, cliente e descricao)
        */   
        void print();
         /**
        *@brief Define as variaveis da venda
        *@param valor Valor da venda
        *@param descricao Descricao da venda
        *@param especialista Especialista responsável pela venda
        *@param cliente Cliente da venda
        */      
        void setDados(double valor, string descricao, Especialista especialista, Cliente cliente);
        /**
        *@brief Retorna o valor da venda
        */
        double getValor();
        /**
        *@brief Retorna a descrição da venda
        */
        string getDescricao();
        /**
        *@brief Retorna o especialista responsável pela venda
        */
        Especialista getEspecialista();
        /**
        *@brief Retorna o cliente da venda
        */
        Cliente getCliente();

    private:
        /**
        *@brief Valor da venda
        */
        double valor;
        /**
        *@brief Descrição da venda
        */
        string descricao;
        /**
        *@brief Especialista responsável pela venda
        */
        Especialista especialista;
        /**
        *@brief Cliente da venda
        */
        Cliente cliente;
};

#endif
