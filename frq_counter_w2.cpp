#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_WORD_LEN 50

int main() {
    char paragraph[10000];
    char words[MAX_WORDS][MAX_WORD_LEN];
    int count[MAX_WORDS] = {0};
    int wordCount = 0;

    printf("Enter a paragraph:\n");
    fgets(paragraph, sizeof(paragraph), stdin);

    char *word = strtok(paragraph, " ,.-\n");
    while (word != NULL) {
        for (int i = 0; word[i]; i++) {
            word[i] = tolower(word[i]);
        }

        int found = 0;
        for (int i = 0; i < wordCount; i++) {
            if (strcmp(words[i], word) == 0) {
                count[i]++;
                found = 1;
                break;
            }
        }

        if (!found) {
            strcpy(words[wordCount], word);
            count[wordCount]++;
            wordCount++;
        }

        word = strtok(NULL, " ,.-\n");
    }

    printf("Word frequencies:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s: %d\n", words[i], count[i]);
    }

    return 0;
}
