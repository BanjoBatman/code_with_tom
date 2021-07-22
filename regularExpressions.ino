#include "Regexp.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  MatchState ms; //this is the object that does the work
  char testString[] = "This is a test, telephone, no match"; // Matchstate expects char array
  //char  testString[] = "aaaaaa aaaaaaa  aaaaaa a a aaaa aaaaa"; // Matchstate expects char array
  char regularExpression[] = "te[a-z]+"; //https://docs.microsoft.com/en-us/cpp/standard-library/regular-expressions-cpp?view=msvc-160
  // this regular expression essentially says "find the text that starts with 'te', and then has any number of the remaining chars, but not spaces or numbers
  ms.Target(testString); // the MatchState Target is the text that will be searched
  int result = ms.Match(regularExpression); // you pass the regular expression to the match function.
  // the result contains 1 if any matches are found, or 0 if not. 
  // ms.MatchStart contains the first index of anything that matches the pattern.
  // ms.MatchLength contains the length of the match.   
  Serial.println(result);
  if(result>0){
    for(int i=ms.MatchStart; i<ms.MatchStart+ms.MatchLength; i++){
      Serial.print(testString[i]); // prints "test"
  }
  Serial.println();
 }
 
}


void loop() {
  // put your main code here, to run repeatedly:

}
