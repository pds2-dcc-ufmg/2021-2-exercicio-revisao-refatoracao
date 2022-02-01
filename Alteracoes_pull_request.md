# Alterações realizadas no arquivo

Basicamente o mesmo conteúdo presente na Pull Request realizada.

---

## 	Cliente.hpp

   - Informações sensíveis do cliente deixam de ser parte de ```public ``` e passam a ser parte de ```private```.
   - Pode ser uma boa ideia trocar os nomes das variáveis utilizadas, de forma a deixá-las um pouco mais expressivas com relação à linguagem. Dessa forma, ```NOME``` se tornaria ```nome``` por exemplo. O que acha?
   - Removendo o trecho ```using namespace std;``` como boa prática de programação.
   - Observe que em nenhuma instanciação de um objeto cliente, o atributo ```AlturaDosPais``` é utilizado. Será que ele é mesmo necessário para o desenvolvimento deste programa? Talvez seja uma boa ideia remover este atributo.
   - Para maior segurança e integridade dos dados, a criação de um método construtor pode ser uma ideia interessante, o que acha?
   - A declaração de um método destrutor pode ser uma boa ideia, ela dá maior liberdade ao usuário de navegar entre as diferentes possibilidades de utilização da memória.



## 	Cliente.cpp

 - Estilização do código: Todos os argumentos de ```std::cout``` agora possuem ```<<``` alinhados.
 - Escrever o namespace explicitamente das funções e atributos da STL (Standard Template Library).
 - Utilizar ponteiros ```this``` para deixar o código mais expressivo quanto os atributos que tenta imprimir.
 - Para garantir maior modularização do código, a implementação dos métodos construtores e destrutores podem vir neste arquivo. Ou você prefere no de cabeçalho?



---

## 	Especialista.hpp

- Removendo o trecho ```using namespace std;``` como boa prática de programação.
- Tornando atributos que eram ```public``` em ```private```.
- Eliminando variável inutilizada ```percWanda```.
- Tornando variável ```perc``` em uma constante e alocando-a para dentro da classe ```Especialista``` como um atributo ```protected```.
- Tornando todos os métodos concretos dentro do arquivo de cabeçalho em implementações abstratas.
- Criando arquivo Especialista.cpp que inclui a biblioteca Especialista.hpp, contendo as implementações concretas da classe ```Especialista```.
- Para maior segurança e integridade dos dados, a criação de um método construtor pode ser uma ideia interessante, o que acha?
   - A declaração de um método destrutor pode ser uma boa ideia, ela dá maior liberdade ao usuário de navegar entre as diferentes possibilidades de utilização da memória.



## 	Especialista.cpp

- **Modificação do método print:** 
   - Por estar utilizando atributos da superclasse à qual pertence no método, sendo que a própria superclasse ```Funcionário``` já possui um método próprio para isso, pode representar uma quebra do princípio de encapsulamento. Não concorda?
- **Modificação do método comissao:**
   - Realizar o retorno da multiplicação de ```valorVenda```  (antiga ```ValorVenda```, nome trocado por maior padronização do código) por ```perc``` pode ser mais eficiente do que realizar uma alocação de memória específica para isso antes de retornar. O que acha?
   - Utilizar um ponteiro ```this``` para o atributo ```perc``` pode dar mais expressividade ao código. Deveríamos mudar?
- Para garantir maior modularização do código, a implementação dos métodos construtores e destrutores podem vir neste arquivo. Ou você prefere no de cabeçalho?
- É uma boa prática, para garantir integridade da informação, a implementação dos métodos chamados de "getters" e dos métodos chamados "setters".



---

## 	Funcionario.hpp

- Removendo o trecho ```using namespace std;``` como boa prática de programação.
- Tornando informações sensíveis do Funcionário em ```protected```, já que a classe ```Especialista``` é subclasse de ```Funcionario``` e precisa de acesso aos membros desta.
- Criando um método chamado ```getName``` para que o encapsulamento não cause problemas na implementação do método ```print``` da classe ```venda```.
- Alterando o nome das variáveis ```SalarioBase``` para ```salarioBase``` e ```IDADE``` para ```idade``` (trocar também o tipo deste atributo para inteiro).
- Talvez seja uma boa ideia tornar o atributo ```rgFunc``` de um número inteiro para um número inteiro sem sinal. Isso poderia evitar erros de overflow para Rg's muito grandes.
- Alterando o nome da função ```print_oi``` para ```printOi```.
- Tornando implementação dos métodos em abstrações dos mesmos.
- Criação de um arquivo ```Funcionario.cpp``` para a implementação concreta dos métodos anteriormente abstraídos.

 

## 	Funcionario.cpp

 - Utilizar um ponteiro ```this``` para o atributo ```perc``` pode dar mais expressividade ao código. Deveríamos mudar?
 - É uma boa prática, para garantir integridade da informação, a implementação dos métodos chamados de "getters" e dos métodos chamados "setters", acha que deveriamos fazer isso?



---

## 	Gerente.hpp

- Removendo o trecho ```using namespace std;``` como boa prática de programação.
- Encapsulando a variável ```ValorBONIFICACAO``` dentro da classe ```Gerente```. Também pode ser uma boa ideia torná-la constante, renomeando-a para ```VALOR_BONIFICACAO```.
- Renomear a variável ```IDADE``` para ```idade```  e trocar o tipo dela para inteiro pode ser uma boa prática, denotando que ela é uma variável, não uma constante. O mesmo vale para ```SalarioBase```, que poderia se tornar ```salarioBase``` ao invés.
- Tornando implementação dos métodos em abstrações dos mesmos. 

- Criação de um arquivo ```Gerente.cpp``` para a implementação concreta dos métodos anteriormente abstraídos.
- Para maior segurança e integridade dos dados, a criação de um método construtor pode ser uma ideia interessante, o que acha?
- A declaração de um método destrutor pode ser uma boa ideia, ela dá maior liberdade ao usuário de navegar entre as diferentes possibilidades de utilização da memória.



## 	Gerente.cpp

- **Modificação do método ```calcula_BONIFICACAO_GERENTE```:** 

  - Para tornar o arquivo padronizado, pode ser uma boa ideia alterar o nome deste método para ```calculaBonificacaoGerente```, desta forma, todos os métodos do programa se tornam escritos em _CamelCase_.

  - Além disso, havia uma variável ```x``` inutilizada. Pode ser uma boa ideia removê-la.

- Utilizar o ponteiro this para os atributo utilizados nas funções pode dar mais expressividade ao código. Deveríamos mudar?
- Para garantir maior modularização do código, a implementação dos métodos construtores e destrutores podem vir neste arquivo. Ou você prefere no de cabeçalho?



---

## 	Venda.hpp

- Removendo o trecho ```using namespace std;``` como boa prática de programação.
- Definindo modificadores de acesso para os atributos relacionados à classe ```Venda```. Corrigindo também as indentações relacionadas a cada modificador de acesso.
- Remoção de linhas de código comentadas e inutilizadas.
- Mudança do nome da variável ```VALOR``` para ```valor```, de forma a melhor representar uma variável.
- Tornando implementação dos métodos em abstrações dos mesmos.

 - Criação de um arquivo ```Venda.cpp``` para a implementação concreta dos métodos anteriormente abstraídos.



## 	Venda.cpp

 - **Modificação do método ```print```:** 

   - Para tornar o arquivo mais legível, pode ser uma boa ideia utilizar ```std::cout``` em apenas uma linha, para os Especialistas e Clientes, já que não há quebra de linhas entre eles.

   

---

## main.cpp

- **Instanciação de novos objetos:**
  - Seguindo a recomendação de encapsulamento para todas as classes anteriores, a instanciação de objetos também deveria seguir esta mesma recomendação. Poderia ser uma boa ideia utilizar os métodos construtores já criados anteriormente para resolver este problema, o que você acha?
- Há alguns itens repetidos ao longo do código, para a instanciação da venda ```v06``` por exemplo. Talvez você queira removê-las.