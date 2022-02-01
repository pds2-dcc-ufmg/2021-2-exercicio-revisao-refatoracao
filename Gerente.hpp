#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

// Não faz muito sentido utlizar o comentário para apenas uma das variáveis
// Ajuste do valor das variáveis para seguir um mesmo padrão, minúsculo e palavras juntas com underline
// Adicionar cout's para diminuir a interdepêndencia do código


double valor_bonificacao = 15.0;

class Gerente {
    public:
        double salario_base; 
        string idade;
        string nome;
        int rg_func;
        double bonificacao;


        void print() {
            cout << "[Funcionario]" << endl;
            cout << "[Gerente]" << endl;
            cout << "  Nome: " << nome << endl;
            cout << "  Idade: " << idade << endl;
            cout << "  RGFunc: " << rg_func << endl;
            cout << "  SalarioBase: R$ " << fixed << setprecision(2) << salario_base <<endl;
        }

        double calcula_BONIFICACAO_GERENTE(int num_total_vendas){
            double x;
            return num_total_vendas*valor_bonificacao;
        }

};

#endif

