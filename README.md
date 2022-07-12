# C - Stacks, Queues - LIFO, FIFO

## The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.
### Monty byte code files
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
<br>
```
julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
push 3$
    pall  $
push 4$
    push 5  $
    push    6 $
pall$
julien@ubuntu:~/monty$
```
Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:
```
julien@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/monty$
```
### The monty program
<b>Usage:</b> monty file<br>
where file is the path to the file containing Monty byte code<br>
If the user does not give any file or more than one argument to your program, print the error message<br>
<b>USAGE:</b> monty file, followed by a new line, and exit with the status EXIT_FAILURE<br>
If, for any reason, it’s not possible to open the file, print the error message Error: Can't open file <code>< file ></code>, followed by a new line, and exit with the status EXIT_FAILURE<br>
where <code>< file ></code> is the name of the file<br>
If the file contains an invalid instruction, print the error message <code><b>L< line_number >:</b> unknown instruction <b>< opcode ></b> </code>, followed by a new line, and exit with the status EXIT_FAILURE<br>
where is the line number where the instruction appears.<br>
Line numbers always start at 1<br>
The monty program runs the bytecodes line by line and stop if either:<br>
It executed properly every line of the file<br>
It finds an error in the file an error occured<br>
If you can’t malloc anymore, print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.<br>
You have to use malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, …)<br>
