#ifndef MAIN_H
#define MAIN_H
#define _POSIX_C_SOURCE 200809L

/* standard library functions */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/** Global environment */
extern char **environ;




/**
 * struct linked_path - This is a linked list containing
 * ---------------------Each diretory in the path
 * @dir: This is a directory Path
 * @next: is apointer to the next directory
 */
typedef struct linked_path
{
	char *dir;
	struct linked_path *next;
} linked_path;




char *_strtok(char *str, const char *delim);
char *_getenv(const char *name);
linked_path *link_path(void);
pid_t execute(char *command);


#endif /* MAIN_H */
