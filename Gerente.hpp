// Retirei comentarios desnecessarios e o namespace std, nesse caso desnecessario por serem poucas utilizacoes
// Arrumei os nomes das variaveis do tipo string presentes para que fiquem de acordo com as boas praticas
// Fiz algumas alteracoes na impressao, para que o codigo fique mais organizado e facilite o encontro de erros
// Organizacao da identacao da classe

#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>


double valor_bonificacao = 15.0;

class Gerente {

    public:
        double salario_minimo;
        std::string idade;
        std::string nome;
        int rg_funcionario;
        double bonificacao;


        void print() {
            std::cout << "[Funcionario]" << std::endl;
            std::cout << "[Gerente]" << std::endl;
            std::cout << "  Nome: " << nome << std::endl;
            std::cout << "  Idade: " << idade << std::endl;
            std::cout << "  RGFunc: " << rg_funcionario << std::endl;
            std::cout << "  SalarioBase: R$ " << fixed << setprecision(2) << salario_minimo << std::endl;
        }

        double calcula_bonif_gerente(int num_total_vendas){
            double x;
            return num_total_vendas*valor_bonificacao;
        }

};

#endif

