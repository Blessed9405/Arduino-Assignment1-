Assignment 1 – Arduino Fundamentals

Task 1 – Hello, Serial!

Question 1

What is the difference between int and float? Give one example of when you would use each.

- "int" stores whole numbers without decimals.
- "float" stores numbers with decimal values.
- Example: "int age = 18;"
- Example: "float voltage = 3.3;"

Question 2

What happens if you forget to write Serial.begin(9600) in setup()?

The Serial Monitor will not communicate properly with the Arduino, so the output may not appear or may display unreadable characters.

Question 3

Why does the output appear only once and not over and over?

The code is inside "setup()", which runs only once when the Arduino starts.



Task 2 – Your First Blink

Question 1

Why do we put pinMode(ledPin, OUTPUT); inside setup() and not inside loop()?

The pin only needs to be configured once when the Arduino starts.

Question 2

What would happen if we removed both delay() calls?

The LED would switch on and off extremely fast, making it appear constantly on or flickering.

Question 3

If you wanted the LED to be ON for 3 seconds and OFF for half a second, which values would you change and to what?

onTime = 3000;
offTime = 500;



Task 3 – Make It a Function

Question 1

In your own words, explain what a parameter is.

A parameter is a value passed into a function so the function can use it while running.

Question 2

Why is it useful to put repeating code into a function instead of writing it three times in loop()?

It reduces duplicate code and makes the program easier to modify and maintain.

Question 3

Could you write blinkOnce without taking any parameter at all? If yes, how would you make it blink at different speeds without parameters?

Yes. Different speeds could be controlled using global variables or separate functions with fixed delay values.



Task 4 – Count Down with a while Loop

Question 1

What is the role of the line counter = counter - 1;? What would happen without it?

It decreases the counter value each loop iteration. Without it, the loop would run forever.

Question 2

Rewrite the countdown to start from 7 instead of 5.

int counter = 7;

Question 3

In your own words, what is the difference between setup() and a while loop?

"setup()" runs once when the Arduino starts, while a "while" loop repeats code as long as its condition remains true.



Task 5 – Smart Countdown

Question 1

Paste your final, working code.

int startValue = 5;
int Led = 13;

void flashLED(int times){
    for(int i = 1 ; i <= times; i++){
    digitalWrite(Led,HIGH);
    delay(500);
    digitalWrite(Led,LOW);
    delay(500);
    }
  }

void setup() {
  Serial.begin(9600);
  pinMode(Led, OUTPUT);
    int count = startValue;
  Serial.println("=== Smart Countdown Starting ===");
    while(count > 0){
    Serial.print("Count: ");
    Serial.println(count);

   flashLED(count);
   delay(1000);

   count--;
  }
  Serial.println("=== Countdown Complete ===" );
}

void loop() { 

}


Question 2

Describe one bug or mistake you ran into while writing this program and how you fixed it.

I forgot to decrease the counter inside the while loop, which caused an infinite loop. I fixed it by adding "count--;".

Question 3

If you wanted the program to count DOWN by 2 each step (5, 3, 1) instead of by 1, what would you change?

Replace:

count--;

with:

count = count - 2;

Question 4

If you wanted the LED to also stay ON for a final 5 seconds after the countdown completes, where in the code would you add this and what would the code look like?

Add the code after printing ""=== Countdown Complete ==="" in "setup()".

Serial.println("=== Countdown Complete ===");

digitalWrite(ledPin, HIGH);
delay(5000);
digitalWrite(ledPin, LOW);
