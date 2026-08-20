#ifndef TASK_H
#define TASK_H

#define MAX_NOME 64
#define MAX_TASKS 64
#define MAX_ARGS 32

typedef struct {
    char nome[MAX_NOME];
    char *args[MAX_ARGS];
    int argc;
} Task;

Task *acharTask(char *nome);
void cmd_task(char* tokens[], int num_tokens);
void cmd_input(char* tokens[], int num_tokens);
void cmd_output(char* tokens[], int num_tokens);
void cmd_append(char* tokens[], int num_tokens);
#endif