#include "task.h"
#include <stdio.h>
#include <string.h>
static Task tasks[MAX_TASKS];
static int num_tasks = 0;
Task *acharTask(char *nome) {
    for (int i = 0; i < num_tasks; i++) {
        if (strcmp(tasks[i].nome, nome) == 0) {
            return &tasks[i];
        }
    }
    return NULL;
}

int main() {
    
}

