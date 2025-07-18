#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    double count = 0;
    double elem[] = {7, 5, 6, 12, 35, 27};
    cout << "Element of the array are : ";
    for(int i : elem){
        cout << i << "  ";
        sum += i;
        ++count;
    }
    double average = sum/count ;
    cout << "\nSum of these elements is : " << sum << endl ;
    cout << "Average of these element is : " << average ;
    return 0;
}