
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
    std::string getDescricao() const;

    void setGerente(Gerente * _Gerente);

    void Print() const;
};

#endif
