# Alterações realizadas no arquivo

Basicamente o mesmo conteúdo presente na Pull Request realizada.

---

## 	Cliente.hpp

   - Informações sensíveis do cliente deixam de ser parte de ```public ``` e passam a ser parte de ```private```.



## 	Cliente.cpp

 - Estilização do código: Todos os argumentos de ```std::cout``` agora possuem ```<<``` alinhados.



---

## 	Especialista.hpp

- Removendo o trecho ```using namespace std;``` como boa prática de programação.

- Tornando atributos que eram ```public``` em ```private```.

- Eliminando variável inutilizada ```percWanda```.
- Tornando variável ```perc``` em uma constante e alocando-a para dentro da classe ```Especialista``` como um atributo ```protected```.
- Tornando todos os métodos concretos dentro do arquivo de cabeçalho em implementações abstratas.
- Criando arquivo Especialista.cpp que inclui a biblioteca Especialista.hpp, contendo as implementações concretas da classe ```Especialista```.



## 	Especialista.cpp

 - **Modificação do método print:** 
   - Por estar utilizando atributos da superclasse à qual pertence no método, sendo que a própria superclasse ```Funcionário``` já possui um método próprio para isso, pode representar uma quebra do princípio de encapsulamento. Não concorda?
 - **Modificação do método comissao:**
   - Realizar o retorno da multiplicação de ```ValorVenda```  por ```perc``` pode ser mais eficiente do que realizar uma alocação de memória específica para isso antes de retornar. O que acha?
   - Utilizar um ponteiro ```this``` para o atributo ```perc``` pode dar mais expressividade ao código. Deveríamos mudar?



---

## 	Funcionario.hpp

	- Removendo o trecho ```using namespace std;``` como boa prática de programação.
	- Tornando informações sensíveis do Funcionário em ```private```.
	- Criando um método chamado ```getName``` para que o encapsulamento não cause problemas na implementação do método ```print``` da classe ```venda```.
	- Alterando o nome das variáveis ```SalarioBase``` para ```salarioBase``` e ```IDADE``` para ```idade```.
	- Alterando o nome da função ```print_oi``` para ```printOi```.
	- Tornando implementação dos métodos em abstrações dos mesmos.
	- Criação de um arquivo ```Funcionario.cpp``` para a implementação concreta dos métodos anteriormente abstraídos.



## 	Funcionario.cpp

 - Utilizar um ponteiro ```this``` para o atributo ```perc``` pode dar mais expressividade ao código. Deveríamos mudar?



---

## 	Gerente.hpp

	- Removendo o trecho ```using namespace std;``` como boa prática de programação.
	- Encapsulando a variável ```ValorBONIFICACAO``` dentro da classe ```Gerente```. Também pode ser uma boa ideia torná-la constante, renomeando-a para VALOR_BONIFICACAO.
	- Renomear a variável ```IDADE``` para ```idade``` pode ser uma boa prática, denotando que ela é uma variável, não uma constante. O mesmo vale para ```SalarioBase```, que poderia se tornar ```salarioBase``` ao invés.
	- Tornando implementação dos métodos em abstrações dos mesmos.
 - Criação de um arquivo ```Gerente.cpp``` para a implementação concreta dos métodos anteriormente abstraídos.



## 	Gerente.cpp

- **Modificação do método ```calcula_BONIFICACAO_GERENTE```:** 

  - Para tornar o arquivo padronizado, pode ser uma boa ideia alterar o nome deste método para ```calculaBonificacaoGerente```, desta forma, todos os métodos do programa se tornam escritos em _CamelCase_.

  - Além disso, havia uma variável ```x``` inutilizada. Pode ser uma boa ideia removê-la.

    

- Utilizar o ponteiro this para os atributo utilizados nas funções pode dar mais expressividade ao código. Deveríamos mudar?



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

   