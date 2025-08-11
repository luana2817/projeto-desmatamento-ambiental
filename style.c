#container {
    display: flex; /* Define o container como um flex container */
}

.cartao {
    margin: 1rem ; /* Espaçamento entre os cartões */
    background-color: aqua; /* Cor de fundo dos cartões */
    height: 20rem; /* Altura fixa dos cartões */
    flex-grow: 1; /* Permite que os cartões cresçam igualmente */
    flex-basis: calc(33% - 6rem); /* Define a base do cartão como 33% da largura do container, menos o espaçamento */
}

.cartao__conteudo {
    text-align: center; /* Centraliza o texto dentro do cartão */
    height: 100%; /* Faz com que o conteúdo preencha toda a altura do cartão */
}

.cartao__conteudo h3 {
    background-color: rgb(71, 255, 175); /* Cor de fundo do título */
    text-align: left; /* Alinha o texto à esquerda */
    padding: 0.5rem; /* Espaçamento interno do título */
    position: absolute; /* Permite que o título se posicione de forma absoluta dentro do cartão */
    margin: 0.6rem; /* Margem ao redor do título */
    border-radius: 0.6rem; /* Bordas arredondadas do título */
    font-size: 1vw; /* Tamanho da fonte proporcional à largura da tela */
}body {
background-color: bisque;
}
footer {
background-color: rgb(92, 62, 225);
color: white;
bottom: 0;
}
footer {
background-color: rgb(30, 67, 213);
color: white;
position: fixed;
bottom: 0;
}

footer {
background-color: rgb(38, 15, 166);
color: rgb(203, 198, 199);
position: fixed;
bottom: 0;
width: 100%;
}

footer p {
}
footer p {
text-align: center;
font-size: 1rem;
}

footer {
background-color: rgb(134, 61, 61);
color: white;
position: fixed;
bottom: 0;
width: 100%;
height: 4rem;
}
footer p {
text-align:center;
font-size: 0.6rem;
margin-top: 1rem;
}
#container {
}
#container {
display: flex;
}
.cartao {
margin: 1rem 1rem;
}
.cartao {
margin: 1rem 1rem;
background-color: aqua;
}
.cartao {
margin: 1rem 1rem;
background-color: aqua;
height: 20rem;
flex-grow: 1;
flex-basis: calc(33% - 6rem);
}
.cartao__conteudo {
text-align: center;
}
.cartao__conteudo {
text-align: center;
background-color: aquamarine;
height: 100%;
}

.cartao__conteudo h3 {
background-color: rgb(255, 71, 71);
}
.cartao__conteudo h3 {
background-color: tomato;
text-align: left;
padding: 0.5rem;
position: absolute;
margin: 0.6rem;
border-radius: 0.6rem;
}

.cartao__conteudo h3 {
background-color: tomato;
text-align: left;
padding: 0.5rem;
position: absolute;
margin: 0.6rem;
border-radius: 0.6rem;
font-size: 1vw;
}
.cartao:hover .cartao__conteudo {
}
.cartao:hover .cartao__conteudo {
transform: rotateY(180deg);
}

.cartao__conteudo {
background-color: var(--card-front-color);
text-align: center;
height: 100%;
transform-style: preserve-3d;
transition: transform 300ms ease-in-out;
}
.cartao__conteudo h3 {
color: var(--text-color);
border: 1px solid var(--text-color);
text-align: left;
padding: 0.5rem;
position: absolute;
margin: 0.6rem;
border-radius: 0.6rem;
font-size: 1vw;
backface-visibility: hidden;
}

.cartao__conteudo__pergunta,
.cartao__conteudo__resposta {
backface-visibility: hidden;
}
.cartao__conteudo__resposta {
transform: rotateY(180deg)
}
.cartao__conteudo__pergunta,
.cartao__conteudo__resposta {
backface-visibility: hidden;
position: absolute;
height: 100%;
width: 100%;
}

.cartao__conteudo p {
margin-top: 1rem;
padding: 2rem;
margin-top: 4rem;
}