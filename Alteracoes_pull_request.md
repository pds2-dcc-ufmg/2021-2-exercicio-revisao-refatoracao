# Alterações realizadas no arquivo

Basicamente o mesmo conteúdo presente na Pull Request realizada.

---

## 	Cliente.hpp

   - Informações sensíveis do cliente deveriam deixar de ser parte de ```public ``` e passam a ser parte de ```private```, isso garante maior privacidade e segurança no desenvolvimento do sistema. Você concorda?
   - Pode ser uma boa ideia trocar os nomes das variáveis utilizadas, de forma a deixá-las um pouco mais expressivas com relação à linguagem. Dessa forma, ```NOME``` se tornaria ```nome``` por exemplo. O que acha?
   - Como boa prática de programação, pode ser uma boa ideia remover o trecho ```using namespace std;```, já que ele pode tornar o programa confuso com o crescimento.
   - Observe que em nenhuma instanciação de um objeto cliente, o atributo ```AlturaDosPais``` é utilizado. Será que ele é mesmo necessário para o desenvolvimento deste programa? Talvez seja uma boa ideia remover este atributo.
   - Para maior segurança e integridade dos dados, a criação de um método construtor pode ser uma ideia interessante, o que acha?



## 	Cliente.cpp

 - Por pura estilização do código, pode ser melhor deixar os argumentos de ```std::cout``` com o operador ```<<``` alinhados, o que acha?
 - Se você concordar que devemos retirar o trecho ```using namespace std;```, devemos escrever o namespace explicitamente das funções e atributos da STL (Standard Template Library).
 - A utilização de ponteiros ```this``` deixa o código mais expressivo quanto os atributos que tenta acessar. O que você acha de utilizarmos isto?
 - Para garantir maior modularização do código, a implementação dos métodos construtores e destrutores podem vir neste arquivo. Ou você prefere no de cabeçalho?



---

## 	Especialista.hpp

- Como boa prática de programação, pode ser uma boa ideia remover o trecho ```using namespace std;```, já que ele pode tornar o programa confuso com o crescimento.
- Informações sensíveis deveriam deixar de ser parte de ```public ``` e passam a ser parte de ```private```, isso garante maior privacidade e segurança no desenvolvimento do sistema. Você concorda?
- O atributo ```percWanda``` da classe parece estar inutilizado. Se você não pretender usá-lo, o que acha de removê-lo? Isso melhorará a performance de nosso sistema, já que não haverá mais variáveis ocupando memória em vão.
- A variável ```perc``` parece ser uma constante para as operações em que aparece. O que acha de alocá-la para dentro da classe ```Especialista``` como um atributo constante ```private```?
- Para garantir a boa utilização da modularização de bibliotecas, o que acha que realizar somente a declaração/abstração dos métodos no arquivo de cabeçalho e deixar a implementação concreta dos mesmos para um arquivo de código fonte?
- Para maior segurança e integridade dos dados, a criação de um método construtor pode ser uma ideia interessante, o que acha?



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

- Como boa prática de programação, pode ser uma boa ideia remover o trecho ```using namespace std;```, já que ele pode tornar o programa confuso com o crescimento.
- Já que a classe ```Especialista``` é subclasse de ```Funcionario```, e precisa de acesso aos membros desta, o que acha de tornar os atributos da classe  ```Funcionario``` em ```protected```?
- Para que o encapsulamento não cause problemas na implementação do método ```print``` da classe ```venda``` (e por ser também uma boa prática relacionada ao encapsulamento), criar um método chamado ```getName``` para acessar para leitura o atributo ```nome``` da classe pode ser uma boa ideia. O que acha?
- Para deixar o código padronizado quanto à notação de atributos e métodos, alterar o nome das variáveis ```SalarioBase``` para ```salarioBase``` e ```IDADE``` para ```idade``` pode ser uma boa ideia.
- Para melhor representatividade, trocar tipo do atributo ```idade``` para ```int``` pode ser uma boa prática.
- Talvez seja uma boa ideia tornar o atributo ```rgFunc``` de um número inteiro para uma string. Isso poderia evitar erros de overflow para Rg's muito grandes.
- Para deixar o código padronizado quanto à notação de atributos e métodos, alterar o nome do método ```print_oi``` para ```printOi``` pode ser uma boa prática.
- Para garantir a boa utilização da modularização de bibliotecas, o que acha que realizar somente a declaração/abstração dos métodos no arquivo de cabeçalho e deixar a implementação concreta dos mesmos para um arquivo de código fonte?

 

## 	Funcionario.cpp

 - Utilizar um ponteiro ```this``` para o atributo ```perc``` pode dar mais expressividade ao código. Deveríamos mudar?
 - É uma boa prática, para garantir integridade da informação, a implementação dos métodos chamados de "getters" e dos métodos chamados "setters", acha que deveríamos fazer isso?



---

## 	Gerente.hpp

- Como boa prática de programação, pode ser uma boa ideia remover o trecho ```using namespace std;```, já que ele pode tornar o programa confuso com o crescimento.
- Encapsular a variável ```ValorBONIFICACAO``` dentro da classe ```Gerente``` e alterar seu tipo para constante pode ser uma boa ideia. Também pode ser uma boa ideia renomeá-la para ```VALOR_BONIFICACAO```.
- Renomear o atributo ```IDADE``` para ```idade```  e trocar o tipo para inteiro pode ser uma boa prática, denotando que ele é um atributo variável, não constante. O mesmo vale para ```SalarioBase```, que poderia se tornar ```salarioBase``` ao invés.
- Para garantir a boa utilização da modularização de bibliotecas, o que acha que realizar somente a declaração/abstração dos métodos no arquivo de cabeçalho e deixar a implementação concreta dos mesmos para um arquivo de código fonte?

- Para maior segurança e integridade dos dados, a criação de um método construtor pode ser uma ideia interessante, o que acha?



## 	Gerente.cpp

- **Modificação do método ```calcula_BONIFICACAO_GERENTE```:** 

  - Para tornar o arquivo padronizado, pode ser uma boa ideia alterar o nome deste método para ```calculaBonificacaoGerente```, desta forma, todos os métodos do programa se tornam escritos em _CamelCase_.

  - Além disso, havia uma variável ```x``` inutilizada. Pode ser uma boa ideia removê-la.

- Utilizar o ponteiro this para os atributo utilizados nas funções pode dar mais expressividade ao código. Deveríamos mudar?
- Para garantir maior modularização do código, a implementação dos métodos construtores e destrutores podem vir neste arquivo. Ou você prefere no de cabeçalho?



---

## 	Venda.hpp

- Como boa prática de programação, pode ser uma boa ideia remover o trecho ```using namespace std;```, já que ele pode tornar o programa confuso com o crescimento.
- Informações sensíveis deveriam deixar de ser parte de ```public ``` e passam a ser parte de ```private```, isso garante maior privacidade e segurança no desenvolvimento do sistema. Você concorda?
- Os comentários deste arquivo não parecem ser utilizados corretamente. A remoção de linhas de código comentadas e inutilizadas pode ser uma boa prática, isso deixa o código mais limpo e legível. O que você acha?
- Renomear o atributo ```VALOR``` para ```valor``` pode ser uma boa prática, denotando que ele é um atributo variável, não constante.
- Para garantir a boa utilização da modularização de bibliotecas, o que acha que realizar somente a declaração/abstração dos métodos no arquivo de cabeçalho e deixar a implementação concreta dos mesmos para um arquivo de código fonte?
- Para maior segurança e integridade dos dados, a criação de um método construtor pode ser uma ideia interessante, o que acha?



## 	Venda.cpp

 - **Modificação do método ```print```:** 

   - Para tornar o arquivo mais legível, pode ser uma boa ideia utilizar ```std::cout``` em apenas uma linha, para os Especialistas e Clientes, já que não há quebra de linhas entre eles.

   

---

## main.cpp

- **Instanciação de novos objetos:**
  - Seguindo a recomendação de encapsulamento para todas as classes anteriores, a instanciação de objetos também deveria seguir esta mesma recomendação. Poderia ser uma boa ideia utilizar os métodos construtores já criados anteriormente para resolver este problema, o que você acha?
- Há alguns itens repetidos ao longo do código, para a instanciação da venda ```v06``` por exemplo. Talvez você queira removê-las.