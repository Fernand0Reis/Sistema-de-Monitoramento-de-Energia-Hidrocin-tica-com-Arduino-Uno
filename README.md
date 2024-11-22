<!DOCTYPE html>
<html lang="pt-br">
<head>
</head>
<body>

<header>
    <h1>Sistema de Monitoramento de Energia Hidrocinética com Arduino Uno</h1>
</header>

<section>
    <p>Este projeto implementa um sistema simples e eficiente de monitoramento de energia gerada por uma turbina hidrocinética. Usando um Arduino Uno, o sistema mede a tensão e a corrente geradas pela turbina, calcula a potência e exibe essas informações em um display LCD. Ele também alerta o usuário caso a potência gerada caia abaixo de um limite configurado, indicando a necessidade de manutenção ou ajuste.</p>
</section>

<section>
    <h2>Objetivo do Projeto</h2>
    <p>O objetivo principal é criar um sistema de monitoramento para turbinas hidrocinéticas que permita aos usuários visualizar em tempo real a eficiência do sistema de geração de energia. Este projeto pode ser utilizado como base para sistemas em pequena escala, como os usados em comunidades isoladas ou em experimentos educacionais sobre energia renovável.</p>
</section>

<section>
    <h2>Características do Sistema</h2>
    <ul>
        <li><strong>Medição de Tensão e Corrente:</strong> Utiliza potenciômetros para simular sensores de tensão e corrente.</li>
        <li><strong>Exibição de Dados:</strong> Mostra as leituras de tensão e potência gerada em um display LCD 16x2.</li>
        <li><strong>Alerta de Baixa Potência:</strong> Um LED acende quando a potência gerada está abaixo de um valor mínimo configurado.</li>
        <li><strong>Sistema Modular:</strong> O sistema pode ser expandido para incluir mais sensores ou comunicação sem fio.</li>
    </ul>
</section>

<section>
    <h2>Componentes Utilizados</h2>
    <ul>
        <li><strong>Arduino Uno:</strong> Placa principal para processamento e controle do sistema.</li>
        <li><strong>Display LCD 16x2 com Módulo I2C:</strong> Para exibir as leituras de tensão e potência.</li>
        <li><strong>Dois Potenciômetros:</strong> Para simular os sensores de corrente e tensão.</li>
        <li><strong>LED:</strong> Indicador de alerta para baixa potência.</li>
        <li><strong>Cabos de Conexão:</strong> Para conectar os componentes ao Arduino.</li>
    </ul>
</section>

<section>
    <h2>Requisitos</h2>
    <h3>Hardware</h3>
    <ul>
        <li>Arduino Uno</li>
        <li>Display LCD 16x2 com módulo I2C</li>
        <li>2 Potenciômetros</li>
        <li>1 LED (com resistor de 220Ω)</li>
        <li>Cabos de conexão</li>
        <li>Protoboard (opcional)</li>
    </ul>
    <h3>Software</h3>
    <ul>
        <li>Arduino IDE (para carregar o código no Arduino)</li>
        <li>Biblioteca <strong>LiquidCrystal_I2C</strong> para controle do LCD (instalada diretamente via Arduino IDE)</li>
    </ul>
</section>

<section>
    <h2>Dependências</h2>
    <p><strong>LiquidCrystal_I2C:</strong> Biblioteca para controlar o display LCD com comunicação I2C.</p>
    <p>A biblioteca pode ser instalada facilmente através do gerenciador de bibliotecas da Arduino IDE</p>
</section>

<section>
    <h2>Instruções de Uso</h2>
    <p>Abaixo estão as etapas para usar o sistema em um ambiente com energia hidrocinética:</p>
    <ol>
        <li><strong>Preparação do Sistema Hidrocinético:</strong>
            <ul>
                <li>Instale a turbina hidrocinética em um fluxo de água constante e conecte-a a um gerador para gerar energia elétrica.</li>
                <li>Verifique a tensão e corrente de saída do gerador, assegurando que sejam compatíveis com os sensores e o Arduino.</li>
            </ul>
        </li>

  <li><strong>Modificação do Circuito:</strong>
            <ul>
                <li>Substitua os potenciômetros usados no protótipo por sensores reais, como o <code>INA219</code>, que mede a tensão e a corrente do sistema.</li>
                <li>Conecte o sensor ao Arduino usando comunicação I2C (SDA e SCL).</li>
            </ul>
        </li>

  <li><strong>Configuração do Arduino:</strong>
            <ul>
                <li>Carregue o código no Arduino que lê os dados do sensor <code>INA219</code> e exibe no LCD 16x2.</li>
                <li>O código exibe a tensão, corrente e potência gerada, e acende um LED de alerta se a potência cair abaixo de um limite configurado.</li>
            </ul>
        </li>

  <li><strong>Testar o Sistema:</strong>
            <ul>
                <li>Ligue a turbina e observe as leituras no display LCD.</li>
                <li>O sistema vai mostrar a tensão e potência gerada, e o LED de alerta acenderá se a potência for muito baixa.</li>
            </ul>
        </li>
</section>


<footer>
    <p>Integrantes: <br>Fernando Reis | Rm: 559505 <br>Miguel Aguiar | Rm: 559589 <br>Guilherme Leite | Rm: 560131 </p>
</footer>

</body>
</html>
