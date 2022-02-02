#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{
    public:
        string nome;
        string endereco;
        string cep;
        string altura_dos_pais;

        void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif

/**
----Alterações:----
1.Padronização(ou formatação) dos nomes das variáveis
2.Identação melhor das linhas do código
**/
