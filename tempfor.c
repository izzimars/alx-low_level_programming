#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global variables to keep track of the string and current position
static char *nextToken = NULL;

char *custom_strtok(char *str, const char *delim) {
    // If a new string is passed, update the nextToken pointer
    if (str != NULL) {
        nextToken = str;
    }

    // Skip leading delimiters
    while (*nextToken && strchr(delim, *nextToken) != NULL) {
        nextToken++;
    }

    // If at the end of the string, return NULL
    if (*nextToken == '\0') {
        return NULL;
    }

    // Find the end of the token
    char *tokenStart = nextToken;
    while (*nextToken && strchr(delim, *nextToken) == NULL) {
        nextToken++;
    }

    // Allocate memory for the token
    char *token = (char *)malloc(nextToken - tokenStart + 1);
    if (token == NULL) {
        return NULL; // Memory allocation failed
    }

    // Copy the token into the allocated memory
    strncpy(token, tokenStart, nextToken - tokenStart);
    token[nextToken - tokenStart] = '\0'; // Null-terminate the token

    return token;
}

int main() {
    char str[] = "Hello, world! This is a sample string.";
    char delimiters[] = " ,.!";
    char *token;

    // Get the first token
    token = custom_strtok(str, delimiters);

    // Loop to print each token
    while (token != NULL) {
        printf("Token: %s\n", token);

        // Get the next token
        token = custom_strtok(NULL, delimiters);
    }

    return 0;
}

