#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(int argc, char *argv[])
{
    char stringHolder[200];
    char c = '.';
    int isDone = 0;
    int i, j;
    int numWords = 0;
    int numLines = 0;
    bool readingWord = false;

    printf("Enter your strings\n");
    
    
    while (fgets(stringHolder, 20, stdin) != NULL && isDone == 0)
    {
        for(i=0; stringHolder[i] != '\0'; i++)
        {   
            if(stringHolder[i] == '\n')
            {
                numLines++;
            }

            /*
            if(stringHolder[i] == ' ' && stringHolder[i] == '\n' && stringHolder[i] == '\t')
            {
                readingWord = false;
            }
            else
            {
                readingWord = true;
                if(readingWord == true)
                    numWords++;
            }
            */
            
            if(stringHolder[i] == ' ' && stringHolder[i+1] != ' ')
                numWords++;
            if(stringHolder[i] == c)
            {
                isDone = 1;
            }
        }       
    }

    printf("%s\n", stringHolder);
    printf("%d\n", numLines);
    printf("Number of words: %d\n", numWords + 1);
    

    return 0;
}