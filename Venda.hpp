#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda {

    public:
        void print() {
            cout << "Especialista: ";
            cout << especialista.getNome();
            cout << " Cliente: ";
            cout << cliente.getNome();
            cout << " Descricao: " << descricao << endl;
        }

        double getValorTotal(){
            return this->valorTotal;
        }

        string getDescricao() {
            return this->descricao;
        }

        Especialista getEspecialista() {
            return this->especialista;
        }

        Cliente getCliente() {
            return this->cliente;
        }
        
        void setValorTotal(double valorTotal){
            this->valorTotal = valorTotal;
        }

        void setDescricao(string descricao){
            this->descricao = descricao;
        }

        void setEspecialista(Especialista especialista){
            this->especialista = especialista;
        }

        void setCliente(Cliente cliente){
            this->cliente = cliente;
        }

    private:
        double valorTotal;
        string descricao;
        Especialista especialista;
        Cliente cliente;
};

#endif
