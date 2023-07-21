#include <stdio.h>
#include <stdlib.h>

struct CharFrequency
 {
    char character;
    int frequency;
 };


void printCharactersByFrequency(char* text)
 {
    struct CharFrequency frequencyPairs[256] = {0};
    int i;
    for (i = 0; text[i] != '\0'; i++)
        {
            frequencyPairs[(int)text[i]].character = text[i];
            frequencyPairs[(int)text[i]].frequency++;
        }
    sortFrequencyPairs(frequencyPairs, 256);
    for (i = 0; i < 256; i++)
        {
            if (frequencyPairs[i].frequency > 0)
             {
                printf("%c: %d\n", frequencyPairs[i].character,frequencyPairs[i].frequency);
            }
        }
}
void sortFrequencyPairs(struct CharFrequency pairs[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1-i; j++)
         {
            if (pairs[j].frequency < pairs[j + 1].frequency)
             {
                struct CharFrequency temp = pairs[j];
                pairs[j] = pairs[j + 1];
                pairs[j + 1] = temp;
            }
        }
    }
}
int main()
{
    char text[] = "priyadharshini";
    printCharactersByFrequency(text);
    return 0;
}
