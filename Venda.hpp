////NOTA DE ALTERAÇÕES
//Classe Venda passa a receber um ponteiro para os clientes ao invés do nome
//Classe Venda passa a receber um ponteiro para os clientes ao invés de uma cópia do elemento
//Variável valor foi alterada para os padrões de nomeclatura
//Criação de método construtor
//Remoção de códigos não utilizados

#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

public:
    //Dados das vendas
    double valor;
    string descricao;
    Especialista* esp;
    Cliente* clientPointer;

    //Inicialização dos atributos da classe
    Venda(Cliente* _cPointer, Especialista* _ePointer,string _descricao, double _valor) {
        this->clientPointer = _cPointer;
        this->esp = _ePointer;
        this->descricao = _descricao;
        this->valor = _valor;
        
        //Atribuição dos valores de comissão e qtd de atendimentos do especialista
        esp->comissaoValor += esp->comissao(this->valor);
        esp->numAtendimentos++;
    }

    //Impressão de infos da venda
    void print() {

        std::cout << "Especialista: ";
        cout << esp->nome;

        std::cout << " Cliente: ";
        cout << clientPointer->nome;

        cout << " Descricao: " << this->descricao << endl;
    }
};

#endif
