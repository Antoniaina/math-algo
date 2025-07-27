# Integer Partition

## 🇬🇧 What is an Integer Partition?

An **integer partition** of a positive integer _n_ is a way of writing _n_ as a sum of positive integers, where the order of the addends does not matter.

For example, the integer 4 can be partitioned in 5 ways:
- 4
- 3 + 1
- 2 + 2
- 2 + 1 + 1
- 1 + 1 + 1 + 1

This program computes the number of possible partitions for a given integer using an **efficient dynamic programming (bottom-up) algorithm**. This approach is much faster than the naive recursive method, especially for large numbers.

## How to compile

Open a terminal in this folder and run:
```
$ gcc -o integer-partition integer-partition.c
$ ./integer-partition
```
---

## 🇫🇷 Qu'est-ce qu'une partition d'entier ?

Une **partition d'un entier** positif _n_ est une façon d'écrire _n_ comme une somme d'entiers positifs, sans tenir compte de l'ordre des termes.

Par exemple, l'entier 4 peut être partitionné de 5 façons :
- 4
- 3 + 1
- 2 + 2
- 2 + 1 + 1
- 1 + 1 + 1 + 1

Ce programme calcule le nombre de partitions possibles pour un entier donné en utilisant un **algorithme efficace de programmation dynamique (tabulaire, itératif)**. Cette méthode est bien plus rapide que la version récursive naïve, surtout pour les grands nombres.

## Comment compiler

Ouvrez un terminal dans ce dossier et tapez :
```
$ gcc -o integer-partition integer-partition.c
$ ./integer-partition
```
---