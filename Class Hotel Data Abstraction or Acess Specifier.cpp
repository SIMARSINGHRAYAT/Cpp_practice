#include<iostream>
using namespace std;
class Hotel{
	private:
		int R_no;
		string names;
		int tarrif;
		int nod;
		double calc(){
			double amount = nod * tarrif;
			if(nod * tarrif > 1000){
				amount = nod * tarrif * 1.05;
			} 
			return amount;
		}
	public:
		void checkin(){
			cout << "Enter Room Number : " << endl;
			cin >> R_no;
			cout << "Enter Names of Resident : " << endl;
			cin.ignore();
			getline(cin,names);
			cout << "Enter Tarrif : " << endl;
			cin >> tarrif;
			cout << "Enter nod value : " << endl;
			cin >> nod;
		}
		void checkout(){
			cout << "\t\t\t\t\tHotel Database" << endl;
			cout << "\t\t\tRoom Number : " << R_no << endl;
			cout << "\t\t\tName of the Resident : " << names << endl;
			cout << "\t\t\tTarrif : " << tarrif <<endl;
			cout << "\t\t\tNod : " << nod << endl;
			cout << "\t\t\tAmount to be Payed : " << calc() << endl;
		}
};
int main(){
	Hotel h;
	h.checkin();
	h.checkout();
return 0;
}