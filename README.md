# Pascals Triangle

In mathematics, Pascal's triangle is a triangular array of the binomial coefficients that arises in probability theory, combinatorics, and algebra. In much of the Western world, it is named after the French mathematician Blaise Pascal, although other mathematicians studied it centuries before him in India, Persia, China, Germany, and Italy.

This program is my implementation of Pascals Triangle in C. It is still a bit rough, but it works.

### My approach to solving this problem:

1. There are 2 dynamically allocated and reallocated arrays `odd_array` and `even_array`. Depending upon the line number, odd or even, these arrays are printed.
2. For the first two lines, the arrays are initialized, but every next time, the arrays are generated.
3. The `generate_array` function is responsible to generate the new line from the previous array.
4. The function takes 3 params, 1st is array to be generated, 2nd is the number of elements in the array to be generated, and the last is previous array for reference.

### How to run the program on windows machine

```
> gcc pascal.c
> .\a.exe
```

Sample output

```
Enter no. of lines: 5
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
```
