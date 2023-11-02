#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);
void *_realloc(void *, unsigned int, unsigned int);
void *alloc(unsigned int);
void free_here(void *, unsigned int);
void *copy(void *, unsigned int);

#endif
