# Simple Shell

## Description
-----
This simple shell project is a program that can be compiled and launched from the command line. It contains the most basic features and functions of a shell program.
This program is capable to execute the most basic functions of a shell program, you can run ls -a command for example, pwd, env etc.
It can recognize a command no matter if it has spaces or not : "ls        -a".

## Quick Start
-----
1. Clone this repository to your local directory.

    Using ssh: ```$ git@github.com:Ang3l1t0/simple_shell.git```
  
    Using https: ```$ https://github.com/Ang3l1t0/simple_shell.git```
  
2. Compile the program:
    ```
    gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
    ```
3. Execute the shell
    ```
    ./hsh
    ```
4. After that you are goiog to see the prompt, and the shell will be ready for you!.
    ```
    $ 
    ```
    
## Syntax
-----
You can use the same syntax of any other shell:
  ```
  $ <command> <flags or options> <argument 1> <argument 2> ...
  ```
Non interactive way:
  ```
  $ <command> | ./hsh
  ```

### Examples
Interactive way: 
  ```
  $ /bin/ls
  ```
  ```
  $ ls -l
  ```
  ```
  $ cat file.txt
  ```
Non interactive way:
  ```
  $ echo "ls -l" | ./hsh
  ```
