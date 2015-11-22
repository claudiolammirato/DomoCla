#include <FileIO.h>

int i=0;

void setup() {
  Bridge.begin();
  Console.begin();
  FileSystem.begin();

  //while(!Console);  
  //Console.println("Filesystem datalogger\n");
}

void loop () {
  String dataString;
  dataString += getTimeStamp();
  dataString += ",";
  dataString += random(15, 30);
  
  
  File dataFile = FileSystem.open("/mnt/sda1/datalog.csv", FILE_APPEND);
if (dataFile) {
    dataFile.println(dataString);
    dataFile.close();
    Console.println(dataString);
  }else {
    Console.println("error opening datalog.txt");
  } 
  delay(15000);
}

String getTimeStamp() {
  String result;
  Process time;
  time.begin("date");
  time.addParameter("+%D-%T");  
  time.run(); 

  while(time.available()>0) {
    char c = time.read();
    if(c != '\n')
      result += c;
  }

  return result;
}

