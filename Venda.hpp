#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{
    public:
        double valor;
        string descricao;
        Especialista esp;
        string cliente;

        void print(){
            cout << "Especialista: " << esp.nome << endl;
            cout << " Cliente: " << cliente << endl;
        }
};

#endif

/**
----Alterações:----
1.Remoção de código comentado, desnecessário ao programa
2.Identação melhor das linhas do código
3.Remoção de "std" desnecessário
4.Inserção de "endl" ao final do comando de impressão para a quebra de linha
5.Padronização(ou formatação) dos nomes das variáveis
**/
