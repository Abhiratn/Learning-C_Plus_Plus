#include <iostream>
#include <string>

using namespace std;

class Patient {
private:
    int _heartRate;  // Heart rate of the patient
    double _moneyOwed;  // Amount of money owed by the patient
    string _name;  // Name of the patient

public:
    // Constructor with default values
    Patient(string name, int heartRate = 0, double moneyOwed = 0.0);

    // Default constructor (empty)
    Patient(){
      _name;  // This statement doesn't do anything
      _heartRate = 0;  // Default heart rate set to 0
      _moneyOwed = 0.0;  // Default amount owed set to 0.0
    }

    // Getter and setter methods for private members
    int getHeartRate(){
      return _heartRate;
    }

    void setHeartRate(int heartRate){
      _heartRate = heartRate;
    }

    double getMoneyOwed(){
      return _moneyOwed;
    }

    void setMoneyOwed(double moneyOwed){
      _moneyOwed = moneyOwed;
    }

    string getName(){
      return _name;
    }

    void setName(string name){
      _name = name;
    }

    // Destructor (empty)
    ~Patient(){}
};

// Constructor definition with initialization list
Patient::Patient(string name, int heartRate, double moneyOwed): _name(name){
  _heartRate = heartRate;
  _moneyOwed = moneyOwed;
}

int main(){
  Patient Ak("Alex", 70, 0.0);  // Create a patient object named Ak with initial values

  cout << "Patient: " << Ak.getName() << "\nOwes: " << Ak.getMoneyOwed() << endl;
  cout << "His Heart Rate is: " << Ak.getHeartRate() << endl;

  Ak.setMoneyOwed(1000.0);  // Update the amount owed by the patient
  Ak.setHeartRate(140);  // Update the heart rate of the patient

  cout << "Patient: " << Ak.getName() << "\nOwes: " << Ak.getMoneyOwed() << endl;
  cout << "His Heart Rate is: " << Ak.getHeartRate() << endl;

  return 0;
}
