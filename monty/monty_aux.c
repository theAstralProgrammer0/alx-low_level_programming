#include "monty.h"

void free_glob(glob_t *glob)
{
    if (glob == NULL) {
        // Nothing to free if glob is already NULL
        return;
    }

    // Free individual members first:
    if (glob->tokens) {
        for (int i = 0; glob->tokens[i]; i++) {
            free(glob->tokens[i]);
        }
        free(glob->tokens);
    }

    // Free stack elements (if applicable):
    if (glob->stack && *glob->stack) {
        stack_t *current = *glob->stack;
        while (current) {
            stack_t *next = current->next;
            free(current);
            current = next;
        }
    }

    // Free the global struct itself:
    free(glob);
}
