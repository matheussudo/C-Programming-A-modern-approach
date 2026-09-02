Aqui está a lista completa reescrita com uma linguagem muito mais clara, direta e amigável!

Simplifiquei os termos técnicos para você entender exatamente o que precisa estudar:

* **"O que você precisa entender antes de fazer"** substituiu o jargão de pré-requisitos, dizendo exatamente o que pesquisar em português simples.
* **"Como a função deve ser escrita no código"** traduz o que antes era chamado de "Assinatura" (mostrando o nome da função, o que ela recebe e o que devolve).
* As explicações de desempenho foram desmistificadas sem notações pesadas de matemática.

Copie este texto e cole no seu **Google Docs** para gerar o PDF formatado! 📄

---

# 📚 Guia de Exercícios Práticos: Recursão em Árvore (Tree Recursion)

Este guia foi montado para você praticar como dividir problemas em várias chamadas recursivas, entender a lógica de cada exercício e saber exatamente o que pesquisar antes de começar a codificar.

---

## 🟢 Seção 1: Fundamentos da Tree Recursion (Básico)

---

### Exercício 1.1: O Triângulo de Pascal

> **Ideia central:** No Triângulo de Pascal, qualquer número do meio é a soma dos dois números logo acima dele. Isso gera naturalmente duas chamadas recursivas.

* **O que você precisa entender antes de fazer:**
* Entenda como desenhar o Triângulo de Pascal no papel para ver que as duas pontas (início e fim de cada linha) sempre valem `1`.
* Lembre-se de que a recursão precisa parar (Caso Base) quando a coluna for `0` (borda esquerda) ou quando a coluna for igual à linha (borda direita).


* **O que o exercício pede:**
Crie uma função que receba o número da linha e o número da coluna e retorne o valor daquela posição no triângulo, sem usar nenhum loop `for` ou `while`.
* **Como a função deve ser escrita no código:**
`int pascal(int linha, int coluna)`
* **Exemplo para testar:**
Se você passar `linha = 4` e `coluna = 2`, o programa deve retornar `6`.

---

### Exercício 1.2: Sequência de Tribonacci

> **Ideia central:** Em vez de somar apenas os dois termos anteriores como no Fibonacci, aqui somamos os **três** termos anteriores.

* **O que você precisa entender antes de fazer:**
* Entenda como funciona a sequência: ela começa com `0, 0, 1` e cada próximo número é a soma dos 3 anteriores (ex: $0 + 0 + 1 = 1$, depois $0 + 1 + 1 = 2$, etc.).
* Como a fórmula olha para 3 termos atrás, você precisará de **três Casos Base** (`n == 0`, `n == 1` e `n == 2`).
* Em vez de 2 chamadas na volta, sua função fará 3 chamadas recursivas somadas juntas.


* **O que o exercício pede:**
Implemente a função que calcula o $N$-ésimo termo da sequência de Tribonacci.
* **Como a função deve ser escrita no código:**
`int tribonacci(int n)`
* **Exemplo para testar:**
Se você passar `n = 5`, a função deve retornar `4`.

---

### Exercício 1.3: Contando Caminhos em uma Grade (Grid Paths)

> **Ideia central:** A cada passo no mapa, você só pode escolher andar para a Direita ou para Baixo, abrindo dois caminhos possíveis.

* **O que você precisa entender antes de fazer:**
* Não precisa criar uma matriz na memória! O segredo é pensar que a cada passo você "gasta" uma linha (indo pra baixo) ou "gasta" uma coluna (indo pra direita).
* Entenda que quando sobra apenas 1 linha ou 1 coluna, só resta um único caminho em linha reta até o final (esse é o Caso Base que retorna `1`).


* **O que o exercício pede:**
Calcule quantas maneiras diferentes existem de ir do canto superior esquerdo até o canto inferior direito de uma grade de tamanho $M \times N$.
* **Como a função deve ser escrita no código:**
`int contar_caminhos(int linhas, int colunas)`
* **Exemplo para testar:**
Para uma grade $3 \times 3$, existem `6` caminhos possíveis.

---

## 🟡 Seção 2: Paradigma de Divisão e Conquista

---

### Exercício 2.1: Ordenação com Merge Sort

> **Ideia central:** O Merge Sort quebra um array desordenado ao meio várias vezes até ter pedacinhos de 1 elemento (que já estão ordenados) e depois junta tudo na ordem certa.

* **O que você precisa entender antes de fazer:**
* Entenda como encontrar o meio de um array usando `meio = (inicio + fim) / 2`.
* Entenda como funciona uma função separada chamada `intercalar` (ou `merge`), que recebe duas metades ordenadas e junta as duas em um array temporário.


* **O que o exercício pede:**
Escreva a função recursiva do Merge Sort que corta o array ao meio (esquerda e direita) e depois junta as partes ordenadas.
* **Como a função deve ser escrita no código:**
`void merge_sort(int arr[], int inicio, int fim)`

---

### Exercício 2.2: Encontrar o Maior e Menor Número ao Mesmo Tempo

> **Ideia central:** Em vez de olhar número por número em um loop, dividimos o array no meio recursivamente, pegamos o maior e menor da esquerda, o maior e menor da direita e comparamos os dois.

* **O que você precisa entender antes de fazer:**
* Entenda como criar uma `struct` simples em C para guardar duas variáveis juntas (`minimo` e `maximo`).
* Entenda o Caso Base: se o pedaço do array tem apenas 1 elemento, ele é ao mesmo tempo o maior e o menor!


* **O que o exercício pede:**
Encontre o valor mínimo e o valor máximo de um vetor usando recursão de divisão ao meio.
* **Como a função deve ser escrita no código:**
`struct MinMax buscar_min_max(int arr[], int inicio, int fim)`

---

### Exercício 2.3: Potência Rápida (Exponenciação Eficiente)

> **Ideia central:** Para calcular $2^8$, em vez de multiplicar o 2 oito vezes, podemos calcular $(2^4)^2$. Isso faz o computador resolver a conta muito mais rápido.

* **O que você precisa entender antes de fazer:**
* Entenda a regra matemática: se o expoente for par, calculamos a potência de metade do expoente e multiplicamos o resultado por ele mesmo.
* Se o expoente for ímpar, multiplicamos a base pelo resultado do expoente menos 1.
* O Caso Base é quando o expoente chega a `0`, retornando `1`.


* **O que o exercício pede:**
Crie uma função de potência que corte o expoente pela metade a cada chamada recursiva.
* **Como a função deve ser escrita no código:**
`long long potencia(int base, int exp)`

---

### Exercício 2.4: Contar Quantos Números Estão Fora de Ordem (Inversões)

> **Ideia central:** Uma inversão acontece quando um número maior aparece antes de um número menor no array (ex: no array `{2, 1}`, o par `(2,1)` é uma inversão).

* **O que você precisa entender antes de fazer:**
* Entenda que este exercício é uma pequena modificação do **Merge Sort**.
* Enquanto você junta as duas metades no `merge`, sempre que um elemento da direita for menor que o da esquerda, você encontrou inversões!


* **O que o exercício pede:**
Descubra quantas inversões existem em um array qualquer aproveitando a divisão do Merge Sort.
* **Como a função deve ser escrita no código:**
`int contar_inversoes(int arr[], int inicio, int fim)`

---

### Exercício 2.5: Maior Soma de um Pedaço de Vetor (Subarray Contíguo)

> **Ideia central:** Dado um array com números positivos e negativos, queremos achar o trecho contínuo cuja soma seja a maior possível.

* **O que você precisa entender antes de fazer:**
* Ao dividir o array no meio, a maior soma só pode estar em um de 3 lugares: totalmente na metade esquerda, totalmente na metade direita, ou atravessando o meio.
* Entenda como fazer uma função auxiliar que calcula a maior soma que começa no meio e vai para as bordas.


* **O que o exercício pede:**
Calcule o valor da maior soma contínua usando a estratégia de cortar o vetor ao meio.
* **Como a função deve ser escrita no código:**
`int maior_soma_subvetor(int arr[], int inicio, int fim)`

---

## 🔵 Seção 3: Navegação em Estruturas de Árvore

*(Para quando você for estudar ponteiros e structs encadeadas!)*

Estrutura base usada para representar cada "nó" da árvore:

```c
typedef struct No {
    int valor;
    struct No *esquerda;
    struct No *direita;
} No;

```

---

### Exercício 3.1: Verificar se Duas Árvores São Espelho uma da Outra

> **Ideia central:** Duas árvores são espelhadas se a subárvore esquerda de uma for idêntica à subárvore direita da outra.

* **O que você precisa entender antes de fazer:**
* Entenda como checar se dois ponteiros são nulos (`NULL`) ao mesmo tempo no Caso Base.
* Entenda como comparar o valor do nó atual e depois chamar a função cruzando os lados: `esquerda` da primeira com `direita` da segunda.


* **O que o exercício pede:**
Retorne `1` se as duas árvores forem espelhadas e `0` se não forem.
* **Como a função deve ser escrita no código:**
`int sao_espelhadas(No *arvore1, No *arvore2)`

---

### Exercício 3.2: Calcular o Diâmetro de uma Árvore

> **Ideia central:** O diâmetro é a maior distância (maior quantidade de passos) entre duas folhas quaisquer da árvore.

* **O que você precisa entender antes de fazer:**
* Entenda como calcular a altura de uma árvore (recursão que pega $1 + \text{maior altura entre os lados}$).
* O diâmetro passando pelo nó atual é a soma da altura da esquerda com a altura da direita.


* **O que o exercício pede:**
Retorne o maior caminho entre dois nós de uma árvore binária.
* **Como a função deve ser escrita no código:**
`int diametro(No *raiz)`

---

### Exercício 3.3: Testar se uma Árvore Binária é de Busca (BST) Válida

> **Ideia central:** Em uma BST, tudo o que está à esquerda de um nó deve ser menor que ele, e tudo à direita deve ser maior.

* **O que você precisa entender antes de fazer:**
* Não basta comparar o nó apenas com seus filhos diretos; todos os nós descendentes devem respeitar um valor mínimo e máximo permitido.
* Entenda como passar limites (`min` e `max`) para as chamadas recursivas conforme desce na árvore.


* **O que o exercício pede:**
Escreva uma função que confirme se a árvore inteira cumpre as regras de ordenação de uma BST.
* **Como a função deve ser escrita no código:**
`int eh_bst_valida(No *raiz, long min_permitido, long max_permitido)`

---

### Exercício 3.4: Achar o Ancestral Comum Mais Próximo (LCA)

> **Ideia central:** O ancestral comum é o primeiro nó "pai" que fica acima de dois valores específicos na árvore ao mesmo tempo.

* **O que você precisa entender antes de fazer:**
* Se você encontrar um dos dois valores no nó atual, retorne esse nó.
* Faça a busca recursiva no lado esquerdo e no lado direito. Se ambos retornarem um nó válido, significa que o nó atual é o ponto de encontro dos dois!


* **O que o exercício pede:**
Encontre o primeiro nó ancestral compartilhado entre dois valores $p$ e $q$.
* **Como a função deve ser escrita no código:**
`No* menor_ancestral_comum(No *raiz, int p, int q)`

---

### Exercício 3.5: Transformar uma Árvore em um Array Simples

> **Ideia central:** Salvar uma estrutura cheia de ponteiros dentro de um array plano para podermos guardar em arquivo ou enviar pela rede.

* **O que você precisa entender antes de fazer:**
* Entenda a ordem de visitação *Pre-Order*: primeiro guarda o valor do nó atual no array, depois visita toda a esquerda, depois toda a direita.
* Entenda como usar um valor sentinela (como `-1`) para representar nós vazios (`NULL`) no array.


* **O que o exercício pede:**
Preencha um array linear com todos os elementos da árvore preservando sua estrutura.
* **Como a função deve ser escrita no código:**
`void serializar_arvore(No *raiz, int array_destino[], int *indice_atual)`

---

## 🟣 Seção 4: Algoritmos de Tentativa e Erro (Backtracking)

---

### Exercício 4.1: O Problema das N-Rainhas no Tabuleiro

> **Ideia central:** Posicionar rainhas em um tabuleiro de xadrez de forma que nenhuma ataque a outra (mesma linha, coluna ou diagonal).

* **O que você precisa entender antes de fazer:**
* Entenda a técnica do **Backtracking**: você tenta colocar uma rainha em uma casa válida; se mais para frente der errado, você "desfaz" o passo e tenta a próxima casa.
* Entenda como criar uma função auxiliar simples que checa se uma posição do tabuleiro está sob ataque antes de posicionar.


* **O que o exercício pede:**
Encontre e imprima todas as configurações possíveis de $N$ rainhas em um tabuleiro $N \times N$.
* **Como a função deve ser escrita no código:**
`void resolver_n_rainhas(int tabuleiro[][N], int linha_atual)`

---

### Exercício 4.2: Gerar Todas as Misturas de uma Letra (Permutações)

> **Ideia central:** Gerar todas as ordens possíveis de uma palavra (ex: para `"ABC"`, gerar `ABC, ACB, BAC, BCA, CAB, CBA`).

* **O que você precisa entender antes de fazer:**
* Entenda como trocar dois caracteres de lugar usando uma variável temporária (*swap*).
* O segredo do backtracking aqui é: troca as letras de lugar $\rightarrow$ chama a recursão para a próxima letra $\rightarrow$ **troca de volta para o estado original** ao retornar.


* **O que o exercício pede:**
Imprima todas as ordens possíveis dos caracteres de uma string.
* **Como a função deve ser escrita no código:**
`void permutar(char str[], int inicio, int fim)`

---

### Exercício 4.3: Resolvendo um Tabuleiro de Sudoku

> **Ideia central:** Testar números de 1 a 9 nas casas vazias de um Sudoku; se violar as regras, desfaz o número e tenta o próximo.

* **O que você precisa entender antes de fazer:**
* Entenda como checar se um número pode ser colocado em uma casa (não pode repetir na mesma linha, na mesma coluna nem no mini-quadrado $3 \times 3$).
* A recursão procura a próxima casa vazia, tenta os dígitos de 1 a 9 e, se nenhuma der certo, limpa a casa (`tabuleiro[l][c] = 0`) e volta na pilha.


* **O que o exercício pede:**
Preencha completamente um tabuleiro de Sudoku $9 \times 9$ que comece com números faltando.
* **Como a função deve ser escrita no código:**
`int resolver_sudoku(int tabuleiro[9][9])`

---

### Exercício 4.4: Encontrar Subconjunto que Some um Valor Alvo

> **Ideia central:** Para cada número de uma lista, temos duas escolhas: ou colocamos o número na soma, ou deixamos ele de fora.

* **O que você precisa entender antes de fazer:**
* Esta é a clássica árvore de decisão binária: um galho testa incluindo o número atual na soma, e o outro galho testa pulando esse número.
* O Caso Base é quando a soma restante vira `0` (sucesso!) ou quando os números acabam (falha).


* **O que o exercício pede:**
Dada uma lista de números, diga se existe algum grupo deles que somado dá exatamente o valor desejado.
* **Como a função deve ser escrita no código:**
`int existe_soma_subconjunto(int arr[], int tamanho, int soma_alvo)`

---

### Exercício 4.5: Rato no Labirinto (Achar a Saída)

> **Ideia central:** Um ratinho precisa andar pelas casas livres de uma matriz até achar o queijo na última casa.

* **O que você precisa entender antes de fazer:**
* Entenda como marcar uma casa como "visitada" (ex: mudando o valor da matriz para `2`) para o rato não ficar andando em círculos no mesmo lugar.
* Se o caminho escolhido levar a um beco sem saída, o rato desmarca a casa (volta para o estado original) e tenta outra direção (baixo, direita, cima ou esquerda).


* **O que o exercício pede:**
Encontre e imprima o caminho percorrido pelo rato do início $(0,0)$ até o final da matriz.
* **Como a função deve ser escrita no código:**
`int resolver_labirinto(int labirinto[N][N], int linha, int coluna)`

---