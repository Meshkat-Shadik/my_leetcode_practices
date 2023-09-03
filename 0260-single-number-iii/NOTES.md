5 & mask  - 101 & 010 = 000
​
We have to keep in mind that,
in 110 the result we have to find that is, 011 and 101
​
in 110 the mask is 010, now in the mask the 1 means either a and b are not same, (0 or 1), because then it will turns 0. (a^b) .
a,b are the two numbers we need to extract from the 110
​
so, anding with mask will give two outcomes, 1 and 0,
if 1 then it will go the a, and if 0 then it will go to the b.
​
and we loop through each items and keep XORing because if we do that, other duplicates are got cancelled.
​
​
2. To finding rightmost set bit we can use this formula, a & (-a)
![](https://github.com/Meshkat-Shadik/FlutterTextFieldDropDown/assets/31488481/563e47e3-94c2-4594-bd29-94c84f7e84bf)
​
​
Video Explanation:
https://www.youtube.com/watch?v=vIPuhr2-dhk&list=PLEL7R4Pm6EmCLLeXClTK9TalPIrfE7XIe&index=7
​
​
​
​
​
​
​
​
​
​