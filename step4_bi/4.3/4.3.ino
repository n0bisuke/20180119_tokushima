#include <Nefry.h>
#include <NefryCloud.h>

NefryCloud nefryCloud;

void onpush(String message);

void setup() {
  nefryCloud.begin("n0bisuke","bb43e25cec77eb9d20127eb25612223ccd37bcaf647fc24973a646d1abe69f8e");//サイトで登録したuser,メールで受け取ったapikeyを入力してください
  nefryCloud.on(onpush);
  Nefry.setProgramName("NefryBT Nefry Cloud");
  analogRead(A0);
}

void loop() {
  nefryCloud.loop();
}

void onpush(String message) {//Nefryクラウド(仮)から通知が来ます
  Nefry.print("onpush : ");
  Nefry.println(message);

  if(message.equals("red")){
    Nefry.setLed(255,0,0);
  }else if(message.equals("green")){
    Nefry.setLed(0,255,0);
  }else if(message.equals("blue")){
    Nefry.setLed(0,0,255);
  }
}