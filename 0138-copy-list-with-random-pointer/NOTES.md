**Step 1:**
We need an iterator for traverse, need a next variable to store the current next when it is going to attach on copied node.
​
![](http://github.com/Meshkat-Shadik/FlutterTextFieldDropDown/assets/31488481/e691a8c1-7507-40a3-b54f-0701438e88df)
​
​
​
**Step 2:**
traversing to the whole merged list, if any one has random then, attach it to it's next node.
​
![](http://github.com/Meshkat-Shadik/FlutterTextFieldDropDown/assets/31488481/239b3628-ac8c-465f-bfcf-b4835a3e2d19)
​
​
**Step 3:**
detach the normal and copied node using a prehead. prehead normally a dummy node.
We need c node for copied node and cIt for copied-node traverser initially at prehead. So,
c = it->next (as first one is original input)
cIt->next = c (traverser always attached with c as both are used for copied)
cIt = c (same as before - update the cIt's current position)
​
Then,
move it->next to it->next->next for the original input.
​
finally prehead's next will be the head for copied linked index.
​
![](http://github.com/Meshkat-Shadik/FlutterTextFieldDropDown/assets/31488481/02d246e7-9bfc-45bf-8eb2-0c29d98c5434)
​
​
**Full Document**
https://drive.google.com/file/d/1XTcyPFan8qTyZj0H-2Sft_3vJMksXi6x/view
​
**Explanation Video**
https://youtu.be/byOMKHJezLE?si=AgWbHy4GWUA-a4Vp
​

## Final Process Graph
<img width="1678" alt="image" src="https://github.com/Meshkat-Shadik/my_leetcode_practices/assets/31488481/149793a9-3a23-46db-b995-e06081c8b560">

​
​
​
​
