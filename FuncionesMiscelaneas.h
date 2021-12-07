void Display(Pila* pila) {                      //Funcion que imprime todos los valores de la pila
    if(pila->top != NULL){
        Node *temporal = pila->top;
        while (temporal != NULL) {
            printf("%.2f\n", temporal->value);
            temporal = temporal->next;
        }
    }else{
        printf("La pila esta vacia\n");
    }
}

void Clr(Pila* pila) {                           //Funcion que limpia por completo la pila dejandola sin ningun elemento
    if(pila->top = NULL){
	printf("La pila esta vacia\n");
    } else {
            while(pila->top != NULL){
                Node *temporal = pila->top;
                pila->top = pila->top->next;

                free(temporal);
            }
            printf("Se eliminaron los valores correctamente\n");
    }

}

long decimalToBinary(float Number){               //Funcion que convierte un numero decimal en un numero binario
        long Binary = 0;
        float rem, temp = 1;

        while (Number!=0)
        {
            rem = (int)Number%2;
            Number = (int)Number / 2;
            Binary = Binary + rem*temp;
            temp = temp * 10;
        }
        return Binary;   
}

int convertDecimalToOctal(float Num){             //Funcion que convierte un numero decimal en un numero octal
    int octal = 0, i = 1;
    int Number=(int)Num; 

    while (Number != 0)
    {
        octal += (Number % 8) * i;
        Number /= 8;
        i *= 10;
    }
    return octal;
}

    void DecimalToHexa(float Changer){             //Funcion que convierte un numero decimal en un numero hexadecimal

        long Number,quotient, remainder, temp;
	Number = (long)Changer;
        int i=0, j=0;

        char hexadecimalnum[100];

        quotient = Number;
        temp = (int)quotient;

        while (temp != 0)

        {

            remainder = temp % 16;

            if (remainder < 10)

                hexadecimalnum[j++] = 48 + remainder;

            else

                hexadecimalnum[j++] = 55 + remainder;

            temp = temp / 16;

        }

        for (i = j; i >= 0; i--)

                printf("%c", hexadecimalnum[i]);

        printf("\n");

    }






