# techtinium_assignment

Inputes are as follows:
 
* First line given N, no. of machine available. Next line indivisual capacity(C) of machine.
* C1 C2 .... CN.  Next line indivisual cost($) of machine.
* $1 $2 .... $N. Next line total capacity required and No. of Hours.
* Capacity Hours

*Note #1: When a particular machine is not available I have taken cost as INT_MAX, "2147483647" since we have to find minimum cost.
      #2: I am assuming, there always the case "Capacity get exhausted" i.e Capacity at end should be 0. Below test cases follows these           assumptions

TestCase #1 for New York.
---------------------
6
10 20 40 80 160 320
120 230 450 774 1400 2820
1150 1

Output:
10150

TestCase #2 for India.
-------------------
6
10 20 40 80 160 320
140 2147483647 413 890 1300 2970
1150 1

Output:
9520

*Note: Here second machine is not available.

TestCase #3 for China.
-------------------
6
10 20 40 80 160 320
110 200 2147483647 670 1180 2147483647
1150 1

Output:
8570

*Note: Here 3rd and 6th machine are not available.

TestCase #4.
-----------------
6
10 20 40 80 160 320
2147483647 413 890 1300 2970 110
10 2

Output:
Impossible to allocate

*Note: Since given capacity is 10 and machine with capacity 10 is not available, we can't allocate.

