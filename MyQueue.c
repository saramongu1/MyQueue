#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* previous;
};

struct MyQueue {
    struct Node* back;
    struct Node* front;
};

struct MyQueue* newQueue() {
    struct MyQueue* queue = (struct MyQueue*)malloc(sizeof(struct MyQueue));
    queue->back = NULL;
    queue->front = NULL;
    return queue;
}

void push(struct MyQueue* queue, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->previous = NULL;

    if (queue->front == NULL) {
        queue->front = newNode;
        queue->back = newNode;
    } else {
        queue->back->next = newNode;
        newNode->previous = queue->back;
        queue->back = newNode;
    }
}

int poll(struct MyQueue* queue) {
    if (queue->front == NULL) {
        return -1;  
    }

    struct Node* aux = queue->front;
    int data = aux->data;

    queue->front = queue->front->next;  
    if (queue->front != NULL) {
        queue->front->previous = NULL;
    } else {
        queue->back = NULL; 
    }

    free(aux);  
    return data;
}

int peek(struct MyQueue* queue) {
    if (queue->front != NULL) {
        return queue->front->data;
    } else {
        return -1;  
    }
}

int isEmpty(struct MyQueue* queue) {
    return queue->front == NULL;
}


int main() {

    struct MyQueue* queue = newQueue();
    int option = 0;
    int num;

    while(option != 5){
        printf("\n----------Cola en C-----------\n");
    printf("Prueba los diferentes metodos de una cola\n");
    printf("1. push\n");
    printf("2. poll\n");
    printf("3. peek\n");
    printf("4. isEmpty\n"); 
    printf("5. Salir\n");

        scanf("%i", &option);

        switch(option)
        {
        case 1:
        printf("Ingresa el numero que quieras agregar a la cola\n");
        scanf("%i", &num);
        push(queue, num);
        printf("Se agrego %i a la cola", num);
            break;
        case 2:
        num = poll(queue);
        if(num == -1){
            printf("No hay ningun elemento para extraer");
        }else{
             printf("Se extrajo %i de la cola", num);
        }
            break;
        case 3:
        num = peek(queue);
         if(num == -1){
            printf("No hay ningun elemento en la cima");
        }else{
             printf("El valor de la cima es: %i", peek(queue));
        }
            break;
        case 4:
         if (isEmpty(queue)) {
            printf("La cola esta vacia.\n");
        } else {
            printf("La cola NO esta vacia.\n");
         }
            break;
        default:
            break;
        }
    }
    return 0;
}
