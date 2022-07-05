#include <iostream>

#include "../include/Animal.hpp"
#include "../include/Herpestidae.hpp"
#include "../include/Ursidae.hpp"
#include "../include/Cuidador.hpp"
#include "../include/Alimentacao.hpp"

int main() {
  Animal Bobby("13", "Ursidae", "Bobby");
  Bobby.print();

  Animal Jorge("1", "Ursidae", "Jorge");
  Jorge.print();

  Animal Bonina("7", "Herpestidae", "Bonina");
  Bonina.print();

  Animal Felicio("3", "Ursidae", "Felício");
  Felicio.print();

  Ursidae Tony("Tony", "9", "Urso Pardo", 10.5);  
  Tony.print();

  Ursidae Wanda("Wanda", "10", "Urso Polar", 7);
  Wanda.print();

  Herpestidae Catita("Catita", "2", "Suricato");
  Catita.print();

  Herpestidae Carolina("Carolina", "2", "Suricato");
  
  Cuidador Ana("Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000", "R$ 3000");
  Cuidador Fernanda("Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995", "R$ 4000");

  Ursidae ursidaeBobby("Bobby", "13");
  Alimentacao alimentacaoBobby(ursidaeBobby, Ana, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", 2);
  ursidaeBobby.calculaPeixesConsumidos(alimentacaoBobby.getPorcao());
    
  Alimentacao alimentacaoCatita(Catita, Fernanda, "Ração especial", "Catita comeu direitinho", 1);
  Catita.kgConsumidosDeRacao(alimentacaoCatita.getPorcao());

  Alimentacao alimentacaoCarolina(Carolina, Fernanda, "Ração", "Carolina estava com um apetite e tanto", 3);
  Carolina.kgConsumidosDeRacao(alimentacaoCarolina.getPorcao());

  Alimentacao alimentacaoTony(Tony, Ana, "Peixes", "Tony comeu um pouco da comida do Bobby", 10);

  alimentacaoCatita.setPorcao(2);
  alimentacaoCarolina.setComida("Ração");

  Tony.calculaPeixesConsumidos(alimentacaoTony.getPorcao());

  std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

  alimentacaoBobby.print();
  std::cout << " Descricao: " << alimentacaoBobby.getDescricao() << std::endl << std::endl;

  alimentacaoCatita.print();
  std::cout << " Descricao: " << alimentacaoCatita.getDescricao() << std::endl << std::endl;

  alimentacaoCarolina.print();
  std::cout << " Descricao: " << alimentacaoCarolina.getDescricao() << std::endl << std::endl;

  alimentacaoTony.print();
  std::cout << " Descricao: " << alimentacaoTony.getDescricao() << std::endl << std::endl;

  std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;

  std::cout << "Tipo de comida: " << "Ração" << std::endl;
  std::cout << "Kg consumidos: " << Catita.getKgRacaoConsumidos() + Carolina.getKgRacaoConsumidos() << std::endl;

  std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << ursidaeBobby.getKgPeixesConsumidos() + Tony.getKgPeixesConsumidos() << std::endl;

  return 0;
}