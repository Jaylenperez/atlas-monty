#include "monty.h"

/**
 * initialize_arguments - Initializes a pointer to
 * arg_s structure.
 */
void initialize_arguments()
{
    arguments = malloc(sizeof(arg_t));
    if (arguments == NULL)
        malloc_failed();
    
    arguments->stream = NULL;
    arguments->line = NULL;
}