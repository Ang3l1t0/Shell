# :computer: :shell: Simple Shell

## :page_with_curl: escription
-----
This simple shell project is a program that can be compiled and launched from the command line. It contains the most basic features and functions of a shell program.
This program is capable to execute the most basic functions of a shell program, you can run ls -a command for example, pwd, env etc.
It can recognize a command no matter if it has spaces or not : "ls        -a".

## :runner: Quick Start
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

### :memo: Examples
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
## :file_folder: Files

| File Name | Description |
| --- | --- |
| 01x1_main.c | Execute the shell loop |
| 02x1_find_fpth.c | Looks for the binary via full path |
| 02x2_exe_commands_path.c | Executes the given command via full path. |
| 02x3_node_create.c | Creates new nodes with each directory in PATH |
| 02x4_find_fname.c | Looks for existence and permissions of the binary |
| 02x5_exe_commands_binary.c | Executes the given command via binary name |
| 03x1_puts.c | Prints a string |
| 03x2_print_integer.c | Prints integer values |
| 03x3_reverse_string.c | Reverse a string (ItoA function) |
| 03x4_perror.c | It's a error showed to stdout |
| 04x1_recognize_command.c | Makes the job of cut the command |
| 04x2_check_path.c | Check everything to know about the command |
| 04x3_check_flag.c | Used for print error messages |
| 05x1_strlen.c | Gives the length of a given string |
| 05x2_strdup.c | Returns a pointer to a newly allocated space in memory |
| 05x3_strcat.c | Write a function that concatenates two strings |
| 05x4_strcmp.c | Compares two strings |
| 06x1_add_node_end.c | Add new node at the end of a linked list |
| 06x2_calloc.c | Allocates memory for an array, using malloc |
| 06x3_getenv.c | Gets a wanted environment variable |
| 06x4_memcpy.c | Copies n bytes from src to dest |
| 06x5_free_linked.c | Free all memory data allocated |
| AUTHORS |  File containing contributing authors |
| README.md |  Contains information about this project |
| generate-authors.sh | Bash script to generate the `AUTHORS` |
| man_1_simple_shell | Manual page for our simple shell |
| sh.h | Shell header file |


## :black_nib: Authors

- Angel Palma - [Github](https://github.com/Ang3l1t0) , [Twitter](https://twitter.com/Ang3lp)
- Juliana Chois - [Github](https://github.com/julianachois) , [Twitter](https://twitter.com/julianachois)

See also the list of [contributors](https://github.com/Ang3l1t0/simple_shell/graphs/contributors) who participated in this project.
