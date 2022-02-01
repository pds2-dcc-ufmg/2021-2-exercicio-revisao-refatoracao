#include "Venda.hpp"

//inicializando a variável static
int Venda::num_vendas = 0;

//alterar o print de venda para que não seja necessário fazer mais coisas na main
Venda::Venda(Cliente& cliente, Especialista& especialista, const string& descricao, double valor) : _cliente(cliente), _especialista(especialista), _descricao(descricao), _valor(valor) {
    ++Venda::num_vendas; //conta a quantidade de vendas 
    especialista.addNumAtendimentos();
    especialista.calculaComissao(valor);
}

// void Venda::setVenda(Cliente& cliente, Especialista& especialista, const string& descricao, double valor) {
//     this->_cliente = cliente;
//     this->_especialista = especialista;
//     this->_descricao = descricao;
//     this->_valor = valor;
// }

void Venda::print() {
        cout << "Especialista: " << this->_especialista.getNome()
        << " Cliente: " << this->_cliente.getNome()
        << " Descricao: " << this->_descricao << endl;
}

string Venda::getDescricao() {
    return this->_descricao;
}

double Venda::getValor() {
    return this->_valor;
}

int Venda::getNumVendas() {
    return this->num_vendas;
}