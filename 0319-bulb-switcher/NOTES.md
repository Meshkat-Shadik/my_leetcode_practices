![](https://assets.leetcode.com/users/images/0a8adb86-2e51-4952-af48-dfd1148ceba6_1682559107.5787735.png)
​
We can say that after 6 iterations, bulb 1 and 4 will remain on. Now, If we look
![](https://assets.leetcode.com/users/images/a98f0d15-e251-4071-bd46-723cc8e30ba9_1682559130.6620624.png)
then, we can see that those bulb are remain on, whose factors are odd.
​
Now we can loop through n and check which of those are having odd factors and count a variable, and return the count.
​
[](https://assets.leetcode.com/users/images/4a22e1b1-f62e-47c8-ba62-342b59af8458_1682559165.5627007.png)
From the picture above, we can say that. those having odd number factors are perfect square numbers.
and how can we know the number of perfect square number in between 1 to n. It's the integer sqrt of a number.
​
​
​