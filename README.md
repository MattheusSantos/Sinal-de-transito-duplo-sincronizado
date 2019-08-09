<p><strong>Semaforo digital</strong></p>
<p>&nbsp;</p>
<p>neste projeto iremos apresentar de forma mais consisa e eficaz o funcionamento de um semaforo digital, desde a sua programa&ccedil;ao ate a sua montagem no microcontrolador arduino.</p>
<p><strong>Materias usados:</strong></p>
<ul>
<li>uma protoboard;</li>
<li>seis leds, dois vermelho, dois amarelo e dois verde;</li>
<li>fios jumper;</li>
<li>seis resistores de 100 ohms;</li>
<li>um cabo USB;</li>
<li>um computador com a IDE do Arduino instalada;</li>
<li>e um microcontrolador Arduino.</li>
</ul>
<p>Quando duas pistas se encontram existe a necessidade de controlar o fluxo de ve&iacute;culos entre elas, para evitar colis&otilde;es. Neste caso existe a necessidade de dois sinais de tr&acirc;nsito sincronizados para controlar este fluxo de ve&iacute;culos. Este sincronismo entre os sinais significa que enquanto um estiver aberto, luz verde, ou em estado de aten&ccedil;&atilde;o, luz amarela, o outro deve estar fechado e vice versa. Neste projeto Arduino vamos contruir um prot&oacute;tipo que faz esse exatamente este controle, simulando dois sinais de tr&acirc;nsito sincronizados</p>
<p>A primeira coisa a se fazer &eacute; conectar os leds na protoboard. Cada grupo de tr&ecirc;s leds (verde, amarelo e vermelho) vai representar um sinal de tr&acirc;nsito. As perninhas menores dos leds foram conectadas nas colunas 5, 10, 15, 20, 25, 30. As pernas maiores nas colunas 6, 11, 16, 21, 26, 31.</p>
<p>Agora voc&ecirc; deve dobrar as perninhas dos resistores de 100 ohms para conect&aacute;-los a protoboard. Se voc&ecirc; tiver um alicate de bico use-o para fazer as dobras.</p>
<p>Conecte os resistores na protoboard, onde uma ponta do resistor ficar&aacute; ligada na mesma coluna da perna pequena do led e a outra ponta na linha negativa (linha horizontal azul neste caso). Logo os resistores ser&atilde;o conectados nas colunas 5, 10, 15, 20, 25, 30 e na linha negativa (linha horizontal azul neste caso).</p>
<p>Conecte agora os fios jumpers nas mesmas colunas das pernas maiores dos leds e um fio jumper na linha negativa (linha horizontal azul neste caso). Logo os fios jumpers ficar&atilde;o nas colunas 6, 11, 16, 21, 26, 31 e um fio jumper na linha negativa.</p>
<p>Conecte os fios jumpers nos pinos digitais do Arduino Uno da seguinte forma:</p>
<p>Fio jumper da linha negativa (azul) no pino GND.</p>
<p>Consideraremos o primeiro sinal o conjunto de tr&ecirc;s leds da direita, e o segundo sinal o conjunto de tr&ecirc;s leds da esquerda.</p>
<p>Primeiro sinal<br />led vermelho no pino 5;<br />led amarelo no pino 6;<br />led verde no pino 7.</p>
<p>Segundo sinal&nbsp;<br />led vermelho no pino 8;<br />led amarelo no pino 9;<br />led verde no pino 10;</p>
<p>Pronto, o projeto f&iacute;sico do sinal de tr&acirc;nsito duplo e sincronizado esta pronto, agora falta programar o Arduino Uno para que ele funcione como o desejado.</p>
<p>Para come&ccedil;ar a programa&ccedil;&atilde;o conecte o arduino ao seu computador atrav&eacute;s do cabo USB, e no computador execute a IDE do arduino.</p>
