#include <iostream>
#include <vector>

#include "Venda.hpp"
#include "Gerente.hpp"

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
    especialista1.setNome("Peter Parker");
    especialista1.setIdade("46");
    especialista1.setRgFunc(27061975);
    especialista1.setSalarioBase(3000);
    especialista1.setEspecialidade("Fotografia");

    Especialista especialista2;
    especialista2.setNome("Tony Stark");
    especialista2.setIdade("56");
    especialista2.setRgFunc(4041965);
    especialista2.setSalarioBase(1000);
    especialista2.setEspecialidade("Consertos de equipamentos eletronicos");

    Especialista especialista3;
    especialista3.setNome("Wanda Maximoff");
    especialista3.setIdade("32");
    especialista3.setRgFunc(16021989);
    especialista3.setSalarioBase(5000);
    especialista3.setEspecialidade("Engenharia e Designeeeeer");

    std::vector<Especialista*> especialistas;
    especialistas.push_back(&especialista1);
    especialistas.push_back(&especialista2);
    especialistas.push_back(&especialista3);

    Gerente gerente1;
    gerente1.setNome("Nick Fury");
    gerente1.setIdade("72");
    gerente1.setRgFunc(21121948);
    gerente1.setSalarioBase(10000);


    Venda venda1;
    venda1.setCliente(&cliente1);
    venda1.setEspecialista(&especialista1);
    venda1.setDescricao("Fotos do Homem Aranha");
    venda1.setValor(100);
    venda1.getEspecialista()->setComissao(venda1.getValor());
    venda1.getEspecialista()->setNumeroAtendimentos();

    Venda venda2;
    venda2.setCliente(&cliente4);
    venda2.setEspecialista(&especialista2);
    venda2.setDescricao("Troca da tela do telefone");
    venda2.setValor(100);
    venda2.getEspecialista()->setComissao(venda2.getValor());
    venda2.getEspecialista()->setNumeroAtendimentos();

    Venda venda3;
    venda3.setCliente(&cliente2);
    venda3.setEspecialista(&especialista1);
    venda3.setDescricao("Fotos do novo planador");
    venda3.setValor(150);
    venda3.getEspecialista()->setComissao(venda3.getValor());
    venda3.getEspecialista()->setNumeroAtendimentos();

    Venda venda4;
    venda4.setCliente(&cliente1);
    venda4.setEspecialista(&especialista2);
    venda4.setDescricao("Recarga de cartucho");
    venda4.setValor(10);
    venda4.getEspecialista()->setComissao(venda4.getValor());
    venda4.getEspecialista()->setNumeroAtendimentos();

    Venda venda5;
    venda5.setCliente(&cliente4);
    venda5.setEspecialista(&especialista3);
    venda5.setDescricao("Reconstrucao de Predio");
    venda5.setValor(10000);
    venda5.getEspecialista()->setComissao(venda5.getValor());
    venda5.getEspecialista()->setNumeroAtendimentos();

    Venda venda6;
    venda6.setCliente(&cliente5);
    venda6.setEspecialista(&especialista3);
    venda6.setDescricao("Decoracao de Apartamento no Brooklyn");
    venda6.setValor(3000);
    venda6.getEspecialista()->setComissao(venda6.getValor());
    venda5.getEspecialista()->setNumeroAtendimentos();

    Venda venda7;
    venda7.setCliente(&cliente1);
    venda7.setEspecialista(&especialista3);
    venda7.setDescricao("Reforma do Clarim Diario");
    venda7.setValor(5000);
    venda7.getEspecialista()->setComissao(venda7.getValor());
    venda7.getEspecialista()->setNumeroAtendimentos();

    Venda venda8;
    venda8.setCliente(&cliente3);
    venda8.setEspecialista(&especialista2);
    venda8.setDescricao("Formatacao do PC");
    venda8.setValor(80);
    venda8.getEspecialista()->setComissao(venda8.getValor());
    venda8.getEspecialista()->setNumeroAtendimentos();

    std::vector<Venda> vendas;

    vendas.push_back(venda1);
    vendas.push_back(venda2);
    vendas.push_back(venda3);
    vendas.push_back(venda4);
    vendas.push_back(venda5);
    vendas.push_back(venda6);
    vendas.push_back(venda7);
    vendas.push_back(venda8);

    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    for(auto venda = vendas.begin(); venda != vendas.end(); venda++){
        venda->print();
        std::cout << " Descricao: " << venda->getDescricao() << std::endl;
    }

    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;

    for(auto especialista = especialistas.begin(); especialista != especialistas.end(); especialista++){
        (*especialista)->print();
        std::cout << "Num Atendimentos: " << (*especialista)->getNumeroAtendimentos() << std::endl;
        std::cout << "Salario Total: "    << (*especialista)->getSalarioBase()+(*especialista)->getComissao()<<std::endl;
    }

    gerente1.setBonificacao(vendas.size());
    gerente1.print();
    std::cout << "Salario Total: " << gerente1.getSalarioBase() + gerente1.getBonificacao() << std::endl;

    return 0;
}
