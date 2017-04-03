/*************************************************************************
**                                                                      **
**                             TÍTOL:                                   **
**                        Number communication                          **
**                                                                      **
**  NOM:Oleguer Canamasas                           DATA:03/04/2017     **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************
long num;

//****** Setup  **********************************************************
void setup() {
  Serial.begin(9600);
  Serial.println("Entrar un numero?");
}

//****** Loop  **********************************************************
void loop() {
  while (Serial.available() > 0) {

    num = Serial.parseInt(); 
    Serial.print("El ");
    Serial.print(num);
    
    if (Serial.read() == '\n') { 
      
      if ( num % 2 == 0){
        Serial.println(" es parell.");
      }
      else{
        Serial.println(" es imparell.");
      }
      Serial.println("");
      Serial.println("Entrar un numero?");
    }
  }
}
//****** Funcions  ****************************************************
//quant s'sescriu un numero s'sinprimeix EL (el numero que has posat) 
//si el numero es divisible per 2 s'inprimeix "es parell"
// si la condició no es compleix , l' else fa que s'inprimeixi "es inparell"
// despres s'inprimeix "entrar un numero? i torna a comensar
