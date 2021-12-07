int Check(char *element){               //Funcion para determinar si la variable es un numero o un operador
	if (isdigit(element[0])!=0){
	   return 1;
	}   
	return 0;
}

void Administrator(char *element,Pila* pila){    //Funcion para agregar elementos a la pila o ejecutar una operacion dependiendo del caracter introducido 
	if (Check(element) == 1){
		push(pila, atoi(element));
	}
	else if (Check(element) == 0){
	
		if (pila->top!=NULL)
		Number_operation(pila, element);
	}

}

void Administrator_Mis(char *element, Pila* pila){   //Funcion para determinar si el usuario pide una funcion de manejo de pila o conversion de unidades
	if (strcmp(element, "RCL") == 0){
		printf("%.2f\n", pila->top->value);
	}
	else if(strcmp(element, "CLR")==0){
	
	        Clr(pila);
	}
	else if(strcmp(element, "DSP")==0){
	
		Display(pila);
		
	}
	else if(strcmp(element, "SWAP")==0){
	
		SwapP(pila);
		
	}
	else if(strcmp(element, "Binary")==0){
	
		printf("%li\n",decimalToBinary(pila->top->value));
	
	}
	else if(strcmp(element, "Octal")==0){
	
         	printf("%i\n", convertDecimalToOctal(pila->top->value));
	
	}
	else if(strcmp(element, "Hexa")==0){
	
		DecimalToHexa(pila->top->value);
	
	}
}




