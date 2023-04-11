//
//  Fibonacci.h
//  CS 232 Exam 2 Even Fibonacci Numbers
//
//  Created by Melissa Gio on 3/29/23.
//

#ifndef Fibonacci_h
#define Fibonacci_h

class Fibonacci {

public:
    int getFirstFibNum();
    int getSecondFibNum();
    int getThirdFibNum();
    void setFirstFibNum(int num);
    void setSecondFibNum(int num);
    void setThirdFibNum(int num);
    Fibonacci();
    int findEvenFibNum(int numPar);
private:
    int firstFibNum;
    int secondFibNum;
    int thirdFibNum;
};


#endif /* Fibonacci_h */
