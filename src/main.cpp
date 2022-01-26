#include <iostream>

#include "Cliente.hpp"
#include "Especialista.hpp"
// #include "Funcionario.hpp"
#include "Gerente.hpp"
#include "Venda.hpp"
using namespace std;

int main() {
    Cliente cliente1;
    cliente1.setNome("J. Jonah Jameson");
    cliente1.setEndereco("Nova York");
    cliente1.setCep("35690000");
    cliente1.print();

    Cliente cliente2;
    cliente2.setNome("Norman Osborn");
    cliente2.setEndereco("Hartlford");
    cliente2.setCep("22061955");
    cliente2.print();

    Cliente cliente3;
    cliente3.setNome("Otto Octavius");
    cliente3.setEndereco("Schenectady");
    cliente3.setCep("24051953");
    cliente3.print();

    Cliente cliente4;
    cliente4.setNome("Bruce Benner");
    cliente4.setEndereco("Dayton");
    cliente4.setCep("22111967");
    cliente4.print();

    Cliente cliente5;
    cliente5.setNome("Steve Rogers");
    cliente5.setEndereco("Lower East Side");
    cliente5.setCep("13061981");
    cliente5.print();

    Especialista especialista1;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    especialista1.setNome("Peter Parker");
    especialista1.setIdade("46");
    especialista1.setRgFunc(27061975);
    especialista1.setSalarioBase(3000);
    especialista1.setEspecialidade("Fotografia");

    Especialista especialista2;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    especialista2.setNome("Tony Stark");
    especialista2.setIdade("56");
    especialista2.setRgFunc(4041965);
    especialista2.setSalarioBase(1000);
    especialista2.setEspecialidade("Consertos de equipamentos eletronicos");

    Especialista especialista3;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    especialista3.setNome("Wanda Maximoff");
    especialista3.setIdade("32");
    especialista3.setRgFunc(16021989);
    especialista3.setSalarioBase(5000);
    especialista3.setEspecialidade("Engenharia e Designeeeeer");

    Gerente gerente1;
    gerente1.setNome("Nick Fury");
    gerente1.setIdade("72");
    gerente1.setRgFunc(21121948);
    gerente1.setSalarioBase(10000);

    Venda venda1;
    venda1.setCliente("J. Jonah Jameson");
    venda1.setEspecialista(especialista1);
    venda1.setDescricao("Fotos do Homem Aranha");
    venda1.setValor(100);
    comissao01 += especialista1.comissao(venda1.getValor());
    numAtendimentos01 += 1;

    Venda venda2;
    venda2.setCliente("Bruce Benner");
    venda2.setEspecialista(especialista2);
    venda2.setDescricao("Troca da tela do telefone");
    venda2.setValor(100);
    comissao02 += especialista1.comissao(venda2.getValor());
    numAtendimentos02 += 1;

    Venda venda3;
    venda3.setCliente("Norman Osborn");
    venda3.setEspecialista(especialista1);
    venda3.setDescricao("Fotos do novo planador");
    venda3.setValor(150);
    comissao01 += especialista1.comissao(venda3.getValor());
    numAtendimentos01 += 1;

    Venda venda4;
    venda4.setCliente("J. Jonah Jameson");
    venda4.setEspecialista(especialista2);
    venda4.setDescricao("Recarga de cartucho");
    venda4.setValor(10);
    comissao02 += especialista2.comissao(venda4.getValor());
    numAtendimentos02 += 1;

    Venda venda5;
    venda5.setCliente("Bruce Benner");
    venda5.setEspecialista(especialista3);
    venda5.setDescricao("Reconstrucao de Predio");
    venda5.setValor(10000);
    comissao03 += especialista3.comissao(venda5.getValor());
    numAtendimentos03 += 1;

    Venda venda6;
    venda6.setCliente("Steve Rogers");
    venda6.setEspecialista(especialista3);
    venda6.setDescricao("Decoracao de Apartamento no Brooklyn");
    venda6.setValor(3000);
    comissao03 += especialista3.comissao(venda6.getValor());
    numAtendimentos03 += 1;

    Venda venda7;
    venda7.setCliente("J. Jonah Jameson");
    venda7.setEspecialista(especialista3);
    venda7.setDescricao("Reforma do Clarim Diario");
    venda7.setValor(5000);
    comissao03 += especialista3.comissao(venda7.getValor());
    numAtendimentos03 += 1;

    Venda venda8;
    venda8.setCliente("Otto Octavius");
    venda8.setEspecialista(especialista2);
    venda8.setDescricao("Formatacao do PC");
    venda8.setValor(80);
    comissao02 += especialista2.comissao(venda7.getValor());
    numAtendimentos02 += 1;

    cout << " \n \n           Relatorio das Vendas \n"
         << endl;

    venda1.print();
    cout << " Descricao: " << venda1.getDescricao() << endl;

    venda2.print();
    cout << " Descricao: " << venda2.getDescricao() << endl;

    venda3.print();
    cout << " Descricao: " << venda3.getDescricao() << endl;

    venda4.print();
    cout << " Descricao: " << venda4.getDescricao() << endl;

    venda5.print();
    cout << " Descricao: " << venda5.getDescricao() << endl;

    venda6.print();
    cout << " Descricao: " << venda6.getDescricao() << endl;

    venda6.print();
    cout << " Descricao: " << venda6.getDescricao() << endl;

    venda7.print();
    cout << " Descricao: " << venda7.getDescricao() << endl;

    venda8.print();
    cout << " Descricao: " << venda8.getDescricao() << endl;

    cout << " \n \n           Relatorio dos Funcionarios \n"
         << endl;
    especialista1.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << especialista1.getSalarioBase() + comissao01 << endl;

    especialista2.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << especialista2.getSalarioBase() + comissao02 << endl;

    especialista3.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << especialista3.getSalarioBase() + comissao03 << endl;

    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    gerente1.setBonificacao(gerente1.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos));
    gerente1.print();
    cout << "Salario Total: " << gerente1.getSalarioBase() + gerente1.getBonificacao() << endl;

    return 0;
}
