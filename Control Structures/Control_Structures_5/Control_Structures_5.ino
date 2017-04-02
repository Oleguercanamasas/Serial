/*************************************************************************
**                                                                      **
**                             TÍTOL:                                   **
**                         Control Structures                           **
**                                                                      **
**  NOM:Oleguer Canamasas                           DATA:06/02/2017     **
*************************************************************************/

//****** Includes  *******************************************************

//****** Variables *******************************************************
int sensorReading = 1;
//****** Setup  **********************************************************
void setup()
{
  Serial.begin(9600);
  Serial.print("The day is "); 
   
  switch (sensorReading) {
  case 0:    
    Serial.println("dark");
    break;
  case 1:    
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  default:
    Serial.println("... I don't know!!!");
  } 
}
//****** Loop  ***********************************************************
void loop()
{
}
//***************************** FUNCIONS *********************************
 
el serialprint fa que sempre aparegui el the day is
depenemt de el numero que posem de variavle 
ens aparaixera gracies alswitch
dark per el 0, dim per l1, medium per el 2 bright per el 3 i per a 
qualsevol atre nombre i dont know
