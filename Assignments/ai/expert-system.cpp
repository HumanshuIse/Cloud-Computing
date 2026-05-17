#include <iostream>
using namespace std;

int main() {
    char fever, cough, headache, stomachPain, fatigue;

    cout << "=====================================\n";
    cout << " HOSPITAL EXPERT SYSTEM\n";
    cout << "=====================================\n";

    cout << "\nAnswer the following questions (y/n)\n";

    cout << "Do you have fever? ";
    cin >> fever;

    cout << "Do you have cough? ";
    cin >> cough;

    cout << "Do you have headache? ";
    cin >> headache;

    cout << "Do you have stomach pain? ";
    cin >> stomachPain;

    cout << "Do you feel fatigue/weakness? ";
    cin >> fatigue;

    cout << "\n=====================================\n";
    cout << " MEDICAL REPORT\n";
    cout << "=====================================\n";

    // Diagnosis Rules
    if (fever == 'y' && cough == 'y' && fatigue == 'y') {
        cout << "Possible Disease: Flu or Viral Infection\n";
        cout << "Advice: Drink fluids and consult a doctor.\n";
    }
    else if (fever == 'y' && headache == 'y' && fatigue == 'y') {
        cout << "Possible Disease: Dengue or Malaria\n";
        cout << "Advice: Get blood tests immediately.\n";
    }
    else if (stomachPain == 'y' && fever == 'y') {
        cout << "Possible Disease: Food Poisoning or Infection\n";
        cout << "Advice: Eat light food and visit hospital.\n";
    }
    else if (cough == 'y' && headache == 'y') {
        cout << "Possible Disease: Common Cold\n";
        cout << "Advice: Take rest and stay hydrated.\n";
    }
    else {
        cout << "Symptoms are unclear.\n";
        cout << "Please consult a medical professional.\n";
    }

    cout << "=====================================\n";

    return 0;
}