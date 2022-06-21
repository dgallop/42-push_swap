# push_swap

Ordena números usando dos stacks llamados A y B y algunas instrucciones propias:

## Instrucciones

|**Código**|**Instrucción**|**Descripción**|
|:----------:|:-----------:|:-----------:|
|```sa```| swap a | intercambia los dos primeros elementos encima del stack a. |
|```sb```| swap b | intercambia los dos primeros elementos encima del stack a. |
|```ss```| swap | ```sa``` y ```sb``` a la vez. |
|```pa```| push a | toma el primer elemento del stack b y lo pone encima del stack a. No hace nada si b está vacío. |
|```pb```| push b | toma el primer elemento del stack a y lo pone encima del stack b. No hace nada si b está vacío. |
|```ra```| rotate a | desplaza hacia arriba todos los elementos del stack a una posición, de forma que el primer elemento se convierte en el último. |
|```rb```| rotate b | desplaza hacia arriba todos los elementos del stack b una posición, de forma que el primer elemento se convierte en el último. |
|```rr```| rotate | ```ra``` y ```rb``` a la vez. |
|```rra```| reverse rotate a | desplaza hacia abajo todos los elementos del stack a una posición, de forma que el último elemento se convierte en el primero. |
|```rrb```| reverse rotate b | desplaza hacia abajo todos los elementos del stack b una posición, de forma que el último elemento se convierte en el primero. |
|```rrr```| reverse rotate | ```rra``` y ```rrb``` a la vez. |

## Sobre el algoritmo

|**Números dados**|**Método**|**Descripción**|**Número de instrucciones**|
|:----------:|:-----------:|:-----------:|:--------:|
|```3```|```Insertion sort```| ordenacion basada en todos los casos posibles. | ```1``` |
|```5```|```Insertion sort```| ordenacion basada en todos los casos posibles. | ```7-10``` |
|```100```|```Based on length```| los números son ordenados en base a la longitud de los numeros. | ```1084``` |
|```500```|```Radix```| basado en binario, se ordenan los números positivos y después los mi algoritmo ordena los negativos | ```6784``` |

## Links útiles

+ [Generador de números](https://pinetools.com/es/generador-numeros-aleatorios)
+ [Visualizer](https://github.com/o-reo/push_swap_visualizer)
+ [Explicación del radix](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)
+ [Tester](https://github.com/lmalki-h/push_swap_tester)
