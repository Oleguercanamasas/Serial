/*************************************************************************
**                                                                      **
**                             TÍTOL:                                   **
**                        Number communication                          **
**                                                                      **
**  NOM:Oleguer Canamasas                           DATA:03/04/2017     **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************

float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results

//****** Setup  **********************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}

//****** Loop  ***********************************************************
void loop() {
  while (Serial.available() > 0) 
    r1 = Serial.parseInt();
    Serial.print ("r1 = ");
    Serial.print(r1);
    Serial.print(" ohms\t");
    
    r2 = Serial.parseInt();
   Serial.print("r2 = ");
    Serial.print(r2);
    Serial.println(" ohms");
    
    if (Serial.read() == '\n') 
 Serial.print ("rSerie = ");  
      Serial.print (r1+r2);         
      Serial.print (" ohms     ");  
Serial.print ("rParalel = "); // 
      Serial.print ((r1*r2)/(r1+r2));
       
      Serial.println (" Ohms");    
      Serial.println (" ");        
      Serial.println ("Entra nous valors per r1 i r2");
                  
}


//***************************** FUNCIONS *********************************
