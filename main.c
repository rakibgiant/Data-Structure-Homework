#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;
struct node {
    int data;
    Node* next;
};
Node *head;
//head = 0;
Node *create_node(int item,Node *next)
{
    for(int item=0;item<500;item++){
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL){  //if there are any error new_node will assign NULL
        printf("Error! Could Not Create A New Node\n");
        exit(1);
    }else{
            new_node->data = item;
    new_node->next = next;
        printf("data = %d\n",new_node->data);
         }

    }
    for(int item=501;item<1000;item++){
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL){  //if there are any error new_node will assign NULL
        printf("Error! Could Not Create A New Node\n");
        exit(1);
    }else{
            new_node->data = item;
    new_node->next = next;
        printf("data = %d\n",new_node->data);
         }

    }

    return 0;
}

int main()
{
create_node(0,1);

    return 0;
}
