/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CLASES~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
class class_datos {             // Nombre de la clase.     
        
  public:                         // Variables públicas.
    char txt;           // Recibe el numero del índice del menú.
    String output;     //Variable para almacenar el rango de las variables
    
  public:                         // Métodos públicos. 
   
    int unsigned_min (void);      //Metodo para obtener el minimo de variables sin signo
    int64_t get_min (int);        //Metodo para obtener el minimo de variables
    uint64_t get_max (int);      //Metodo para obtener el máximo de variables sin signo

    void SerialEvent ( void );  //Metodo que lee la entrada del monitor
    void printMenu ( void );    //Metodo para imprimir el menu
 
    
};
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MÉTODOS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

int64_t class_datos::get_min (int exponente){ //Calcula el minimo de variables
  return pow(-2,exponente);
}

uint64_t class_datos::get_max (int exponente){ //Calcula el maximo de variables
  return pow(2,exponente) -1;
}

int class_datos::unsigned_min( void ){ //Calcula el minimo de variables de sin signo
  return 0;
}

void class_datos::SerialEvent ( void ) {
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Leer información del puerto serial~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
  while (Serial.available()>0) { //Ciclo que se repite mientas el Serial tiene datos
    txt = Serial.read();          //Lee el puerto serial
    
    switch(txt){                 //Condicional para el texto de entrada
      case '1':
        Serial.println("int8_ t - Entero con signo de 1 byte");
        output = "Rango de ";
        output += get_min(7);
        output += " a ";
        output += get_max(7);
        Serial.print(output);    
        break;
      case '2':
        Serial.println("uint8_ t - Entero sin signo de 1 byte"); 
        output = "Rango de ";
        output += unsigned_min();
        output += " a ";
        output += get_max(8);
        Serial.print(output); 
        break;
      case '3':
        Serial.println("int16_ t - Número entero con signo de 2 bytes");  
        output = "Rango de ";
        output += get_min(15);
        output += " a ";
        output += get_max(15);
        Serial.print(output);
        break;
      case '4':
        Serial.println("uint16_ t - Número entero sin signo de 2 bytes.");  
        output = "Rango de ";
        output += unsigned_min();
        output += " a ";
        output += get_max(16);
        Serial.print(output);
        break;
      case '5':
        Serial.println("int32_ t - Número entero con signo de 4 bytes. "); 
        output = "Rango de ";
        output += get_min(31);
        output += " a ";
        output += get_max(31);
        Serial.print(output); 
        break;
      case '6':
        Serial.println("uint32_ t - Número entero sin signo de 4 bytes.");
        output = "Rango de ";
        output += unsigned_min();
        output += " a ";
        output += get_max(32);
        Serial.print(output);
        break;
      case '7':
        Serial.println("int64_ t - Número entero con signo de 8 bytes.");
        output = "Rango de ";
        output += get_min(63);
        output += " a ";
        output += get_max(63) - 1;
        Serial.print(output);
        break;
      case '8':
        Serial.println("uint64_ t -Número entero sin signo de 8 bytes.");
        output = "Rango de ";
        output += unsigned_min();
        output += " a ";
        output += get_max(64) * 2 + 1 ;
        Serial.print(output);
        break;
      case '9':
        Serial.println("char - Número entero de 1 byte.");  
        output = "Rango de ";
        output += get_min(7);
        output += " a ";
        output += get_max(7);
        Serial.print(output);
        break;
      case 'A':
        Serial.println("short - Número entero con signo de 2 bytes");
        output = "Rango de ";
        output += get_min(15);
        output += " a ";
        output += get_max(15);
        Serial.print(output);
        break;
      case 'B':
        Serial.println("int - Número entero de 4 bytes.");
        output = "Rango de ";
        output += get_min(31);
        output += " a ";
        output += get_max(31);
        Serial.print(output);
        break;
      default: 
        Serial.print("\n------------------------------------\n");
        printMenu();              //Llamada al metodo para imprimir el menu
        break;
    }
  }
}
//Metodo para crear el menu
void class_datos::printMenu() {
  Serial.println("\nMENU:");
  Serial.println("int8_t   -> 1");
  Serial.println("uint8_t  -> 2");
  Serial.println("int16_t  -> 3");
  Serial.println("uint16_t -> 4");
  Serial.println("int32_t  -> 5");
  Serial.println("uint32_t -> 6");
  Serial.println("int64_t  -> 7");
  Serial.println("uint64_t -> 8");
  Serial.println("char     -> 9");
  Serial.println("short    -> A");
  Serial.println("int      -> B\n");
}
