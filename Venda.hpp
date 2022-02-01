
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;
/*
Foi feito um construtor para a classe Venda, e inicializado como necessário.
As variáveis de Venda foram declaradas como private a fim de respeitar o encapsulamento.
Foram feitos métodos get() para o acesso das variáveis private.
Foi criado um arquivo .cpp para conter a implementação das funções, deixando no .hpp apenas o seu escopo.
Foi mudado o nome da função void print() para evitar ambiguidades ao chamar-la.
*/
class Venda{

    public:

    Venda(double valor, string descricao_, Especialista esp_num, string cliente_) : VALOR(valor),
                                                                                    descricao(descricao_),
                                                                                    esp(esp_num),
                                                                                    cliente(cliente_){};

    void printVenda();

    double getValor() const;
    string getDescricao() const;
    string getCliente() const;
    Especialista getEsp() const;

    private:
    double VALOR;
    string descricao;
    Especialista esp;
    string cliente;
};

#endif
