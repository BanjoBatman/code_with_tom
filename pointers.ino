
int MySpecialNumber = 5;
int *MySpecialNumberPointer = &MySpecialNumber;

int SuperSecretNumber = 12;
int *IAmAHacker = (int *)6;
int mySuperLongArray[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};

void printArray(int* arrayToPrint, int size){
  for(int i=0; i < size; i++){
    Serial.print(arrayToPrint[i]);
    Serial.print(",");
  }
  Serial.println();
}

void changeArray(int* arrayToPrint, int size){
  for(int i=0; i < size; i++){
    arrayToPrint[i]++; // add 1 to every value in the array.
  }
}



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  printArray(mySuperLongArray,13);
  changeArray(mySuperLongArray,13);
  printArray(mySuperLongArray,13);
}

void loop() {
  // put your main code here, to run repeatedly:

}
