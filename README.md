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
12. You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.
Complete the Student class by writing the following:
*  A Student class constructor, which has  parameters:
A string,firstName .
A string,lastName .
An integer,id .
An integer array (or vector) of test scores, scores.
* A char calculate() method that calculates a Student object's average and returns the grade character representative of their          calculated average.
17. Write a Calculator class with a single method: int power(int,int). The power method takes two integers, n and p, as parameters and returns the integer result of n^p. If either  or  is negative, then the method must throw an exception with the message: n and p should be non-negative.
18. A palindrome is a word, phrase, number, or other sequence of characters which reads the same backwards and forwards. Can you determine if a given string,s , is a palindrome?
19. The AdvancedArithmetic interface and the method declaration for the abstract divisorSum(n) method are provided for you in the 
editor below.
Complete the implementation of Calculator class, which implements the AdvancedArithmetic interface. The implementation for the divisorSum(n) method must return the sum of all divisors of n .
20. Given an array, a, of size n distinct elements, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following 3 lines:
. Array is sorted in numSwaps swaps. 
where numSwaps is the number of swaps that took place.
. First Element: firstElement 
where firstElement is the first element in the sorted array.
. Last Element: lastElement 
where lastElement is the last element in the sorted array.
21. Write a single generic function named printArray; this function must take an array of generic elements as a parameter (the 
exception to this is C++, which takes a vector). 
Your printArray function should print each element of its generic array parameter on a new line. 
22. The height of a binary search tree is the number of edges between the tree's root and its furthest leaf. You are given a pointer,
root, pointing to the root of a binary search tree. Complete the getHeight function provided in your editor so that it returns the height of the binary search tree.
23. A Node class is provided for you in the editor. A Node object has an integer data field, data, and a Node instance pointer,next , pointing to another node (i.e.: the next node in a list).
A removeDuplicates function is declared in your editor, which takes a pointer to the head node of a linked list as a parameter. Complete removeDuplicates so that it deletes any duplicate nodes from the list and returns the head of the updated list.
25. A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number,n , determine and print whether it's Prime or Not prime.
If possible, try to come up with a  primality algorithm,O(sqrt(n)) or see what sort of optimizations you come up with for an O(n)  algorithm. 
26. Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:
1. If the book is returned on or before the expected return date, no fine will be charged (i.e.:fine=0) .
2. If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, fine=15*(Number of days late).
3. If the book is returned after the expected return month but still within the same calendar year as the expected return date, the 
fine=500*(Number of months late).
4.If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000.
27. This problem is all about unit testing.
Your task is to implement 3 classes that will produce test data and the expected results for the testing functions. More specifically: function get_array() in TestDataEmptyArray class and functions get_array() and get_expected_result() in classes TestDataUniqueValues and TestDataExactlyTwoDifferentMinimums following the below specifications:
* get_array() method in class TestDataEmptyArray has to return an empty array.
* get_array() method in class TestDataUniqueValues has to return an array of size at least 2 with all unique elements, while method get_expected_result() of this class has to return the expected minimum value index for this array.
* get_array() method in class TestDataExactlyTwoDifferentMinimums has to return an array where there are exactly two different minimum values, while method get_expected_result() of this class has to return the expected minimum value index for this array.
28.Consider a database table, Emails, which has the attributes First Name and Email ID. Given N rows of data simulating the Emails table, print an alphabetically-ordered list of people whose email address ends in @gmail.com.
* Input Format
The first line contains an integer,N , total number of rows in the table. 
Each of the N subsequent lines contains 2 space-separated strings denoting a person's first name and email ID, respectively.
* Output Format
Print an alphabetically-ordered list of first names for every user with a gmail account. Each name must be printed on a new line.
