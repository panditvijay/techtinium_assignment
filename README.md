# techtinium_assignment

Algorithm:
----------
Arroach #1 : Find all subset sum(repetition allowed) where sum equal to capacity and find minimum among them.</br>

Time complexity: <b><i>(Capacity^N)*(1/C1)*(1/C2)....*(1/CN)</i></b> which is <b>exponential.</b></br>

Approach #2(Optimization): Since overlapping sub-problem, we don't have to calculate same value again and again. we can store once and return next time. <b>Using <i>dp</i><b/> vector to store the states.
 
Time Complexity: Size of "dp vector" which is <b><i>Capacity*N</i></b>

Inputes are as follows:
------------------------
* First line given N, no. of machine available. Next line indivisual capacity(C) of machine.
* C1 C2 .... CN.  Next line indivisual cost($) of machine.
* $1 $2 .... $N. Next line total capacity required and No. of Hours.
* Capacity Hours

*Note #1: When a particular machine is not available I have taken cost as INT_MAX, "2147483647" since we have to find minimum cost.<br/>
      #2: I am assuming, there always the case "Capacity get exhausted" i.e Capacity at end should be 0. Below test cases follows these           assumptions

TestCase #1 for New York.
---------------------
6<br/>
10 20 40 80 160 320</br>
120 230 450 774 1400 2820<br/>
1150 1

Output:
10150

TestCase #2 for India.
-------------------
6<br/>
10 20 40 80 160 320<br/>
140 2147483647 413 890 1300 2970<br/>
1150 1

Output:
9520

*Note: Here second machine is not available.

TestCase #3 for China.
-------------------
6<br/>
10 20 40 80 160 320<br/>
110 200 2147483647 670 1180 2147483647<br/>
1150 1

Output:
8570

*Note: Here 3rd and 6th machine are not available.

TestCase #4.
-----------------
6<br/>
10 20 40 80 160 320<br/>
2147483647 413 890 1300 2970 110<br/>
10 2

Output:
Impossible to allocate

*Note: Since given capacity is 10 and machine with capacity 10 is not available, we can't allocate.

TestCase #5.
-----------------
6<br/>
10 20 40 80 160 320<br/>
2147483647 2147483647 890 1300 2970 110<br/>
100 2

Output:
Impossible to allocate

*Note: Here 1st and 2nd machine are not available but we can allocate 80, 20 remains and we can't allocate.

TestCase #6.
-----------------
6<br/>
10 20 40 80 160 320</br>
120 230 450 774 1400 2820<br/>
230 5


Output:
11000

TestCase #7.
-----------------
6<br/>
10 20 40 80 160 320</br>
120 230 450 774 1400 2820<br/>
100 24

Output:
24096

TestCase #8.
-----------------
6<br/>
10 20 40 80 160 320</br>
120 230 450 774 1400 2820<br/>
1100 12

Output:
118248
