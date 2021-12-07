float factorial(int Num1){      //Funcion para calcular el factorial de un numero de manera recursiva 

    if (Num1<=1)
    return 1; 
    
    return Num1 * factorial(Num1-1); 

}; 

void Numbers_operation(Pila* pila, char operation, double Num1){   //Funcion para realizar aquellas funciones que requieran de dos elementos de la pila 

    float Num2; 
      Num2=pop(pila); 
    
      switch(operation){
    
          case '+':                                //Realiza la suma entro dos elementos de la pila y el resultado lo apila 
            push(pila, Num1+Num2);
            printf("%.2f\n", pila->top->value);
            break;
          
          case '*': 
            push(pila, Num1*Num2);                 //Realiza la multiplicacion entre dos elementos de la pila y el resultado lo apila 
            printf("%.2f\n", pila->top->value);     
            break; 
          
          case '/': 
            push(pila, Num1/Num2);                 //Realiza la division entre dos elementos de la pila y el resultado lo apila 
            printf("%.2f\n", pila->top->value);
            break;
          
          case '^': 
            push(pila, pow(Num1, Num2));           //Eleva el numero del tope de la pila a la potencia del numero que el sigue y el resultado lo apila 
            printf("%.2f\n", pila->top->value);
            break; 
          
          case '-':
            push(pila, Num1-Num2);                 //Realiza la resta entre dos elementos de la pila y el resultado lo apila 
            printf("%.2f\n", pila->top->value);
            break;  
          
          default:
            push(pila, Num2);                      //En caso de que no se ejecute ninguna operacion, apila de vuelta ambos numeros previamente extraidos de la pila 
            push(pila, Num1);  
            break;     
    
      } 

};

void Number_operation(Pila* pila, char *operation){ //Funcion para realizar aquellas operaciones que requiera de un unico elemento de la pila 

    double Num1;
    int fact; 
    char operationC;
      
    Num1=pop(pila);
    
    if(strcmp(operation, "sen")==0){                //Funcion para calcular el seno del primer elemento de la pila y el resultado lo apila 
      push(pila, sin(Num1));
      printf("%.2f\n", pila->top->value);}
          
    else if(strcmp(operation, "cos")==0){           //Funcion para calcular el coseno del primer elemento de la pila y el resultado lo apila 
      push(pila, cos(Num1));
      printf("%.2f\n", pila->top->value);}
          
    else if(strcmp(operation, "tan")==0){           //Funcion para calcular la tangente del primer elemento de la pila y el resultado lo apila 
      push(pila, tan(Num1)); 
      printf("%.2f\n", pila->top->value);}
        
    else if(strcmp(operation, "sqrt")==0){          //Funcion para calcular la raiz cuadrada del primer elemento de la pila y el resultado lo apila 
      push(pila, sqrt(Num1));
      printf("%.2f\n", pila->top->value);}
        
    else if(strcmp(operation, "ln")==0){            //Funcion para calcular el logaritmo neperiano o logaritmo natura del primer elemento de la pila y el resultado lo apila 
      push(pila, log(Num1)); 
      printf("%.2f\n", pila->top->value);}
           
    else if(strcmp(operation, "log")==0){           //Funcion para calcular el logaritmo base 10 del primer elemento de la pila y el resultado lo apila 
      push(pila, log10(Num1)); 
      printf("%.2f\n", pila->top->value);}
          
    else if(strcmp(operation, "arcsen")==0){        //Funcion para determinar el arcoseno del primer elemento de la pila y el resultado lo apila
      push(pila, asin(Num1));
      printf("%.2f\n", pila->top->value);  }
          
    else if(strcmp(operation, "arccos")==0) {       //Funcion para determinar el arcocoseno del primer elemento de la pila y el resultado lo apila 
      push(pila, acos(Num1)); 
      printf("%.2f\n", pila->top->value); }
          
    else if(strcmp(operation, "arctan")==0){        //Funcion para determionar del arcotangente del primer elemento de la pila y el resultado lo apila 
      push(pila, atan(Num1)); 
      printf("%.2f\n", pila->top->value);}
                    
    else if(strcmp(operation, "!")==0){            //Funcion para determinar el factorial del primero elemento de la pila, asignandolo a un auxiliar como un numero entero
      fact=(int)Num1; 
      push(pila, factorial(fact));
      printf("%.2f\n", pila->top->value); } 
          
    else if(pila->top!=NULL){
      operationC = operation[0]; 
      Numbers_operation(pila, operationC, Num1);}  
    else {
    
      push(pila, Num1); 
    
    }        
    
}; 
