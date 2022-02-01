
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:

        void print() {

            std::cout << "Especialista: ";
            cout << this->getEspecialista().getNome();

            std::cout << " Cliente: ";
            cout << this->getCliente();

        }

        void addVenda(double Valor,
                    string Descricao,
                    Especialista Especialista,
                    string Cliente){
            this->setValor(Valor);
            this->setDescricao(Descricao);
            this->setEspecialista(Especialista);
            this->setCliente(Cliente);
        }

        double getValor(){
	        return this->_Valor;
        }   

        string getDescricao(){
	        return this->_Descricao;
        }

        Especialista getEspecialista(){
	        return this->_Especialista;
        }
        string getCliente(){
	        return this->_Cliente;
        }

        void setValor(double Valor){
	        this->_Valor = Valor;
        }   

        void setDescricao(string Descricao){
	        this->_Descricao = Descricao;
        }

        void setEspecialista(Especialista Especialista){
	        this->_Especialista = Especialista;
        }
        void setCliente(string Cliente){
	        this->_Cliente = Cliente;
        }


    protected:
        double _Valor;
        string _Descricao;
        Especialista _Especialista;
        string _Cliente;

    
};

#endif
