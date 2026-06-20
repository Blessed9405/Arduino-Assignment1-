void setup() {

  Serial.begin(9600);
  // Create some variables of different types
  int myAge = 18;
  float myHeight = 1.75;
  String myName = "Type your name here";
  bool isStudent = true;
  float gpa = 3.5;

  // Print them to the Serial Monitor
  Serial.print("My name is: ");
  Serial.println(myName);

  Serial.print("My age is: ");
  Serial.println(myAge);

  Serial.print("My height is: ");
  Serial.print(myHeight);
  Serial.println(" meters");

  Serial.print("Am I a student? ");
  Serial.println(isStudent);

  Serial.print("My GPA is: ");
  Serial.println(gpa);
}

void loop() {
  // Empty for now — everything happens once in setup()
}