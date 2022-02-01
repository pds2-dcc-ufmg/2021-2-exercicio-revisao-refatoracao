// Retirei comentarios descenessarios e o namespace std, nesse caso descenessario por serem poucas utilizacoes
// Arrumei os nomes das variaveis do tipo string presentes para que fiquem de acordo com as boas praticas
// Retirei um pedaco de código provavelmente adicionado para realizar testes
// Alterei a saida dos dados, para que o codigo fique mais organizado e facilite o encontro de erros
// Organizacao da identacao da classe

#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"


class Venda{

    public:
        double valor;
        std::string descricao;
        Especialista esp_responsavel;
        std::string cliente;


    void print() {

        std::cout << "Especialista: " << esp_responsavel.nome;
        std::cout << " Cliente: " << cliente;

    }

};

#endif
