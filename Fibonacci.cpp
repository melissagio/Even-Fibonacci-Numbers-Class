//
//  Fibonacci.cpp
//  CS 232 Exam 2 Even Fibonacci Numbers
//
//  Created by Melissa Gio on 3/29/23.
//

#include "Fibonacci.h"
#include <iostream>
using namespace std;

Fibonacci::Fibonacci() {
    firstFibNum = 0;
    secondFibNum = 1;
    thirdFibNum = 0;
}

int Fibonacci::getFirstFibNum() {
    return firstFibNum;
}

int Fibonacci::getSecondFibNum() {
    return secondFibNum;
}

int Fibonacci::getThirdFibNum() {
    return thirdFibNum;
}

void Fibonacci::setFirstFibNum(int num) {
    firstFibNum = num;
}

void Fibonacci::setSecondFibNum(int num) {
    secondFibNum = num;
}

void Fibonacci::setThirdFibNum(int num) {
    thirdFibNum = num;
}

int Fibonacci::findEvenFibNum(int numPar) {
    int cnt = 0;
    int fibNum;
    while (true) {
        fibNum = firstFibNum + secondFibNum;
        if (fibNum % 2 == 0) {
            cnt++;
            if (cnt == numPar) {
                return fibNum;
            }
        }
        firstFibNum = secondFibNum;
        secondFibNum = fibNum;
    }
}

