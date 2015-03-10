#include <iostream>
#include <vector>
using namespace std;
int main () {
	int stopien;
	cin >> stopien;
	int wartosci[stopien+1];
	for (int i=0; i<=stopien; i++) {
		cout << "x" << i << ": ";
		cin >> wartosci[i];
		cout << endl;
	}
	int p, q;
	p=wartosci[0];
	q=wartosci[stopien];
	cout << p << endl << q;
	
	vector <int> dzielnikip;
	for (int i=1; i<=p; i++) {
		if (p%i==0) {
			dzielnikip.push_back(i);
		}
	}
	vector <int> dzielnikiq;
	for (int i=1; i<=q; i++) {
		if (q%i==0) {
			dzielnikiq.push_back(i);
		}
	}
	/*int prawdziwedzielnikip[iledzielnikowp], prawdziwedzielnikiq[iledzielnikowq];
	for (int i=0; i<=p; i++) {
		if (p%i==0) {
			prawdziwedzielnikip[iledzielnikowp]=i;
			cout << prawdziwedzielnikip[iledzielnikowp] << endl;
		}
	}
	cout << endl;
	for (int i=0; i<=q; i++) {
		if (q%i==0) {
			prawdziwedzielnikiq[iledzielnikowq]=i;
			cout << prawdziwedzielnikiq[iledzielnikowq] << endl;
		}
	}*/
	//cout << iledzielnikowp << " " << iledzielnikowq;
	
	/*for (int i=0; i<iledzielnikowp; i++) {
		
	}*/
	/*double wszystkiepierwiastki[dzielnikip.size()*dzielnikiq.size()];
	for (int i=0; i<dzielnikiq.size(); i++) {
		for (int j=0; j<dzielnikip.size(); j++) {
			wszystkiepierwiastki[i*dzielnikiq.size()+j]=dzielnikip[j]/dzielnikiq[i];
		}
	}
	for (int i=0; i<dzielnikip.size()*dzielnikiq.size(); i++) {
		cout << wszystkiepierwiastki[i] << " ";
	}*/
	cout << dzielnikip.size();
	cout << endl;
	cout << dzielnikiq.size();
	
	/*for (int i=0; i<dzielnikiq.size(); i++) {
		cout << dzielnikiq[i]<<endl;
	}*/
	//cout << p << endl << q;
}
