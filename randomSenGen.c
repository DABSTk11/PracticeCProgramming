#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const char* article[] = {"the", "a", "one", "some", "any"};
    const char* noun[] = {"boy", "girl", "dog", "town", "car"};
    const char* verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
    const char* preposition[] = {"to", "from", "over", "under", "on"};

    int articleSize = sizeof(article) / sizeof(char*);
    int nounSize = sizeof(noun) / sizeof(char*);
    int verbSize = sizeof(verb) / sizeof(char*);
    int prepositionSize = sizeof(preposition) / sizeof(char*);
    
    for(int i = 0; i < 20; i++)
    {

        char sentence[200] = "";

        // send formatted output to the string
        sprintf(sentence, "%s %s %s %s %s %s!", 
                article[rand() % articleSize],
                noun[rand() % nounSize],
                verb[rand() % verbSize],
                preposition[rand() % prepositionSize],
                article[rand() % articleSize], 
                noun[rand() % nounSize]);

        //capitalize first letter
        if(sentence[0] >= 'a' && sentence[0] <= 'z')
        {
            sentence[0] -= 'a' - 'A';
            /* 'a' - 'A' is 32; difference in ASCII between lowercase and corresponding uppercase letters*/

        }
        printf("%s\n", sentence);
    }   // for loop closing

    return 0;

}