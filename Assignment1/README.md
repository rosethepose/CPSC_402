# CC2020: Assignment 1

This is a warm up exercise for compiler constructions. Technically, the assignment is about searching for a string in a text. From a compilers point of view, essentially the same algorithms will be used by the lexer to split a string of characters into the tokens that are then parsed into the abstract syntax tree. Of course, regular expressions search has many more applications.

## Introductory Remarks

Source code is stored as a file. So we need to know how to process files. A file is a sequence of characters. The following questions ask you to search for certain sequences of characters in a given file. The following should be considered.

- For efficiency reasons, the search algorithm should have linear time complexity. In fact, the algorithm should process any character only once.

- Your solution should use as data structure only files with operations for open, close, read and write. Moreover, files should be read only one character at a time (and each character should be read only once during a search). Sam Balco (thanks!) provided a [primer](https://hackmd.io/s/H1N5cUkVN#).

- To make things easier, don't think of a file as a sequence of lines, just as a sequence of characters. The end of line symbol can be treated as just another character.

## The Task

With the introductory remarks in mind, for each of the 6 questions below, write
- a specification of the solution in form of a DFA (preferably as a picture in a pdf file),
- an implementation of the solution in Java or C/C++ or Python or Haskell (ask me if you want to use a different language), which answers the following questions.
- I want to test your solutions with my own input files. There must a description of how to run your algorithms on different inputs.

Name your specifications 1.pdf to 3.pdf and similarly for your programs. Programs that do not run will get no credit.

## The Questions

Below, `*` is the usual wildcard that can stand for any number of any characters. If the answer to the question is yes the program should output a list of numbers containing the positions in the file where the last character of the sequence in question appears. For each question, also submit a pdf with a picture of the DFA you took as a specification of your code (worth 1 point for each of the questions).


1. Does the file contain the sequence `abab`? For example, if the file is `abababcabababc` the output should be `[4,6,11,13]`. **(3 out of 9)**

2. Does the file contain the sequence `abc*cba`? Here, `*` is a wildcard that stands for zero or more occurrences of any character. For example, if the file is `abccbabcbacba` the output should be `[6,10,13]`. **(3 out of 9)**

3. Does the file contain the sequence `aa` or `abb`? For example, if the file is `aaabbaabb`, the output should be `[2,3,5,7,9]`. The challenge here is to not write a program that runs twice through the file, once to search for `aa` and once for `aab`, but to find a way of running through the file only once and to simultaneously search for both strings.  **(3 out of 9)**

## Concluding Remarks

If you want to try something extra ambitious, instead of a program that searches for a specific string such as `abab` in item 1, write one single program that takes as input an arbitrary word and finds all occurrences of the word. Going even further, it is also possible to write programs that search for expressions containing wildcards `*` and or's (written as `+`) such as `aa*bb` and `aa+abb`. But to do this in a principled way, one would need a language for such expressions (they are called regular expressions) and then a compiler that compiles regular expressions to DFAs ... which is something that requires technology from a compilers course, so you might be interested to come back to this at the end of the semester.


[^footnote1]: Note that the requirement to process any character only once would also extend to any libraries you might want to use. In other words, if you want to reason about how efficient your algorithm is you need to take into account the efficiency of the libraries you use. This is one reason why we restrict the use of libraries for this exercise.
