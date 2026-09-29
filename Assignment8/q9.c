#include <stdio.h>
#include <string.h>
int main() 
{
    char sentence[200], word[50];
    char *result;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    printf("Enter a word: ");
    scanf("%s", word);
    result = strstr(sentence, word);
    if (result != NULL)
    {
      printf("Word found at position: %ld\n", result - sentence + 1);
    } 
    else 
    {
      printf("Word not found.\n");
    }
    return 0;
}
