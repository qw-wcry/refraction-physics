//By Qutaibah Wahbeh. Github: https://github.com/qw-wcry/Suvat-Calculator-Cpp/blob/main/README.md
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
double choice, choice2, aoi, aor, n1, n2, c, calc1, calc2, calc3, calc4;
string thetac1, thetac2;
void loop(){
    cout << "\n\nRefraction calculator made by Qutaibah Wahbeh !!\n\n1)Find n1\n2)Find n2\n3)Find angle of incidence\n4)Find angle of refraction\n5)Find theta c\n\nCalculate (1,2,3,4,5): ";
    cin >> choice;
    if (choice == 1){
    //find n1
    //use formula n1 sin(thetai) = n2 sin (theta r)
    cout << "\nEnter missing inputs (keep in mind angle of refraction is 90, with a c angle)\n";
    cout << "\nEnter angle of incidence: ";
    cin >> aoi;
    if (aoi >= 0){
    cout << "\nEnter angle of refraction: ";
    cin >> aor;
    if (aor >= 0){
    cout << "\nEnter refraction index of material 2: ";
    cin >> n2;
    if (n2 >= 1){
    //math
    //use formula n1 sin(thetai) = n2 sin (theta r)
    calc1 = sin(aoi*M_PI/180);
    calc2 = sin(aor*M_PI/180);
    calc3 = n2*calc2;
    calc4 = calc3/calc1;
    cout << "\n\nExact Answer: " << calc4 << "" << endl;
    if (calc4 <= 1 || calc4 < 1.2){
        cout << "\nMaterial prediction: air\n";
    }
    else if (calc4 <= 1.21 || calc4 > 1.4){
        cout << "\nMaterial prediction: water\n";
    }
    else if (calc4 <= 1.41 || calc4 > 1.7){
        cout << "\nMaterial prediction: glass\n";
    }
    else {
        cout << "";
    }
    }
    else { 
        cout << "\nError, Value isnt supported\n";
    }
    }
    }
    else {
        cout << "\nError, Value isnt supported\n";
    }
}

else if (choice ==2){
    //find n2
    //use formula: n1 sin(thetai) = n2 sin (theta r)
    cout << "\nEnter missing inputs (keep in mind angle of refraction is 90, with a c angle)\n";
    cout << "\nEnter angle of incidence: ";
    cin >> aoi;
    if (aoi >= 0){
    cout << "\nEnter angle of refraction: ";
    cin >> aor;
    if (aor >= 0){
    cout << "\nEnter refraction index of material 1: ";
    cin >> n1;
    if (n1 >= 1){
    //math
    //use formula: n1 sin(thetai) = n2 sin(theta r)
    calc1 = sin(aoi*M_PI/180);
    calc2 = sin(aor*M_PI/180);
    calc3 = n1*calc1;
    calc4 = calc3/calc2;
    cout << "\n\nExact Answer: " << calc4 << endl;
    if (calc4 <= 1 || calc4 < 1.2){
        cout << "\nMaterial prediction: air\n";
    }
    else if (calc4 <= 1.21 || calc4 > 1.4){
        cout << "\nMaterial prediction: water\n";
    }
    else if (calc4 <= 1.41 || calc4 >= 1.7){
        cout << "\nMaterial prediction: glass\n";
    }
    else if (calc4 <= 1.8){
        cout << "\nMaterial prediction: unknown\n";
    }
    else {
        cout << "";
    }

    }
    else { 
       cout << "\nError, Value isnt supported\n";
    }
    }
    }
    else {
        cout << "\nError, Value isnt supported\n";
    }
}
else if (choice ==3){
    //find aoi
    //use formula n1 sin(thetai) = n2 sin (theta r)
    cout << "\nEnter refraction index of material 1: ";
    cin >> n1;
    if (n1 >= 1){
    cout << "\nEnter refraction index of material 2: ";
    cin >> n2;
    if (n2 >= 1){

    cout << "\nEnter angle of refraction: ";
    cin >> aor;
    if (aor >= 0.01){
    //math
    //use formula n1 sin(thetai) = n2 sin(theta r)
    calc1 = sin(aor*M_PI/180);
    calc2 = n2*calc1;
    calc3 = calc2 / n1;
    calc4 = asin(calc3);
    
    cout << "\n\nExact Answer: " << calc4*180/M_PI << "˚ degrees." << endl;
    }
    else { 
        cout << "\nError, Value isnt supported\n";
    }
    }
    }
    else {
        cout << "\nError, Value isnt supported\n";
    }
}
else if (choice ==4){
    //find aor
    //use formula n1 sin(thetai) = n2 sin (theta r)
    cout << "\nEnter refraction index of material 1: ";
    cin >> n1;
    if (n1 >= 1){

    cout << "\nEnter refraction index of material 2: ";
    cin >> n2;
    if (n2 >= 1){

    cout << "\nEnter angle of incidence: ";
    cin >> aoi;
    if (aoi >= 0.01){
    //math
    //use formula n1 sin(thetai) = n2 sin(theta r)
    calc1 = sin(aoi*M_PI/180);
    calc2 = n1*calc1;
    calc3 = calc2 / n2;
    calc4 = asin(calc3);
    
    cout << "\n\nExact Answer: " << calc4*180/M_PI << "˚ degrees." << endl;
    }
    else { 
        cout << "\nError, Value isnt supported\n";
    }
    }
    }
    else {
        cout << "\nError, Value isnt supported\n";
    }
}
else if (choice ==5){
    //find c as in n
    //use formula n1 sin(thetai) = n2 sin (theta r)
    cout << "\nRemember(n1 > n2)\nEnter refraction index of material 1: ";
    cin >> n1;
    if (n1 >= 1)
    {
            cout << "\nEnter refraction index of material 2: ";
            cin >> n2;
            if (n2 >= 1){
                                if (n1 > n2){

                                
                                        //math
                                        //use formula n1 sin(thetai) = n2 sin(theta r)
                                        calc1 = n2/n1;
                                        calc4 = asin(calc1);
                                        
                                        cout << "\n\nExact Answer: " << calc4*180/M_PI << "˚ degrees." << endl;

                                }   
                                else{
                                    cout << "\nError, n1 must be larger value\n";
                                }
            }
            else {
                cout << "Error, Value isnt supported\n";
            }
    }
    else {
        cout << "Error, Value isnt supported\n";
    }
}
else {
    cout << "\nChoice must be (1,2,3,4,5) from options\n";
}
cout << "\nBuilt By Qutaibah Wahbeh Using c++\n";
loop();
}
int main(){
cout << "\n\nRefraction calculator made by Qutaibah Wahbeh !!\n\n1)Find n1\n2)Find n2\n3)Find angle of incidence\n4)Find angle of refraction\n5)Find theta c\n\nCalculate (1,2,3,4,5): ";
cin >> choice;
if (choice == 1){
    //find n1
    //use formula n1 sin(thetai) = n2 sin (theta r)
    cout << "\nEnter missing inputs (keep in mind angle of refraction is 90, with a c angle)\n";
    cout << "\nEnter angle of incidence: ";
    cin >> aoi;
    if (aoi >= 0){
    cout << "\nEnter angle of refraction: ";
    cin >> aor;
    if (aor >= 0){
    cout << "\nEnter refraction index of material 2: ";
    cin >> n2;
    if (n2 >= 1){
    //math
    //use formula n1 sin(thetai) = n2 sin (theta r)
    calc1 = sin(aoi*M_PI/180);
    calc2 = sin(aor*M_PI/180);
    calc3 = n2*calc2;
    calc4 = calc3/calc1;
    cout << "\n\nExact Answer: " << calc4 << "" << endl;
    if (calc4 <= 1 || calc4 < 1.2){
        cout << "\nMaterial prediction: air\n";
    }
    else if (calc4 <= 1.21 || calc4 > 1.4){
        cout << "\nMaterial prediction: water\n";
    }
    else if (calc4 <= 1.41 || calc4 > 1.7){
        cout << "\nMaterial prediction: glass\n";
    }
    else {
        cout << "";
    }
    }
    else { 
        cout << "\nError, Value isnt supported\n";
    }
    }
    }
    else {
        cout << "\nError, Value isnt supported\n";
    }
}

else if (choice ==2){
    //find n2
    //use formula: n1 sin(thetai) = n2 sin (theta r)
    cout << "\nEnter missing inputs (keep in mind angle of refraction is 90, with a c angle)\n";
    cout << "\nEnter angle of incidence: ";
    cin >> aoi;
    if (aoi >= 0){
    cout << "\nEnter angle of refraction: ";
    cin >> aor;
    if (aor >= 0){
    cout << "\nEnter refraction index of material 1: ";
    cin >> n1;
    if (n1 >= 1){
    //math
    //use formula: n1 sin(thetai) = n2 sin(theta r)
    calc1 = sin(aoi*M_PI/180);
    calc2 = sin(aor*M_PI/180);
    calc3 = n1*calc1;
    calc4 = calc3/calc2;
    cout << "\n\nExact Answer: " << calc4 << endl;
    if (calc4 <= 1 || calc4 < 1.2){
        cout << "\nMaterial prediction: air\n";
    }
    else if (calc4 <= 1.21 || calc4 > 1.4){
        cout << "\nMaterial prediction: water\n";
    }
    else if (calc4 <= 1.41 || calc4 >= 1.7){
        cout << "\nMaterial prediction: glass\n";
    }
    else if (calc4 <= 1.8){
        cout << "\nMaterial prediction: unknown\n";
    }
    else {
        cout << "";
    }

    }
    else { 
       cout << "\nError, Value isnt supported\n";
    }
    }
    }
    else {
        cout << "\nError, Value isnt supported\n";
    }
}
else if (choice ==3){
    //find aoi
    //use formula n1 sin(thetai) = n2 sin (theta r)
    cout << "\nEnter refraction index of material 1: ";
    cin >> n1;
    if (n1 >= 1){
    cout << "\nEnter refraction index of material 2: ";
    cin >> n2;
    if (n2 >= 1){

    cout << "\nEnter angle of refraction: ";
    cin >> aor;
    if (aor >= 0.01){
    //math
    //use formula n1 sin(thetai) = n2 sin(theta r)
    calc1 = sin(aor*M_PI/180);
    calc2 = n2*calc1;
    calc3 = calc2 / n1;
    calc4 = asin(calc3);
    
    cout << "\n\nExact Answer: " << calc4*180/M_PI << "˚ degrees." << endl;
    }
    else { 
        cout << "\nError, Value isnt supported\n";
    }
    }
    }
    else {
        cout << "\nError, Value isnt supported\n";
    }
}
else if (choice ==4){
    //find aor
    //use formula n1 sin(thetai) = n2 sin (theta r)
    cout << "\nEnter refraction index of material 1: ";
    cin >> n1;
    if (n1 >= 1){

    cout << "\nEnter refraction index of material 2: ";
    cin >> n2;
    if (n2 >= 1){

    cout << "\nEnter angle of incidence: ";
    cin >> aoi;
    if (aoi >= 0.01){
    //math
    //use formula n1 sin(thetai) = n2 sin(theta r)
    calc1 = sin(aoi*M_PI/180);
    calc2 = n1*calc1;
    calc3 = calc2 / n2;
    calc4 = asin(calc3);
    
    cout << "\n\nExact Answer: " << calc4*180/M_PI << "˚ degrees." << endl;
    }
    else { 
        cout << "\nError, Value isnt supported\n";
    }
    }
    }
    else {
        cout << "\nError, Value isnt supported\n";
    }
}
else if (choice ==5){
    //find c as in n
    //use formula n1 sin(thetai) = n2 sin (theta r)
    cout << "\nRemember(n1 > n2)\nEnter refraction index of material 1: ";
    cin >> n1;
    if (n1 >= 1)
    {
            cout << "\nEnter refraction index of material 2: ";
            cin >> n2;
            if (n2 >= 1){
                                if (n1 > n2){

                                
                                        //math
                                        //use formula n1 sin(thetai) = n2 sin(theta r)
                                        calc1 = n2/n1;
                                        calc4 = asin(calc1);
                                        
                                        cout << "\n\nExact Answer: " << calc4*180/M_PI << "˚ degrees." << endl;

                                }   
                                else{
                                    cout << "\nError, n1 must be larger value\n";
                                }
            }
            else {
                cout << "Error, Value isnt supported\n";
            }
    }
    else {
        cout << "Error, Value isnt supported\n";
    }
}
else {
    cout << "\nChoice must be (1,2,3,4,5) from options\n";
}
cout << "\nBuilt By Qutaibah Wahbeh Using c++\n";
loop();
}


