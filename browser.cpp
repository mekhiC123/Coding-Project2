

#include <iostream>
#include <fstream>
#include "stack.h"
#include "queueADT.h"

using namespace std; 

int main(){

stackType<string> w2;
linkedQueueType<int> w3;

//g++ browser.cpp.
//./a.out
string URL;
int fileNum;


int option ;

 while (option != 5){

 cout << " ===== Browser and Download Manager ===== " << endl;
 cout << "1. Visit a new page " << endl;
 cout << "2. Go back " << endl;
 cout << "3. Add file to download queue " << endl;
 cout << "4.Download the next file in the queue " << endl;
 cout << "5.Quit " << endl;

cout << "Choice: ";
cin >> option;

switch(option){
  case 1:
  //visit new page code 
  cout << "Enter URL: ";
  cin >> URL;
  cout << "Visiting: " << URL << endl;
  w2.push(URL);
  break;

  case 2:
  // go back
  w2.pop();
  cout << "Back to: " << w2.top() << endl;
  break;

  case 3: 
  //add new file 
  cout << "Enter file number to add to download queue: ";
  cin >> fileNum;
  cout << "File " << fileNum << " added to the queue.";
  w3.addQueue(fileNum);
  break;

  case 4:
  //download the next file 
  w3.deleteQueue();
  cout << " Downloading file: " << w3.front() << endl;
  break;

  case 5: 
  cout << "Exiting program." << endl;
  break;
}

}
return 0;
}