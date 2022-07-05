
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{
    public:
    Venda(double Valor,
          string Descricao,
          Especialista Esp,
          Cliente Cliente) :
          valor_(Valor),
          descricao_(Descricao),
          esp_(Esp),
          cliente_(Cliente) {};
    

    void print() {
        std::cout << "Especialista: ";
        cout << esp_.getNome();
        std::cout << " Cliente: ";
        cout << cliente_.getNome();
    }
    //Getters
    double getValor() { return valor_;};
    string getDescricao() { return descricao_;};
    private:
    double valor_;
    string descricao_;
    Especialista esp_;
    Cliente cliente_;
};

#endif
