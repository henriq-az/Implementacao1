#ifndef JOB_H
#define JOB_H
#define MAX_JOBS 64

typedef struct {
    int id;
    int pid;
    char *nome;
    bool rodando;
}

void atualizaJobs();
cmd_jobs(char* tokens[], int num_tokens);
cmd_start(char* tokens[], int num_tokens);
cmd_wait(char* tokens[], int num_tokens);

#endif