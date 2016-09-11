int WhitePin ; // Declaring the pin that LED is connected to
String StartPin = "What pin is your LED connected to?";  // Message the serial communication port asks the user on startup
String Connect = "Your LED is conected to pin: ";
int j = 1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(WhitePin, OUTPUT);
int A = a(); //Initializing morse code for "A"
int B = b(); //Initializing morse code for "B"
}

void loop() {
  // put your main code here, to run repeatedly:
  
for(j; j<=1; j++){
Serial.println(StartPin);
while(Serial.available()==0){ }
WhitePin = Serial.parseInt();  // What number you enter becomes the pin that the command will output to 
Serial.println(Connect);       // Displays text of what pin its connected to 
Serial.println(WhitePin);      // Displays pin number that is connected to LED
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

