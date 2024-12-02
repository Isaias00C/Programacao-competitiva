#Fluxos em Rede:

Uma rede é um digrafo onde cada arco e possui vazao Co.

No prpoblema do fluxo em redes é dada uma rede e dois vertices especiais da redes, s(origem) e t(destino). Queremos determinar o fluxo em cada arco da rede de modo que o volume de fluxo enviado de para t seja o maior possivel

Um fluxo numa rede é uma atribuicao de fluxo a cada um dos arcos da rede. Dizemos que um fluxo é viável se:

1. Para cada arco 'e' da rede, o fluxo nesse arco está entre 0 e Co.
2. Para todo vertice v da rede, exceto s e t, a quantidade de fluxo que chega em v tem que ser igual a quantidade de fluxo que sai de v (Lei de Kirchroff)

Seja v um vertice da rede. Denotamos por ∂ˆ+(v) o conjunto dos arcos que chegam em v, e por ∂ˆ-(v) o conjunto dos arcos que partem de v. Vamos denotar por ƒe o fluxo no arco e. Sejam F um fluxo viavel. O volume de F, denotamos por Vol(F), é a quantidade liquida do fluxo que sai de s(que equivale à quantidade liquida de fluxo que chegam em t).

Vol(F) = ∑ƒe(e pertencente a ∂ˆ-(s)) - ∑ƒe(e pertencente a ∂ˆ+(s)) = ∑ƒe(e pertencente a ∂ˆ+(t)) - ∑ƒe(e pertencente a ∂ˆ-(t))   

Ex.:



