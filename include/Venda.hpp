
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"


class Venda : public Cliente{

    private:
 
        double _valor;
        std::string _descricao;
        Especialista *_especialista;


    public:

        /**
		 * @brief Construtor padrao que inicializa todas as variaveis privadas da classe.
		 */
        Venda(std::string nome, std::string descricao, double valor, Especialista *especialista);
        
        //Métodos Getters para acessar os atributos privados da classe.
        double getValor();
        std::string getDescricao();
        Especialista getEspecialista();
        
        /**
		 * @brief Imprime os dados referentes a uma venda cadastrada.
		 */
        void print();
        

};

#endif
