//
// Created by Ryan Stenersen on 9/11/23.
//

#include <stdio.h>
#include <stdlib.h>
#include "getTokens.h"

int main()
{

    char str[255];
    char **arrayOfTokens;
    int numberOfTokens;

    printf("Enter a string: ");
    fgets(str, 255, stdin);

    numberOfTokens = getTokens(str, &arrayOfTokens);

    printf("Number of Tokens: %d\n", numberOfTokens);

    for(int i = 0; i < numberOfTokens; i++)
    {
        printf("Token %d: %s\n", i, arrayOfTokens[i]);
        free(arrayOfTokens[i]);
    }
    free(arrayOfTokens);


    return 0;
}