#include<stdio.h>                      //Librerias utilizadas en el programa, tanto propias de c como creadas por nosotros 
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include"ManejoPilaInt.h"
#include"OperacionesIntPila.h"
#include"FuncionesMiscelaneas.h"
#include"Administrator.h"

void main(int argc, char *argv[]){                   
	Pila* pilaI=new_Pila();
	float Stored_Memory = 0;
	
	if (argc>1){                         //De esta forma se determina si el usuario utilizara el modo interactivo o el modo linea de comando 
	
	for(int i=1; i<argc; i++){            
		                              //Funciones para el manejo de la memoria 
	    if(strcmp(argv[i], "STO") == 0){  //Almacenar el valor del tope actual de la pila en la memoria 
		if (pilaI->top != NULL){
			Stored_Memory = pilaI->top->value;
		} else {
			printf("La Pila esta vacia, por lo que no puede guardarse ningun valor\n"); 
			  } 
	    }
	    
	    else if(strcmp(argv[i], "MRCL") == 0){  //Imprime el valor que se encuentra actualmente en la memoria 
	        	printf("%.2f\n",Stored_Memory);
	    }
	    
	    else if(strcmp(argv[i], "MADD") == 0){  //Suma al valor actual de la memoria el valor del tope actual de la pila 
	    	if (pilaI->top != NULL){
	    		Stored_Memory += pilaI->top->value;
	    	} else {
	    		printf("La Pila esta vacia, por lo que no puede sumarse ningun valor\n");
	    	  } 	
	    }
	    else if(strcmp(argv[i], "MSUB") == 0){  //Resta al valor actual de la memoria el valor actual del tope de la pila 
	    	if (pilaI->top != NULL){
	    		Stored_Memory -= pilaI->top->value;
	    	} else {
	    		printf("La Pila esta vacia, por lo que no puede restarse ningun valor\n");
	    	  } 	  
	    }else if(strcmp(argv[i], "MUSE") ==0){   //Agrega el valor actual de la memoria al tope de la pila
	    	push(pilaI, Stored_Memory);
	    }	  	
	    	    
	    else{	            	                
	            Administrator(argv[i], pilaI);      //Funciones para ejecutar                                    
	            Administrator_Mis(argv[i], pilaI);  //el resto de funciones
	        }	   
	         }
	         
        
    }  
	
	
	else{
	char element[30];
	
	while(strcmp(element, "QUIT")!=0){    //En esta zona es todo exactamente igual a lo de arriba unicamente que utiliza mediante el modo interactivo 
	
	    scanf("%s",element);
		
	    if(strcmp(element, "STO") == 0){
		if (pilaI->top != NULL){
			Stored_Memory = pilaI->top->value;
		} else {
			printf("La Pila esta vacia, por lo que no puede guardarse ningun valor\n");
			  } 
	    }
	    
	    else if(strcmp(element, "MRCL") == 0){
	        	printf("%.2f\n",Stored_Memory);
	    }
	    
	    else if(strcmp(element, "MADD") == 0){
	    	if (pilaI->top != NULL){
	    		Stored_Memory += pilaI->top->value;
	    	} else {
	    		printf("La Pila esta vacia, por lo que no puede sumarse ningun valor\n");
	    	  } 	
	    }
	    else if(strcmp(element, "MSUB") == 0){
	    	if (pilaI->top != NULL){
	    		Stored_Memory -= pilaI->top->value;
	    	} else {
	    		printf("La Pila esta vacia, por lo que no puede restarse ningun valor\n");
	    	  } 
	    	  
	    }else if(strcmp(element, "MUSE") ==0){   //Agrega el valor actual de la memoria al tope de la pila
	    	push(pilaI, Stored_Memory);
	    }		
	    	    
	    else{
	        if(strcmp(element, "QUIT")!=0){
	            	                
	            Administrator(element, pilaI);
	            Administrator_Mis(element, pilaI);

	        }	   
	         }
	         
        
    }
    
    }

    
}

