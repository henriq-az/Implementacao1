#ifndef CONVERTE_H
#define CONVERTE_H

#define MAX_LINHA 256
#define MAX_TOKENS 32

int tokenize(char *linha, char *tokens[], int max_tokens);
void linha_cmd(char *linha);

#endif