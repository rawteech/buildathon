#include <Process.h>

void setup()
{
  Bridge.begin();   // Initialize the Bridge
}

void loop()
{
  // Simulate Get Sensor value
  int sensor = random(10, 20);
 
  Process p;
    //Replace the url with your firebase app url
  p.runShellCommand("curl -k -X POST https://YOUR_ACCOUNT.firebaseio.com/temperature.json -d '{ \"value\" : " + String(sensor) + "}'");  

  while(p.running()); 
  delay(2000);                
  
}