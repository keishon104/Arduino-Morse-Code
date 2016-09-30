/* Created by: Keishon Smith (Key_Smit)
 * Started on: Spetember 10, 2016
 * Purpose: To input a message and output the same message through morse code. 
 */

int j = 1;                                               // 
int i;                                                   //
int WhitePin ;                                           // Declaring the pin that LED is connected to
String StartPin = "What pin is your LED connected to?";  // Message the serial communication port asks on startup
String Connect = "Your LED is conected to pin: ";        // Asks what Pin the LED is connected to
String Message = "Place Holder" ;                        // Declaring message that'll be translated 


void setup() {
  Serial.begin(9600);
  pinMode(WhitePin, OUTPUT);
  int A = a();                                             //Initializing morse code for "A"
  int B = b();                                             //Initializing morse code for "B"
}

void loop() {
  for(j; j<=1; j++){
    Serial.println(StartPin);
    while(Serial.available()==0){ }
    WhitePin = Serial.parseInt();                          // What number you enter becomes the pin that the command will output to 
    Serial.print(Connect), Serial.println(WhitePin);       // Displays text of what pin LED its connected to
  }
  
  Serial.println("Input your message");                    // Ask what the message is 
  while(Serial.available()==0){}                           // Waits for message input 
  Message = Serial.readString();                           // Message that will be translated 

   for ( i=0; i<= Message.length(); i++){                  // Repeat printing the message for message length 
    si(i);
    calling(i);
    if(Message.charAt(i)== 'W'){                           // Checks if the individual character is certain letter. 
      Serial.println("This is a W and begin to finish this project");      
    }
  }
  
  delay(1000);

}

void si(char x){                                           // This function repeats the words verifying its correctly working. 
    Serial.println((Message[i]));
    if(x == 'O' || x == 'o'){
      Serial.print("This is an O");
    }
    delay(200);
}
void calling( char x){                                  // This function calls certain functions when needed 
  switch (Message.charAt(x)) {
    case 'O': 
        Serial.println("The test works");
      break;
     case' ':
      Serial.println("This is a space");
    default:
        Serial.println();
      break;
  }
}


int a(){
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(250);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(1000);
};


int b(){
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  delay(2000);
}


void A(){
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(250);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(1000);
};
