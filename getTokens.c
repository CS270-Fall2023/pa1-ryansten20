//
// Created by Ryan Stenersen on 9/11/23.
//

#include "getTokens.h"

int getTokens(char *s, char ***args)  // or int getTokens(char s[], char **args[]);
{
    int numTokens = 0; //counter for num of tokens/ return value
    int start = 0; // start index
    int end = -1; //end index, -1 so if first char is a space it doesn't copy

    *args = malloc(255 * sizeof(char *)); //allocate space for args

    for (int i = 0; i <= strlen(s); i++) // loop while i is less than or equal to the length of s
    {
        if (isspace(s[i])) //if space
        {
            if (start <= end)
            {
                int token = end - start + 1; // find length of token and add 1 for null
                (*args)[numTokens] = malloc(token + 1); //allocate space for token + 1 for null
                strncpy((*args)[numTokens], s + start, token); // copy string length of token
                numTokens++; // add one and move on to next token
            }
            start = i + 1;// move start to next char
        }
        else //no space, continue
        {
            if (start <= end) // still in token
            {
                end = i; // if no space, end is now i
            }
            else //start new token
            {

                end = i; //reset to current index
                start = i;
            }
        }
    }

    return numTokens;

}
