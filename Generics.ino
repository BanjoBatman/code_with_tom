template <class anyClass> void swapVals(anyClass &a,anyClass &b){
  anyClass temp;
  temp = a;
  a=b;
  b=temp;
}


void setup() {
  // put your setup code here, to run once:
  int a = 5;
  int b = 6;
  double da = 5.0;
  double db = 6.0;
  String sa = "hey";
  String sb = "there";
  
  Serial.begin(9600);
  Serial.print("a=");
  Serial.println(a);
  Serial.print("b=");
  Serial.println(b);
  Serial.print("da=");
  Serial.println(da);
  Serial.print("db=");
  Serial.println(db);
  Serial.print("sa=");
  Serial.println(sa);
  Serial.print("sb=");
  Serial.println(sb);
  // prints 
  //a=5
  //b=6
  //da=5.0
  //db=6.0
  //sa="hey"
  //sb="there"
  swapVals(a,b);// swaps a and b
  swapVals(da,db);// swaps da and db
  swapVals(sa,sb);// swaps sa and sb
 
  Serial.print("a=");
  Serial.println(a);
  Serial.print("b=");
  Serial.println(b);
  Serial.print("da=");
  Serial.println(da);
  Serial.print("db=");
  Serial.println(db);
  Serial.print("sa=");
  Serial.println(sa);
  Serial.print("sb=");
  Serial.println(sb);
  // prints 
  //a=6
  //b=5
  //da=6.0
  //db=5.0
  //sa="there"
  //sb="hey"

  
}

void loop() {
  // put your main code here, to run repeatedly:

}
