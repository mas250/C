#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list {
    char *string;
    struct list *next;
};

typedef struct list LIST;

int main(void) {
    FILE *fp;
    char stations[1024];
    LIST *current, *head;
    char *stdlist[1024];

    int i = 0;
    head = current = NULL;
    fp = fopen("adjacencies.txt", "r");

    while(fgets(stations, sizeof(stations), fp)){

    	stdlist[i] = strdup(stations);
    	i++;	

        LIST *node = malloc(sizeof(LIST));
        node->string = strdup(stations);//note : strdup is not standard function
        node->next =NULL;

        if(head == NULL){
            current = head = node;
        } else {
            current = current->next = node;
        }
    }
    fclose(fp);
    //test print
    for(current = head; current ; current=current->next){
    	
        printf("%s", current->string);
    
    }

    //need free for each node
    return 0;
}