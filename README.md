# AED_Trabalho02
Trabalho Prático 02 - AED

## Sorting Methods
O Sorting Methods, é um trabalho prático realizado no âmbito da unidade curricular de *Algoritmos e Estruturas de Dados*, e tem
como principal objetivo estudar o tempo de execução de algumas rotinas de ordenação.

### Pré-requesitos 
Para compilar os programas, é vital ter um Compilador de C instalado na máquina (p.e. gcc).
O projeto foi desenvolvido com recurso ao IDE VSCode, e com recurso ao Matlab e ao gnuplot para criar os gráficos dos tempos de execução. 

### Compilar
Para compilar o programa, usamos o *makefile* da seguinte maneira:
```
make sorting_methods
```

O programa está capacitado com um teste, onde são testadas todas as rotinas de ordenação da seguinte forma:
```
./sorting_methods -test
```

Para correr o programa, e guardar os resultados dos tempos de execução das rotinas de ordenação, num 
ficheiro .txt, executamos o seguinte código:
```
./sorting_methods -measure | tee output.txt
```

### Relatório
Este trabalho prático está acompanhado por um [Relatório](/Relatório), onde são explicados e comentados os resultados obtidos.

## Autores

 - **[Pedro Sobral](https://github.com/TheScorpoi) - 98491**
 - **[André Freixo](https://github.com/andre180701) - 98495**
 - **[Marta Fradique](https://github.com/MartaFradique) - 98629**
