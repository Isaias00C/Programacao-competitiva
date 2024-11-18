<h1>Emparelhamentos em Grafos bipartidos</h1>
Um grafos é Bipartido (ou Biparticionavel) se é possivel particionar seus vertices em dois subconjuntos, digamos x e y, de tal maneira que cada aresta ligue um vertice X a um vertice Y.


<h2>Teorema: um grafo é bipartido se, e somente se, ele nao possui circuito impar</h2>
Um emparelhamento num grafo é um conjunto de arestas nao adjacentes entre si.  
Um emparelhamento é maximal, se ele nao está propriamente contido com nunhum outro emparelhamento.  
Um emaprelhamento pe máximo se não existe no grafo outro emparelhamento com cardinalidade maior que a dele.   
Se a aresta uv pertence a um emparelhamento M, dizemos que M cobre os vertices u e v.  
Um emparelhamento é perfeito se ele cobre todos os vertices do grafo.  


Seja S um conjunto de vertices, chamamos de Vizinhança de S, denotada por N(S), o conjunto de todos os vertices adjacentes a algum vertice de S.

<h3>Teorema de Hall</h3>
Seja G um grafo biparticionado com bipartidos (X,Y). Existe um emparelhamento que cobre todos os vertices d eX ese e somente se, para todo S ⊆ X, temos |S| ≤ |N(S)|

<h3>Método Húngaro</h3>

A partir da prova do Teorema de Hall, extraímos um algoritimo conhecido como Método Húngaro.

Seja M um emparelhamento e P um caminho, dizemos que P é um caminho M-alternante se as arestas de P se alternam, na apropriedade de pertencer a M, ou seja, se duas arestas sao consecutivas em P, uma pertence a M e a outra nao. Um caminho M-alternante é M-aumentador se as extremidades nao estao cobertas por M (basta uma).
Podemos usar um caminho M-aumentador para aumentar a cardinalidadae de M.

M = (M - {arestas de P que pertencem a M}) U {aretas de P que nao pertecem a M}

<h4>Agora sim Metodo Hungaro</h4>
Entrada: um grafo bipartido G com bipartição (x, y).

Saída: M, um emparelhamento que cobre todos os vertices de X, se existir, ou S ⊆ X tal que |S| < |N(S)|

M = {}

Enquanto existir v pertence a X coberto por M:

-Construa uma árvore maxima enraizada em v na qual todos os caminhos iniciados por v sejam M-alternantes

-Se existir na arvore um caminho P M-aumentador: use P para aumentar M. Senão: S = {vertices da arvore pertencem a X}, devolva S;

Devolva M
