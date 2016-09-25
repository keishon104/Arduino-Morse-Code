/* Created by: Keishon Smith (Key_Smit)
 * Started on: Spetember 10, 2016
 * Purpose: To input a message and output the same message through morse code. 
 */


int WhitePin ;                                           // Declaring the pin that LED is connected to
String StartPin = "What pin is your LED connected to?";  // Message the serial communication port asks on startup
String Connect = "Your LED is conected to pin: ";        // Asks what Pin the LED is connected to
String Message;                                          // Declaring message that'll be translated 
String com;
int j = 1;
int i;
int blinks;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(WhitePin, OUTPUT);
  int A = a();                                             //Initializing morse code for "A"
  int B = b();                                             //Initializing morse code for "B"
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(j; j<=1; j++){
    Serial.println(StartPin);
    while(Serial.available()==0){ }
    WhitePin = Serial.parseInt();                          // What number you enter becomes the pin that the command will output to 
    Serial.print(Connect), Serial.println(WhitePin);       // Displays text of what pin LED its connected to
  }
  Serial.println("Input your message");                    // Ask what the message is 
  while(Serial.available()==0){}                           // Waits for message input 
  Message = Serial.readString();                           // Message that will be translated 
  
  Serial.print("How many times do you want the led to blink?");
  while(Serial.available()==0){};
  blinks = Serial.parseInt();
  for(i=0; i<=blinks; i++){
    b();
  }
  
  delay(1000);
  
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

