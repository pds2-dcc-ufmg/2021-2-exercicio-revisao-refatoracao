#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;
/*
Foi feito um construtor para a classe Funcionario, e inicializado como necessário.
As variáveis de Funcionário foram declaradas como private a fim de respeitar o encapsulamento.
Foram feitos métodos get() para o acesso das variáveis private.
Foi criado um arquivo .cpp para conter a implementação das funções, deixando no .hpp apenas o seu escopo.
Foi mudado o nome da função void print() para evitar ambiguidades ao chamar-la.
Foi retirada a função void print_oi() pois não possuia um uso efetivo no programa, tornando-a desnecessária.
*/
class Funcionario {
    public:

        void printFuncionario();

        int getRg() const;
        string getIdade() const;
        string getNome() const;
        double getSalario() const;

        Funcionario (string idade, int rg, string Nome, double salario):IDADE(idade),
                                                                        rgFunc(rg),
                                                                        nome(Nome),
                                                                        SalarioBase(salario){};

    private:
        string IDADE;
        int rgFunc;
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string nome;

};

#endif
