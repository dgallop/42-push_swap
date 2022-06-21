# push_swap

Sort numbers using two stacks also using some own-made instructions:

## Instructions

|**Code**|**Instruction**|**Description**|
|:----------:|:-----------:|:-----------:|
|```sa```| swap a | swap the first 2 elements at the top of stack a. |
|```sb```| swap b | swap the first 2 elements at the top of stack b. |
|```ss```| swap | ```sa``` and ```sb``` at the same time. |
|```pa```| push a | take the first element at the top of b and put it at the top of a. Do nothing if b is empty. |
|```pb```| push b | take the first element at the top of a and put it at the top of b. Do nothing if a is empty. |
|```ra```| rotate a | shift up all elements of stack a by 1. The first element becomes the last one. |
|```rb```| rotate b | shift up all elements of stack b by 1. The first element becomes the last one. |
|```rr```| rotate | ```ra``` and ```rb``` at the same time. |
|```rra```| reverse rotate a | shift down all elements of stack a by 1. The last element becomes the first one. |
|```rrb```| reverse rotate b | shift down all elements of stack b by 1. The last element becomes the first one. |
|```rrr```| reverse rotate | ```rra``` at ```rrb``` the same time. |

## About Algorithm

|**Numbers given**|**Method**|**Description**|**Number of instructions**|
|:----------:|:-----------:|:-----------:|:--------:|
|```3```|```Insertion sort```| sort based on all the possible cases. | ```1``` |
|```5```|```Insertion sort```| sort based on all the possible cases. | ```7-10``` |
|```100```|```Based on length```| numbers are sorted based on length | ```1084``` |
|```500```|```Radix```| sort non-negaitves numbers first based on radix an later negatives (if needed). | ```6784``` |

## Useful links

+ [Numbers' generator](https://pinetools.com/es/generador-numeros-aleatorios)
+ [Visualizer](https://github.com/o-reo/push_swap_visualizer)
+ [Radix explanation](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)
+ [Tester](https://github.com/lmalki-h/push_swap_tester)
