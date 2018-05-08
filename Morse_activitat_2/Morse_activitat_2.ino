/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**  Joan Josep Moreno                                                        **
******************************************************************************/
//****** Includes *************************************************************
//****** Variables ************************************************************
const int pin = 9;   // pin for speaker
int note = 1047;
int velocitat = 10;
//****** Setup ****************************************************************
void setup()
{
}
//****** Loop *****************************************************************
void loop()
{
  punt();
  punt();
  punt();
  punt();
  espaiL();  
  ratlla();
  ratlla();
  ratlla();
  espaiL();
  punt();
  ratlla();
  punt();
  punt();
  espaiL();
  punt();
  ratlla();
  espaiP();
  punt();
  espaiL();
  punt();
  ratlla();
  punt();
  punt();
  espaiP();
  ratlla();
  ratlla();
  espaiL();
  punt();
  espaiL();
  punt();
  punt();
  ratlla();
  espaiP();
  ratlla();
  punt();
  espaiL();
  ratlla();
  ratlla();
  ratlla();
  espaiL();
  ratlla();
  ratlla();
  espaiP();
  punt();
  espaiL();
  punt();
  punt();
  punt();
  espaiP();
  punt();
  ratlla();
  ratlla();
  ratlla();
  espaiL();
  ratlla();
  ratlla();
  ratlla();
  espaiL();
  punt();
  ratlla();
  espaiL();
  ratlla();
  punt();
  espaiP();
  punt();
  ratlla();
  ratlla();
  ratlla();
  espaiL();
  ratlla();
  ratlla();
  ratlla();
  espaiL();
  punt();
  punt();
  punt();
  espaiL();
  punt();
  espaiL();
  punt();
  ratlla();
  ratlla();
  punt();
  espaiP();
  
}
//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}
void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}
void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}
void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}

