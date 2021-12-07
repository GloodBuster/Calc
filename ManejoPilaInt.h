typedef struct Node{   //Estructura de el tope y los nodos de la pila 

    float value;
    struct Node* next; 

}Node; 

typedef struct Pila{    //Estructura de la pila 

    Node* top; 

}Pila;

Pila* new_Pila(void){  //Funcion para crear una nueva pila y asegurar que se cree correctamente

    Pila* pila = (Pila *) malloc(sizeof(Pila));
    pila->top=NULL;
     
    return pila; 

}; 

Node *new_node(float value){  //Funcion para crear un nuevo nodo de la pila

    Node *newn = (Node *) malloc(sizeof(Node));
    
    newn->value=value; 
    newn->next=NULL; 
    
    return newn; 

}; 

void destroy_node(Node *Node){  //Funcion para destruir un nodo de la pila y no dejar memoria basura

    Node->next=NULL; 
    free(Node); 

};

void push(Pila* pila, float value){  //Funcion para apilar elementos flotantes en la lista 

    Node* node=new_node(value);
    node->next=pila->top; 
    pila->top=node; 

}; 

int pop(Pila* pila){  //Funcion para extraer un elemento de la pila 

    if (pila==NULL)
        return -1; 
        
    Node* eliminar=pila->top; 
    float value=pila->top->value; 
    pila->top=pila->top->next; 
    destroy_node(eliminar);
    
    return value; 

};   

void SwapP(Pila *pilaI){  //Funcion para intercambiar el tope de la pila y el elemento que le sigue 
	float aux;
	aux = pilaI->top->value;
	pilaI->top->value = pilaI->top->next->value;
	pilaI->top->next->value = aux;
}





