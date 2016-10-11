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
    calling(i, WhitePin);                                  // Calls function which calls characters's meaning. 
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





//-------------------------------------------------------------------------------------------------------------------
//----------------------------------- Function Definitions ----------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------
void calling( char x, int pin){                                  // This function calls certain functions when needed 
  switch (Message.charAt(x)) {
    case 'A': 
        A(pin);
      break;
    case 'B':
        B(pin);
      break;
    case 'C':
        C(pin);
      break;
    case 'D': 
        D(pin);
      break;
    case 'E':
        E(pin);
      break;
    case 'F':
        f(pin);
      break;
    case 'G': 
        G(pin);
      break;
    case 'H':
        H(pin);
      break;
    case 'I':
        I(pin);
      break;
    case 'J': 
        J(pin);
      break;
    case 'K':
        K(pin);
      break;
    case 'L':
        L(pin);
      break;
    case 'M': 
        M(pin);
      break;
    case 'N':
        N(pin);
      break;
    case 'O':
        O(pin);
      break;
    case 'P': 
        P(pin);
      break;
    case 'Q':
        Q(pin);
      break;
    case 'R':
        R(pin);
      break;
    case 'S': 
        S(pin);
      break;
    case 'T':
        T(pin);
      break;
    case 'U':
        U(pin);
      break;
    case 'V': 
        V(pin);
      break;
    case 'W':
        W(pin);
      break;
    case 'X':
        X(pin);
      break;
    case 'Y': 
        Y(pin);
      break;
    case 'Z':
        Z(pin);
      break;
    case '0': 
        zero(pin);
      break;
    case '1':
        one(pin);
      break;
    case '2':
        two(pin);
      break;
    case '3': 
        three(pin);
      break;
    case '4':
        four(pin);
      break;
    case '5':
        five(pin);
      break;
    case '6': 
        six(pin);
      break;
    case '7':
        seven(pin);
      break;
    case '8':
        eight(pin);
      break;
    case '9': 
        nine(pin);
      break;
    case '.': 
        period(pin);
      break;
    case ',':
        comma(pin);
      break;
    case ':':
        colon(pin);
      break;
    case '?': 
        question_mark(pin);
      break;
    case '\'':
        apostrophe(pin);
      break;
    case '-':
        hyphen(pin);
      break;
    case '/': 
        slash(pin);
      break;
    case '(' :
    case ')' : 
        brackets(pin);
      break;
    case '\"':
        Quote_mark(pin);
      break;
    case '@': 
        at(pin);
      break;
    case '=':
        equal(pin);
      break;
    default:
        Serial.println("This character is not reconized");
      break;
  }
}





//---------------- Length of dit and dash values ----------------------

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
  dash(x); dot(x); dash(x); dot(x);
};

void D(int x) {
  dash(x); dot(x); dot(x);
};

void E(int x) {
  dot(x);
};

void f(int x) {
  dot(x); dot(x); dash(x); dot(x);
};

void G(int x) {
  dash(x); dash(x); dot(x);
};

void H(int x) {
  dot(x); dot(x); dot(x); dot(x);
};

void I(int x) {
  dot(x); dot(x); 
};

void J(int x) {
  dot(x); dash(x); dash(x); dash(x); 
}
void K(int x) {
  dash(x); dot(x); dash(x); 
};

void L(int x) {
  dot(x); dash(x); dot(x); dot(x); 
};

void M(int x) {
  dash(x); dash(x); 
};

void N(int x) {
  dash(x); dot(x);
};

void O(int x){
  dash(x); dash(x); dash(x);  
};

void P(int x){
  dot(x); dash(x); dash(x); dot(x); 
};

void Q(int x){
  dash(x); dash(x); dot(x); dash(x); 
};

void R(int x) {
  dot(x); dash(x); dot(x); 
};

void S(int x){
  dot(x); dot(x); dot(x); 
};

void T(int x){
  dash(x); 
};

void U(int x){
  dot(x); dot(x); dash(x); 
};

void V(int x) {
  dot(x); dot(x); dot(x); dash(x); 
};

void W(int x){
  dot(x); dash(x); dash(x); 
};

void X(int x) {
  dash(x); dot(x); dot(x); dash(x); 
};

void Y(int x) {
  dash(x); dot(x); dash(x); dash(x); 
};

void Z(int x) {
  dash(x); dash(x); dot(x); dot(x); 
};





// Functions relating to numbers

void zero(int x) {
  dash(x); dash(x); dash(x); dash(x); dash(x); 
};

void one(int x) {
  dot(x); dash(x); dash(x); dash(x); dash(x); 
};

void two(int x) {
  dot(x); dot(x); dash(x); dash(x); dash(x); 
};

void three(int x) {
  dot(x); dot(x); dot(x); dash(x); dash(x); 
};

void four(int x) {
  dot(x); dot(x); dot(x); dot(x); dash(x); 
};

void five(int x) {
   dot(x); dot(x); dot(x); dot(x); dot(x); 
};

void six(int x) {
  dash(x); dot(x); dot(x); dot(x); dot(x); 
};

void seven(int x) {
  dash(x); dash(x); dot(x); dot(x); dot(x);
};

void eight(int x) {
  dash(x); dash(x); dash(x);  dot(x); dot(x);
};

void nine(int x) {
  dash(x); dash(x); dash(x); dash(x); dot(x); 
};



// Functions relating to special characters

void period(int x) {      
  dot(x); dash(x); dot(x); dash(x); dot(x); dash(x);
};

void comma(int x) {
  dash(x); dash(x); dot(x); dot(x); dash(x); dash(x); 
};

void colon(int x) {
  dash(x); dash(x); dash(x); dot(x); dot(x); dot(x); 
};

void question_mark(int x) {
  dot(x); dot(x); dash(x); dash(x); dot(x); dot(x); 
};

void apostrophe(int x) {
  dot(x); dash(x); dash(x); dash(x); dash(x); dot(x); 
};

void hyphen(int x) {
  dash(x); dot(x); dot(x); dot(x); dot(x); dash(x);
};

void slash(int x) {
  dash(x); dot(x); dot(x); dash(x); dot(x); 
};

void brackets (int x) {
  dash(x); dot(x); dash(x); dash(x); dot(x); dash(x);
};

void Quote_mark( int x) {
  dot(x); dash(x); dot(x); dot(x); dash(x); dot(x); 
};

void at(int x) {
  dot(x); dash(x); dash(x); dot(x); dash(x); dot(x); 
};

void equal(int x) {
  dash(x); dot(x); dot(x); dot(x); dash(x); 
};
