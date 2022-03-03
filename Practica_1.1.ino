
/*****************************************************************************
*                                                                            *
*      NOMBRE:      Práctica 1.1.                                            *
*      FECHA:       24 de febrero de 2022.                                   *
*      VERSIÓN:     1.0.                                                     *
*                                                                            *
*      AUTORES:     Mondragón Delgado Mezly Zahory                           *
*                   Montaño Ruvalcaba Luis Alberto                           *
*                    Ramírez Díaz Radames Oswaldo                            *
*                    Ramírez García Carlos Antonio                           *
*                    Paz Zamora Alfredo                                      *
*                                                                            *
*      COMPAÑÍA:    Universidad de Colima - Facultad de Telemática.          *
*      CARRERA:     Ing. en Tecnologías de Internet                          *
*                                                                            *
*      uC:          ESP8266                                                  *
*      Nombre:      ESP8266                                                  *
*                                                                            *
******************************************************************************
*                                                                            *
*      DESCRIPCIÓN DEL PROGRAMA: Arquitectura de software para explorar      *
*      un poco el uso de métodos y clases para la resolución de problemas.   *  
*                                                                            *
******************************************************************************/

#include "libreria_metodos.h" //Libreria que contiene los metodos


class_datos cd;        // Instancia clase "class_datos".
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONFIGURACIÓN INICIAL~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void setup( void ) {

  Serial.begin ( 115200 ); // Configuración BaudRate, un sistema puede tener varios puertos seriales físicos.
  delay(1000);  //Configuración de delay inicial.
  cd.printMenu(); //Llamada al metodo pintMenu() de la libreria 
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~CICLO INFINITO DE TRABAJO~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void loop ( void ) {
  
  cd.SerialEvent(); //Llamada al metodo SerialEvent de la libreria libreria_metodos.h

}
