                                            # 30-Days-of-Code
                                            
 1. Complete the code in the editor below. The variables i,d , and s are already declared and initialized for you. You must:

* Declare 3 variables: one of type int, one of type double, and one of type String.
* Read 3 lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your variables.
* Use the + operator to perform the following operations: 
* Print the sum of i plus your int variable on a new line.
* Print the sum of d plus your double variable to a scale of one decimal place on a new line.
* Concatenate s with the string you read as input and print the result on a new line.
2. Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.
Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result!
* Input
There are 3  lines of numeric input: 
The first line has a double,mealCost  (the cost of the meal before tax and tip). 
The second line has an integer,tipPercent  (the percentage of mealCost being added as tip). 
The third line has an integer, taxPercent (the percentage of mealCost  being added as tax).
* Output
Print The total meal cost is totalCost dollars., where totalCost is the rounded integer result of the entire bill ( mealCost with added tax and tip).

3. Given an integer,n , perform the following conditional actions:
* If n is odd, print Weird
* If n is even and in the inclusive range of 2 to 5, print Not Weird
* If n is even and in the inclusive range of 6 to 20, print Weird
* If n  is even and greater than 20, print Not Weird.

4. Write a Person class with an instance variable, age, and a constructor that takes an integer, initialAge, as a parameter. The constructor must assign initialAge to age  after confirming the argument passed as initialAge  is not negative; if a negative argument is passed as initialAge , the constructor should set age to 0  and print Age is not valid, setting age to 0.. In addition, you must write the following instance methods:
* yearPasses() should increase the age instance variable by 1.
* amIOld() should perform the following conditional actions:
* If age<13, print You are young..
* If age>=13 and age<18 , print You are a teenager..
* Otherwise, print You are old.

5. Given an integer,n , print its first 10  multiples. Each multiple nxi  (where 1<=i<=10) should be printed on a new line in the 
form: n x i = result.
6. Given a string,S , of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as  space-separated
strings on a single line (see the Sample below for more detail).
7. Given an array,A , of N integers, print A's elements in reverse order as a single line of space-separated numbers.
9. Write a factorial function that takes a positive integer,N  as a parameter and prints the result of N! ( factorial).
10. Given a base-10 integer,n , convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary representation.
17. Write a Calculator class with a single method: int power(int,int). The power method takes two integers, n and p, as parameters and returns the integer result of n^p. If either  or  is negative, then the method must throw an exception with the message: n and p should be non-negative.
18. A palindrome is a word, phrase, number, or other sequence of characters which reads the same backwards and forwards. Can you determine if a given string,s , is a palindrome?
19. The AdvancedArithmetic interface and the method declaration for the abstract divisorSum(n) method are provided for you in the 
editor below.
Complete the implementation of Calculator class, which implements the AdvancedArithmetic interface. The implementation for the divisorSum(n) method must return the sum of all divisors of n .
