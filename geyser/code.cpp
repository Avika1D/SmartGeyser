#include <iostream>
using namespace std;

class homeowner{
public:
    bool status;
 public:
      void printstatus()
  {
    cout<<"Out of Bed"<<endl;
  }
   string getstatus(){
        cout<< status<<endl;
   }
};
class smartgeyser {
public:
    void on() {
        cout<< "The Geyser system is ready."<<endl;
    }
};

class envsensor : public smartgeyser {
public:
    void monitor() {
        cout<<"Environment sensor is ready."<<endl;
    }
};


class waterheater : public smartgeyser {
public:
    void heating() {
        cout<<"Water heater is ready."<<endl;
    }
};

