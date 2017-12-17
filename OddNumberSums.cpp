/* 
 * File:   main.cpp
 * Author: nathan
 *
 * Created on December 17, 2017, 1:07 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int calculateProducts(int);
bool isOdd(int);

int main(int argc, char** argv) {

    cout << "Please enter an integer: ";
    int numberToBeUsed;
    cin >> numberToBeUsed;
    
    
    
    int totalProducts = calculateProducts(numberToBeUsed);
    
    cout << "Total products: " << totalProducts;
    
    return 0;
}


int calculateProducts(int number){
    
    int sum = 0;
    
    for (int x = number; x > 0; x--){
        
        if (isOdd(x)){
            sum += (x * x);
        }
        
    }
    
    return sum;
    
}

bool isOdd(int number){
    
    if (number % 2 == 0){
        return false;
    } else{
        return true;
    }
    
}
