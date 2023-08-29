![](https://github.com/Meshkat-Shadik/my_leetcode_practices/assets/31488481/f2aaf43d-155c-44b3-860d-469968f953e9)
​
​
**OPTIMIZED**
We have to count the number of **Y** from the right and number of **N** from the left of a position. because then we can sum up the result which is minimum as possible.
​
Now instead of extra space, our goal is to minimize **N** and maximize **Y**. so we +1 when Y is found and -1 when N is found. and also our goal is to maximize the sum of that position. After iterating whole list we can found our sum.
​
We need to calculate the maximum sum because, maximum sum denotes the Y is maximizing and N is minimizing, i.e. max sum has the highest number of Y and lowest number of N.