#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct word_node {
    char word[33];
    struct word_node *next;
};
typedef struct word_node WORD_NODE;
typedef WORD_NODE *WORD_NODE_PTR;
void lowercaseTheWord(char[]);
char lowerCaseWord[33];

int main() {
    int x = 1;
    char tempWord [33];
    //Define a first pointer
    WORD_NODE_PTR firstPointer = NULL;
    firstPointer = (WORD_NODE_PTR) malloc(sizeof(struct word_node));
    WORD_NODE_PTR currentPointer = NULL; //Current Pointer
    currentPointer = (WORD_NODE_PTR) malloc(sizeof(struct word_node));
    WORD_NODE_PTR previousPointer; //Previous Pointer Doubles as a previous pointer for bookmark
    previousPointer = (WORD_NODE_PTR) malloc(sizeof(struct word_node));
    WORD_NODE_PTR bookmarkPointer = NULL; //Bookmarks the node with word bigger then tempWord
    bookmarkPointer = (WORD_NODE_PTR) malloc(sizeof(struct word_node));
    WORD_NODE_PTR tail;
    tail = (WORD_NODE_PTR) malloc(sizeof(struct word_node));
    int status = 1; //0 denotes duplicate or first node initialized

    while (x)
    {
        status = 1; //Reset status
        memset(lowerCaseWord,0,sizeof(lowerCaseWord));
        memset(tempWord,0,sizeof(tempWord));
        currentPointer = previousPointer = firstPointer;
        printf("Please enter a word: ");
        fgets(tempWord,33,stdin);
        
        lowercaseTheWord(tempWord);
        if (strcmp(lowerCaseWord,"***\n") == 0)
        {
            x = 0;
            break;
        }

        printf("error");
        fflush(stdout);
        //Create new node
        WORD_NODE_PTR newNode;
        newNode = (WORD_NODE_PTR) malloc(sizeof(struct word_node));
        strncpy(newNode->word,tempWord,33);

        if (firstPointer == NULL) //Initialize
        {
            firstPointer = newNode;
            tail = newNode;
            continue;
        }
        currentPointer = firstPointer; //Set back to first pointer for search purposes
        //Check for duplicates
        while(currentPointer != tail) //Loops through the list
        {
            //Lets take this opportunity to see where to place the node
            int strCmpResult = strcmp(lowerCaseWord,currentPointer->word);
            if (strCmpResult == 0) //Duplicate word
            {
                status = 0;
                printf("Duplicate detected!\n");
                break;
                //Goes back into loop to ask for more input
            }
            else if (strCmpResult > 0) //tempWord is bigger
            {
                previousPointer = currentPointer;
                 //Lets bookmark this for later use
            }
            else //pointedNode's word is bigger
            {
                bookmarkPointer = currentPointer;
                break;
                //TODO:Possibly break here for optimization
            }
            currentPointer = currentPointer->next; //Move to next node;
        }

        if (status == 1) //Means no issues were found/Lets insert the node
        {
            //printf("Changing Nodes\n");

            if (currentPointer == tail)
            {
                tail->next = newNode;//Previous tail points to this node now
                tail = newNode; //tail is now this node
            }
            else
            {
                previousPointer -> next = newNode; //Connect previousNode to newNode
                newNode->next = bookmarkPointer; //Connect newNode to the nextNode
                bookmarkPointer = NULL;
            }


        }
    }
    currentPointer = firstPointer;
    printf("%s","All the entered words in order:\n ");
    while (currentPointer != tail)
    {
        printf("%s",currentPointer->word);
        currentPointer = currentPointer->next;
    }
    printf("%s",currentPointer->word);
    return 0;
}
void lowercaseTheWord(char * initialWord)
{
    for (int i = 0; i < strlen(initialWord); i++ )
    {
        lowerCaseWord[i] = tolower(initialWord[i]);
    }
}

