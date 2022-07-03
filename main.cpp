#include <iostream>

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "Venda.hpp"

using namespace std;

int main() {
  Cliente clientespecialista01;
  clientespecialista01.nome = "J. Jonah Jameson";
  clientespecialista01.endereco = "Nova York";
  clientespecialista01.cep = "35690000";
  clientespecialista01.print();

  Cliente clientespecialista02;
  clientespecialista02.nome = "Norman Osborn";
  clientespecialista02.endereco = "Hartlford";
  clientespecialista02.cep = "22061955";
  clientespecialista02.print();

  Cliente clientespecialista03;
  clientespecialista03.nome = "Otto Octavius";
  clientespecialista03.endereco = "Schenectady";
  clientespecialista03.cep = "24051953";
  clientespecialista03.print();

  Cliente clientespecialista04;
  clientespecialista04.nome = "Bruce Benner";
  clientespecialista04.endereco = "Dayton";
  clientespecialista04.cep = "22111967";
  clientespecialista04.print();

  Cliente clientespecialista05;
  clientespecialista05.nome = "Steve Rogers";
  clientespecialista05.endereco = "Lower East Side";
  clientespecialista05.cep = "13061981";
  clientespecialista05.print();

  Especialista especialista01;
  int numAtendimentos01 = 0;
  double comissao01 = 0;
  especialista01.nome = "Peter Parker";
  especialista01.idade = "46";
  especialista01.rgFunc = 27061975;
  especialista01.salarioBase = 3000;
  especialista01.especialidade = "Fotografia";

  Especialista especialista02;
  int numAtendimentos02 = 0;
  double comissao02 = 0;
  especialista02.nome = "Tony Stark";
  especialista02.idade = "56";
  especialista02.rgFunc = 4041965;
  especialista02.salarioBase = 1000;
  especialista02.especialidade = "Consertos de equipamentos eletronicos";

  Especialista especialista03;
  int numAtendimentos03 = 0;
  double comissao03 = 0;
  especialista03.nome = "Wanda Maximoff";
  especialista03.idade = "32";
  especialista03.rgFunc = 16021989;
  especialista03.salarioBase = 5000;
  especialista03.especialidade = "Engenharia e Designeeeeer";

  Gerente g01;
  g01.nome = "Nick Fury";
  g01.idade = "72";
  g01.rgFunc = 21121948;
  g01.salarioBase = 10000;

  Venda venda01;
  venda01.cliente = "J. Jonah Jameson";
  venda01.esp = especialista01;
  venda01.descricao = "Fotos do Homem Aranha";
  venda01.VALOR = 100;
  comissao01 += especialista01.comissao(venda01.VALOR);
  numAtendimentos01 += 1;

  Venda venda02;
  venda02.cliente = "Bruce Benner";
  venda02.esp = especialista02;
  venda02.descricao = "Troca da tela do telefone";
  venda02.VALOR = 100;
  comissao02 += especialista02.comissao(venda02.VALOR);
  numAtendimentos02 += 1;

  Venda venda03;
  venda03.cliente = "Norman Osborn";
  venda03.esp = especialista01;
  venda03.descricao = "Fotos do novo planador";
  venda03.VALOR = 150;
  comissao01 += especialista01.comissao(venda03.VALOR);
  numAtendimentos01 += 1;

  Venda venda04;
  venda04.cliente = "J. Jonah Jameson";
  venda04.esp = especialista02;
  venda04.descricao = "Recarga de cartucho";
  venda04.VALOR = 10;
  comissao02 += especialista02.comissao(venda04.VALOR);
  numAtendimentos02 += 1;

  Venda venda05;
  venda05.cliente = "Bruce Benner";
  venda05.esp = especialista03;
  venda05.descricao = "Reconstrucao de Predio";
  venda05.VALOR = 10000;
  comissao03 += especialista03.comissao(venda05.VALOR);
  numAtendimentos03 += 1;

  Venda venda06;
  venda06.cliente = "Steve Rogers";
  venda06.esp = especialista03;
  venda06.descricao = "Decoracao de Apartamento no Brooklyn";
  venda06.VALOR = 3000;
  comissao03 += especialista03.comissao(venda06.VALOR);
  numAtendimentos03 += 1;

  venda06.descricao = "Decoracao de Apartamento no Brooklyn";
  venda06.VALOR = 3000;

  Venda venda07;
  venda07.cliente = "J. Jonah Jameson";
  venda07.esp = especialista03;
  venda07.descricao = "Reforma do Clarim Diario";
  venda07.VALOR = 5000;
  comissao03 += especialista03.comissao(venda07.VALOR);
  numAtendimentos03 += 1;

  Venda venda08;
  venda08.cliente = "Otto Octavius";
  venda08.esp = especialista02;
  venda08.descricao = "Formatacao do PC";
  venda08.VALOR = 80;
  comissao02 += especialista02.comissao(venda08.VALOR);
  numAtendimentos02 += 1;

  cout << " \n \n           Relatorio das Vendas \n" << endl;

  venda01.print();
  cout << " Descricao: " << venda01.descricao << endl;

  venda02.print();
  cout << " Descricao: " << venda02.descricao << endl;

  venda03.print();
  cout << " Descricao: " << venda03.descricao << endl;

  venda04.print();
  cout << " Descricao: " << venda04.descricao << endl;

  venda05.print();
  cout << " Descricao: " << venda05.descricao << endl;

  venda06.print();
  cout << " Descricao: " << venda06.descricao << endl;

  venda06.print();
  cout << " Descricao: " << venda06.descricao << endl;

  venda07.print();
  cout << " Descricao: " << venda07.descricao << endl;

  venda08.print();
  cout << " Descricao: " << venda08.descricao << endl;

  cout << " \n \n           Relatorio dos Funcionarios \n" << endl;
  especialista01.print();
  cout << "Num Atendimentos: " << numAtendimentos01 << endl;
  cout << "Salario Total: " << especialista01.salarioBase + comissao01 << endl;

  especialista02.print();
  cout << "Num Atendimentos: " << numAtendimentos02 << endl;
  cout << "Salario Total: " << especialista02.salarioBase + comissao02 << endl;

  especialista03.print();
  cout << "Num Atendimentos: " << numAtendimentos03 << endl;
  cout << "Salario Total: " << especialista03.salarioBase + comissao03 << endl;

  int numTotalServicos = 0;
  numTotalServicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
  g01.bonificacao = g01.calcula_bonificacao_gerente(numTotalServicos);
  g01.print();
  cout << "Salario Total: " << g01.salarioBase + g01.bonificacao << endl;

  return 0;
}
