#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
printf("RA2211042010050");
    char str[MAX_SIZE];
    char word[MAX_SIZE];
    int i, j, found;
    int strLen, wordLen;
    scanf("%[^\n]%*c",str);
   scanf("%s",word);
    strLen  = strlen(str);  ]
    wordLen = strlen(word); 
    for(i=0; i<strLen; i++)
    {
        found = 1;
        for(j=0; j<wordLen; j++)
        {
            if(str[i + j] != word[j])
            {
             found = 0;

                break;
            }
        }
        if(found == 1)
        {
          printf("%s is found at %d\n",word,i);
        }
    }
    return 0;
}
