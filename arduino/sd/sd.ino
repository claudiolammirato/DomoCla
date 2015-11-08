#include <FileIO.h>

int i=0;

void setup() {
  Bridge.begin();
  Console.begin();
  FileSystem.begin();

  while(!Console);  
  Console.println("Filesystem datalogger\n");
}

void loop () {
  int dataString;
  dataString = i++;
  
  File dataFile = FileSystem.open("/mnt/sda1/datalog.txt", FILE_APPEND);
if (dataFile) {
    dataFile.println(dataString);
    dataFile.close();
    Console.println(dataString);
  }else {
    Console.println("error opening datalog.txt");
  } 
  delay(15000);
}

