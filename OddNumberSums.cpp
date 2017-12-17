/* 
 * File:   main.cpp
 * Author: nathan
 *
 * Created on December 17, 2017, 1:07 PM
 * This program prompts the user for a number.
 * Once the user has entered a number, its odd product sum is calculated.
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int calculateProducts(int);
bool isOdd(int);

int main(int argc, char** argv) {

    cout << "Please enter an integer: "; // prompt for number
    int numberToBeUsed;
    cin >> numberToBeUsed; //assign number entered to variable
    
    while (numberToBeUsed <= 0){ // if number is 0 or less than 0, display error and allow user to enter another number.
    	cout << "Sorry. 0 Is not a valid number. Try again: ";
    	cin >> numberToBeUsed;

    }
    
    int totalProducts = calculateProducts(numberToBeUsed); //assign the sum of odd products to variable
    
    cout << "Total products: " << totalProducts;
    
    return 0;
}


int calculateProducts(int number){ //function is passed a number from main, and add its product if and only if it's odd.
    
    int sum = 0;
    
    for (int x = number; x > 0; x--){ //loop until we reach zero because zero doesn't have a product.
        
        if (isOdd(x)){
            sum += (x * x); //if a number is odd, multiply it by itself and add it to sum.
        }
        
    }
    
    return sum;
    
}

bool isOdd(int number){ //function that determines whether a number is odd or not
    
    if (number % 2 == 0){
        return false;
    } else{
        return true;
    }
    
}
