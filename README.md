# DA_BoxGame
A and B are playing a game. In this game, both A and B are initially provided with two boxes (one
for each) which have a set of number (integers) blocks in each box. Number blocks are arranged
in a pattern that one block is kept over another, and these blocks can only be accessed from the
top end of the box.
At the beginning, the system will generate a number set and A will get the number blocks in the
same order while B gets it in the reverse order (see the example below).
During the game, both A and B have to take out the number block which is at the open end of
their own boxes, simultaneously.
According to the values of the blocks taken out by A and B, the system needs to generate the
output as a series of 0,1 and 2 and finally display the winner.
Once game is started, these steps should be followed at each iteration until the game ends.
a. If the number taken out by A is bigger than B’s, A put away the number taken out. B must
put back the number block into the box. System prints 2 on the screen.
b. If the number picked by A is smaller than B’s, B put away the number taken out. A must
put back the number block into the box. System prints 1 on the screen.
c. If both blocks have the same value, then both A and B put away the number blocks taken
out. System prints 0 on the screen.
When one of them left with an empty box, it marks the end of the game. The winner is the one
who took all the number blocks out of the box.
Write a complete C program to implement this game. Before the game starts, the number of
values in the number set (count) should be taken from the keyboard. It should between 5 and 20
inclusive. Accordingly, the system should generate the number set randomly within the range 0
to x (x >= 10). Here x is your student number. For an example, if your student number is
CS_2018_030, x = 30. In the case that your student number is less than 10, add 60 to your
number and take summation as x. This calculation should be clearly shown in your program.
