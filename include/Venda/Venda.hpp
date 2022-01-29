
#ifndef VENDA_HPP
#define VENDA_HPP

#include ".././Pessoas/Funcionario.hpp"
#include ".././Pessoas/Cliente.hpp"
#include ".././Pessoas/Especialista.hpp"

using namespace std;

class Venda{

    private:
        double _VALOR;
        string _descricao;
        Especialista _esp;
        string _cliente;

    public:
        Venda(double valor,string descricao, Especialista esp,string cliente){
            _VALOR = valor;
            _descricao = descricao;
            _esp = esp;
            _cliente = cliente;
        }
        double getValor(){
            return _VALOR;
        }
        void setValor(double novoValor){
            _VALOR = novoValor;
        }
        void setDescricao(string novaDescricao){
            _descricao = novaDescricao;
        }
        void print() {

            std::cout << "Especialista: ";
            cout << _esp.getNome();

            std::cout << " Cliente: ";
            cout << _cliente;

            std::cout << " Descricao: " << _descricao << endl;
        }

};

#endif
