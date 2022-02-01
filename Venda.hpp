
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"



/**
 * @brief Classe responsavel pelo armazenamento e gerenciamento das informacoes
 * de uma venda.
 *
 */
class Venda{

    private:
    double ValorVenda;
    std::string Descricao;

    public:
    Especialista* _Especialista;
    Cliente* _Cliente;
    Gerente* _Gerente;

   /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   *
   * @param ValorVenda Valor da venda em reais.
   * @param Descricao Tarefa realizada com a venda.
   * @param Especialista Especialista envolvido na Venda.
   * @param Cliente Cliente envolvido na venda.
   */
    Venda(double ValorVenda, std::string Descricao, Especialista* Especialista, Cliente* Cliente); 

      /**
   * @brief Retorna a descricao detalhada do produto
   *
   * @return std::string Descricao do produto
   */   
    std::string getDescricao() const;

    /**
    * @brief  Imprime na tela os dados de uma Venda cadastrada
    *
    */          
    void Print() const;

    /**
     * @brief Destrutor da classe
     *
     */
    ~Venda();
};

#endif
