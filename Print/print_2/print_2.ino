/*************************************************************************
**                                                                      **
**                             TÍTOL:                                   **
**                           Math is fun                                **
**                                                                      **
**  NOM:Oleguer Canamasas                           DATA:6/02/2017      **
*************************************************************************/

//****** Includes  *******************************************************

//****** Variables *******************************************************
int thisByte = 33;
//****** Setup  **********************************************************
void setup() 
{ 
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map"); 
}
//****** Loop  ***********************************************************
void loop()
{ 
  Serial.write(thisByte);    
  
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)  // if printed last visible character '~'
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;     // go on to the next character

}
//***************************** FUNCIONS *********************************
El serialwrite fa que es comenci per 33.
els serialprint fan que es vegui el que volem.
el dec/hex/oct/bin fan que el numero vaigui canviant el tipus de 
llenguatge que volem.
elif fa de condició i ens diu que un cop s'aigui arribat a 126 es paren
els serialprint
el thisByte++ fa qur un com s'aiguin inprimit tots els seralprint se li 
sumi 1 a la incognita (thisByte) a inicialment era 33  


