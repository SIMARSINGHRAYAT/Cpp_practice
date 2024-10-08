#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cout << "Enter Number of users: ";
    cin >> n;
    
    string names[n];
    int units[n], charges[n];
    
    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Enter Name of user " << i + 1 << ": ";
        getline(cin, names[i]);
        cout << "Enter User's Consumed units: ";
        cin >> units[i];
        
        if (units[i] <= 100) {
            charges[i] = units[i] * 0.60;
        } else if (units[i] <= 200) {
            charges[i] = 100 * 0.60 + (units[i] - 100) * 0.80;
        } else if (units[i] <= 300) {
            charges[i] = 100 * 0.60 + 100 * 0.80 + (units[i] - 200) * 0.90;
        } else {
            charges[i] = 100 * 0.60 + 100 * 0.80 + 100 * 0.90 + (units[i] - 300) * 0.90;
        }
        if (charges[i] < 50) {
            charges[i] = 50;
        }
        if (charges[i] > 300) {
            charges[i] += 0.15 * charges[i];
        }
    }
    
    cout << "\n\t\t\tELECTRIC BOARD CHARGES\n\n";
    for (int i = 0; i < n; i++) {
        cout << "\t\t\tNAME OF THE USER: " << names[i] << endl;
        cout << "\t\t\tTOTAL CHARGES: " << charges[i] << endl << endl;
    }

return 0;
}
