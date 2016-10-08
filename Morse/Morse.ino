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
}


void loop() {
  for(j; j<=1; j++){
    Serial.println(StartPin);                              // Display Menu. 
    while(Serial.available()==0){ }                        // While the input is nothing do nohing. 
    WhitePin = Serial.parseInt();                          // What number you enter becomes the pin that the command will output to 
    Serial.print(Connect), Serial.println(WhitePin);       // Displays text of what pin LED its connected to
  }
  
  
  Serial.println("Input your message");                    // Ask what the message is 
  while(Serial.available()==0){}                           // Waits for message input 
  Message = Serial.readString();                           // Message typed into serial.  

   for ( i=0; i<= Message.length(); i++){                  // Repeat printing the message for message length 
    si(i);                                                 // Call function that repeats the input.(Testing purposes)
    calling(i, WhitePin);
  }
  
  delay(1000);

}






void si(char x){                                           // This function repeats the words verifying its correctly working. 
    Serial.println((Message[i]));                          // This function is included for testig purposes. 
    if(x == 'O' || x == 'o'){
      Serial.print("This is an O");
    }
    delay(200);
}
void calling( char x, int pin){                                  // This function calls certain functions when needed 
  switch (Message.charAt(x)) {
    case 'A': 
        A(pin);
      break;
    case'B':
        B(pin);
      break;
    case 'C':
        C(pin);
      break;
    default:
        Serial.println("This character is not reconized");
      break;
  }
}





// Definition of dits and dashes 

void dot(int pin){                                      // di and dit 
  digitalWrite(pin, HIGH);
  delay(250);
  digitalWrite(pin, LOW);
  delay(250);
}

void dash(int pin){                                     // dah
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(250);
}


//  This section is related to alphabet and special characters
//  int x represents the pin number located 
void A(int x){     
  dot(x); dash(x);
};

void B(int x){
  dash(x); dot(x); dot(x); dot(x);
};

void C(int x) {
  
};

void D() {
  
};

void E() {
  
};

void f() {
  
};

void G() {
  
};

void H() {
  
};

void I() {
  
};

void K() {
  
};

void L() {
  
};

void M() {
  
};

void N() {
  
};

void O(){
  
};

void P(){
  
};

void Q(){
  
};

void R() {
  
};

void S(){
  
};

void T(){
  
};

void U(){
  
};

void V() {
  
};

void W(){
  
};

void X() {
  
};

void Y() {
  
};

void Z() {
  
};





// Functions relating to numbers

void zero() {
  
};

void one() {
  
};

void two() {
  
};

void three() {
  
};

void four() {
  
};

void five() {
  
};

void six() {
  
};

void seven() {
  
};

void eight() {
  
};

void nine() {
  
};





