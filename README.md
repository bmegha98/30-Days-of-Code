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
