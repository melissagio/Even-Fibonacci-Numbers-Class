//
//  main.cpp
//  CS 232 Exam 2 Even Fibonacci Numbers
//
//  Created by Melissa Gio on 3/29/23.
//

#include <iostream>
#include "Fibonacci.h"

using namespace std;

int main() {
   //declarations
    int cnt;
    int firstNum = 0;
    int secondNum = 0;
    int thirdNum;
    int userNum;
    string output = "";
    
    Fibonacci myFib;
    
    //get user input
    cout << "What even number Fibonacci number do you want to see: ";
    cin >> userNum;
    
    //calculations
    cnt = 0;
    while (cnt < userNum) {
        thirdNum = firstNum + secondNum;
        firstNum = secondNum;
        cnt++;
    }
    
    //output
    cout << myFib.findEvenFibNum(userNum) << endl;
}
