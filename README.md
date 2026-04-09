<h1>Tipo Abstrato de Dados (TAD) - Gerenciamento dinâmico em vetor</h1>

<p>O sistema implementa um TAD para gerenciar registros de pessoas, utilizando alocação dinâmica de memória (heap) para criar os registros e os organiza por meio de um vetor de ponteiros.</p>

<h2>📍 Descrição do Projeto</h2>
<p>Este projeto tem o intuito de implementar TAD com a linguagem C, separando a implementação (.c) da interface (.h). Além disso, outros conceitos que foram utilizados são:</p>
<ul>
    <li>Uso da memória heap, para alocação dinâmica.</li>
    <li>Método malloc() para reservar a estrutura criada na heap.</li>
    <li>Método free() para liberar o espaço ocupado na heap.</li>
    <li>Manipulação de vetor e ponteiros.</li>
    <li>Entrada de dados com fgets().</li>
</ul>

<h2>⚙️ Funcionalidades</h2>
<h3>Inserção:</h3>
<p>A criação da struct Pessoa é feita de forma dinâmica (alocada na heap), e logo em seguida adicionada ao vetor.</p>

<h3>Listagem:</h3>
<p>O vetor é percorrido e exibe os dados de todos os elementos do vetor.</p>

<h3>Edição:</h3>
<p>O elemento do vetor é identificado pelo índice, e a partir dele, seus atributos são atualizados.</p>

<h3>Remoção:</h3>
<p>O elemento do vetor, localizado através do índice, é removido. Logo, o método free() libera a memória correspondente a ele. Em seguida o vetor é reordenado para organizar os elementos que restaram.</p>

<h2>🗂️ Estrutura do arquivo</h2>
<h3>Pessoa.h</h3>
<p>Arquivo de interface. Contém o protótipo das funções (assinatura) e a definição da estrutura.</p>
<h3>Pessoa.c</h3>
<p>Arquivo de implementação. Contém a implementação da lógica das funções definidas na interface e a função main.</p>

<h2>💡 Compilação e execução</h2>
<h3>AV1_TAD_LorenaEduarda</h3>
<p>gcc Pessoa.c -o Pessoa.exe</p>
<p>.\Pessoa.exe</p>

<h3>AV1_TAD_Giovanna</h3>
<p>gcc main.c Pessoa.c -o main.exe</p>
<p>.\main.exe</p>

<h3>AV1_TAD_Caelayne</h3>
<p>gcc gerenciador_pessoas.c -o gerenciador_pessoas.exe</p>
<p>.\gerenciador_pessoas.exe</p>

<h2>🔖 Desenvolvido por:</h2>
<p>Caelayne Aparecida Ribeiro Soares</p>
<p>Giovanna Furlan Fernandes</p>
<p>Lorena Eduarda Barros Martinelli</p>