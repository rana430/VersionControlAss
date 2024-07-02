#include <iostream>
#include "vector"
using namespace std;

int getSum(vector<int>& numbers){
    int vectorSum=0;
    for(auto i:numbers){
        vectorSum+=i;
    }
    return vectorSum;
}

float getAverage(vector<int>& numbers){
    float sum= getSum(numbers);
    return (float)(sum/numbers.size);
}
int getMin(vector<int>& numbers){
    int minNumber=INT_MAX;
    for(auto i:numbers){
        minNumber=min(minNumber,i);
    }
    return minNumber;
}

int main() {
   vector<int>numbers={1,2,3,4,5,6,7,8,9,10};
    cout<<"Sum of the vector \"numbers\" is : "<<getSum(numbers)<<'\n';
    cout<<"Average of the vector \"numbers\" is : "<<getAverage(numbers)<<'\n';
    cout<<"Minimum Number in the vector \"numbers\" is : "<<getMin(numbers)<<'\n';
    return 0;
}
