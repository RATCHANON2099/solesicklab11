#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    cout << setprecision(3);
    ifstream source;
	ofstream dest;
	source.open("score.txt");
	dest.open("completed.txt");
    string textline;
    double num=0, avr=0, dvt=0, sum=0, sm=0, cr=0;
    while(getline(source, textline)){
        cr=stod(textline);
        sum=sum+cr;
        sm+=pow(cr,2);
        num++;
    }
    avr=sum/num;
    dvt=sqrt(sm/num-pow(avr,2));
    cout << "Number of data = " << num << endl;
    cout << "Mean = " << avr << endl;
    cout << "Standard deviation = " << dvt << endl;

    source.close();
    dest.close();
	
}
