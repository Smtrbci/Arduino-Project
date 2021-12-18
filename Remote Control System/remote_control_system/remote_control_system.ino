//IRremote kütüphanesini ekliyoruz
#include <IRremote.hpp>

#define BTN1 0x45 //kumandada 1 tuşuna karşılık gelir "command" ile alınır "IrReceiver.decodedIRData.command"
#define BTN1D 0xBA45FF00 //kumandada 1 tuşuna karşılık gelir "decodedRawData" ile alınır "IrReceiver.decodedIRData.decodedRawData"

#define BTN2 0x46 //kumandada 2 tuşuna karşılık gelir

#define BTN3 0x47 //kumandada 3 tuşuna karşılık gelir

#define BTN4 0x44 //kumandada 4 tuşuna karşılık gelir

#define BTN5 0x40 //kumandada 5 tuşuna karşılık gelir

#define BTN6 0x43 //kumandada 6 tuşuna karşılık gelir

#define BTN7 0x7 //kumandada 7 tuşuna karşılık gelir

#define BTN8 0x15 //kumandada 8 tuşuna karşılık gelir

#define BTN9 0x9 //kumandada 9 tuşuna karşılık gelir

#define BTN0 0x19 //kumandada 0 tuşuna karşılık gelir

#define YukOK 0x18 //kumandada "yukarı ok" tuşuna karşılık gelir

#define AsOK 0x52 //kumandada "asagi ok" tuşuna karşılık gelir

#define SagOK 0x5A //kumandada "Sag ok" tuşuna karşılık gelir

#define SolOK 0x8 //kumandada "Sol ok" tuşuna karşılık gelir

#define OOK 0x1C //kumandada "ok" tuşuna karşılık gelir

//kumandada diğer tuşların kodunu öğrenmek için: Dosya>Örnekler>IRremote>ReceiverDump örneğini çalıştırınız. 
//Arduino uno için alıı pini 2 olarak alınmıştır.

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  IrReceiver.begin(2); // Alıcıyı başlat
  Serial.begin(115200);
}

void loop() {
  if (IrReceiver.decode()) {
      if(IrReceiver.decodedIRData.command == BTN1){
          Serial.println("1");
          digitalWrite(LED_BUILTIN, HIGH);
          
      }else if(IrReceiver.decodedIRData.command == BTN2){
        Serial.println("2");
        digitalWrite(LED_BUILTIN, LOW);
        
      }else if(IrReceiver.decodedIRData.command == BTN3){
        Serial.println("3");
        digitalWrite(LED_BUILTIN, HIGH);
        
      }else if(IrReceiver.decodedIRData.command == BTN4){
        Serial.println("4");
        digitalWrite(LED_BUILTIN, LOW);
        
      }else if(IrReceiver.decodedIRData.command == BTN5){
        Serial.println("5");
        digitalWrite(LED_BUILTIN, HIGH);
        
      }else if(IrReceiver.decodedIRData.command == BTN6){
        Serial.println("6");
        digitalWrite(LED_BUILTIN, LOW);
        
      }else if(IrReceiver.decodedIRData.command == BTN7){
        Serial.println("7");
        digitalWrite(LED_BUILTIN, HIGH);
        
      }else if(IrReceiver.decodedIRData.command == BTN8){
        Serial.println("8");
        digitalWrite(LED_BUILTIN, LOW);
        
      }else if(IrReceiver.decodedIRData.command == BTN9){
        Serial.println("9");
        digitalWrite(LED_BUILTIN, HIGH);
        
       }else if(IrReceiver.decodedIRData.command == BTN0){
        Serial.println("0");
        digitalWrite(LED_BUILTIN, LOW);
       
      }else if(IrReceiver.decodedIRData.command == OOK){
        Serial.println("OK");
        digitalWrite(LED_BUILTIN, HIGH);
        
      }else if(IrReceiver.decodedIRData.command == YukOK){
        Serial.println("YUKARI OK");
        //digitalWrite(LED_BUILTIN, LOW);
        
      }else if(IrReceiver.decodedIRData.command == AsOK){
        Serial.println("ASAGI OK");
        //digitalWrite(LED_BUILTIN, HIGH);
        
      }else if(IrReceiver.decodedIRData.command == SagOK){
        Serial.println("SAG Ok");
        //digitalWrite(LED_BUILTIN, LOW);
        
      }else if(IrReceiver.decodedIRData.command == SolOK){
        Serial.println("SOL Ok");
        //digitalWrite(LED_BUILTIN, HIGH);
      }
       
     IrReceiver.resume(); // Enable receiving of the next value
  }

}
