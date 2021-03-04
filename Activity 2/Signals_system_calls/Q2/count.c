#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;

    char ch;
    int characters, words, lines;


    //Opening of the file
    file = fopen("file1.txt", "r");


    // File open close status
    if (file == NULL)
    {
           exit(EXIT_FAILURE);
    }

    // Main logic
    
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        /* Update lines */
        if (ch == '\n' || ch == '\0')
            lines++;

        /* Update words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

  
    /* Print and closure of the files */
    printf("Characters= %d\n",characters);
    printf("Words= %d\n",words);
    printf("Lines= %d\n",lines);
    fclose(file);

    return 0;
}
