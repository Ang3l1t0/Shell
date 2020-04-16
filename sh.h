#ifndef _SHELL_
#define _SHELL_

/*LIBRARIES*/
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

/*VARIABLE*/
extern char **environ;

/* MACROS */
#define DELIM " \n\t\r\a\""
#define ANALYZER(pos1, pos2) ((pos1 == '.' && pos2 == '/') \
				|| (pos1 == '/') || (pos1 == '.' && pos2 == '.'))
		
/*STRUCTURE*/
/**
   * struct dirs - It's a structure whose function
    *                      is get directories names.
	 * @directory: Directory name.
	  * @next: Next node to traverse.
	   */
typedef struct dirs
{
		char *directory;
			struct dirs *next;
} dir;

/*----PROTOTYPES----*/

/*STRING UTILITIES*/
char *_strdup(char *string);
size_t _strlen(char *string);
char *_strcat(char *src, char *dest);
int _strcmp(char *s1, char *s2);
char *_memcpy(char *dest, char *src, unsigned int n);
void _reverse(char *string);

/*PRINTERS*/
void _puts(char *string);
void _perror(char *shell_name, char *com, char *msg, int count);
void print_integer(int integer);

/*MEMORY WORKERS*/
void *_calloc(unsigned int nmemb, unsigned int size);

/*com FINDERS*/
int recognize_command(char *com, int count, char *shell_name);
int check_for_path(char **av, int count, char *shell_name);
void check_flag(int flag, char *shell_name, char *com, int count);
int find_fpth(char *com);
int exe_path(char **av);
int find_fname(char *com);
dir *path_helper(void);
int exe_fname(char **av);

/*LINKED LIST HELPERS*/
dir *add_node_end(dir **head, char *string);
void free_linked(dir *head);

/*SIGNAL HANDLERS*/
void signalHandler(int value);

/*GET ENVIRONMENT*/
char *_getenv(char *variable);

#endif /* _SHELL_ */

