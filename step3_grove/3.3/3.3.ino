/* Grove - Light Sensor demo v1.2
* 
* signal wire to A0.
* By: http://www.seeedstudio.com
*/

#include <Nefry.h>
#include <NefryDisplay.h>

#define LIGHT_SIG A1
#define LED_PIN A0

void setup() {
  Serial.begin(115200);                //Start the Serial connection
  pinMode(LIGHT_SIG, INPUT);
  pinMode(LIGHT_SIG, INPUT_PULLUP);
  NefryDisplay.begin();
}

void loop() {
  int sensorValue = analogRead(LIGHT_SIG);
  
  long sum = 0;
  for(int i=0; i<32; i++){
    sum += analogRead(LIGHT_SIG);
  }
  sum >>= 5;
  
  NefryDisplay.print("");
  NefryDisplay.print("");
  NefryDisplay.print((String)sum);
  if(sum > 1000){
    Nefry.setLed(255,255,255,0);
  }else{
    Nefry.setLed(255,255,255,100);
  }
  Serial.println(sum);
  delay(10);
}

//void loop()
//{
//    long sum = 0;
//    for(int i=0; i<32; i++)
//    {
//        sum += analogRead(LIGHT_SIG);
//    }
//
//    sum >>= 5;
//
//    Serial.println(sum);
//    delay(10);
//}
