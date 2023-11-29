#include <fstream>
#include <iostream>
#include <vector>

#include "Gerente.hpp"
#include "Venda.hpp"

using namespace std;

template <class T> void read_input(vector<T *> &datas, string nameFile) {
  fstream file(nameFile);

  T data;

  while (file >> data) {
    datas.push_back(new T(data));

    file.ignore();
  }
}

// Como abstrair dentro de read_input ???
void vendasInit(vector<Venda *> &vendas, vector<Especialista *> &especialistas,
                string str) {
  std::fstream file(str);

  string nomeCliente;
  unsigned numEspecialista; // Conta a posicao do vetor dentro de especialista
  string descricao;
  double valor;

  while (std::getline(file, nomeCliente)) {
    file >> numEspecialista;
    file.ignore();
    std::getline(file, descricao);
    file >> valor;
    file.ignore();
    file.ignore();

    vendas.push_back(new Venda(nomeCliente, especialistas.at(numEspecialista),
                               descricao, valor));
  }
}

template <class T> void print_output(vector<T *> &datas, string message) {
  cout << message << endl;

  for (T *data : datas) {
    data->print();
  }
}

// Como abstrair dentro de print_output ???
void printGerente(vector<Gerente *> gerentes,
                  vector<Especialista *> &especialistas) {
  int numTotalServicos = 0;

  for (Especialista *especialista : especialistas) {
    numTotalServicos += especialista->getNumAtendimentos();
  }

  for (Gerente *gerente : gerentes) {
    gerente->calculaNovaBonificacao(numTotalServicos);

    gerente->print();
  }
}

template <class T> void destroyer_data(vector<T *> datas) {
  for (T *data : datas) {
    delete data;
  }
}

int main() {
  vector<Cliente *> clientes;
  vector<Especialista *> especialistas;
  vector<Gerente *> gerentes;
  vector<Venda *> vendas;

  // Lendo os dados
  read_input(clientes, "tests\\testClientes");
  read_input(especialistas, "tests\\testEspecialistas");
  read_input(gerentes, "tests\\testGerente");

  vendasInit(vendas, especialistas, "tests\\testVendas");

  // Imprimindo os dados
  print_output(clientes, "");
  print_output(vendas, " \n \n           Relatorio das Vendas \n");
  print_output(especialistas, " \n \n           Relatorio dos Funcionarios \n");

  printGerente(gerentes, especialistas);

  // delete nos ponteiros dos vectors
  destroyer_data(clientes);
  destroyer_data(especialistas);
  destroyer_data(gerentes);
  destroyer_data(vendas);
  
  return 0;
}
