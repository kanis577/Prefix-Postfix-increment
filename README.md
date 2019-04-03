# Prefix-Postfix-increment
This time is working on the prefix and the postfix increment (i++ and ++i)
And the operator overload to <<

Q2 -Mytime
Description (cont.)
•
Overload increment (++) operator to increase one minute of Mytimeobject. You must implement in both prefix and postfix expression
•
Last, please overload (<<) operator from ostreamlibrary, in order to get the output in the following format:
•
First of all, you need to insert a underline(_) between words and numbers
•
While the hour or minute is bigger than 1 (not include 1), please add “s”to make it plural. (e.g. hours/minutes)
•
No need to line feed!!
[Remind]
There will be not “cout” function in header file, all the coutfunction will be called in main function!

Input restriction
Hour will be in range 0 to 1000
Minute will be in range 0 to 59

Judging policy
According to the grading policy of this question, while the judge parameter in the main file is “1”, we will judge the result of implementation including “increment operator overloading in both prefix and postfix way”.
However, in our five judging data, there will be three set of judge==1 cases.

Sample Input 2:

1 0 4 29 59 7 10
0_hour_4_minutes
29_hours_59_minutes
0_hour_0_minute
timeA+ timeB30_hours_3_minutes
timeA* mult1 0_hour_28_minutes
mult2 * timeB299_hours_50_minutes
timeC299_hours_50_minutes
timeC299_hours_52_minutes
