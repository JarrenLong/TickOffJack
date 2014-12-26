|+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+|
|                  Tick-Off-Jack                  |
|             A Variation Of The Game             |
|     Tic-Tac-Toe (A.K.A Noughts And Crosses)     |
|  Copyright(c) 2005 JincS. All Rights Reserved.  |
|+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+|

This is Freeware released under the GNU GPL.
Full source code is included
Compiled using Bloodshed's Dev C++ v5.0 BETA
http://www.bloodshed.net

+*+*+*+*+*+*+*+*+*
What's New
+*+*+*+*+*+*+*+*+*
1.) Added the option of playing against a defensive
or offensive AI. Small change, but makes it a little
bit more challenging. 

+*+*+*+*+*+*+*+*+*
How To Play
+*+*+*+*+*+*+*+*+*
Find and open the file toj.exe
You can choose between three different styles of play:

1.) HMN vs CPU:
You versus your computer. You move first.

2.) HMN vs HMN:
You versus a friend.. 2-player mode.

3.) CPU vs HMN:
You versus your computer. You move second.

Or, you can quit the game by entering the convenient
4.) Quit

To enter a selection, type one of the indicated numbers
into the console window and hit [Enter].


+*+*+*+*+*+*+*+*+*
The Game Board
+*+*+*+*+*+*+*+*+*
The game board is set up just like a typical Tic-Tac-Toe board:

__|__|__
__|__|__
  |  |  

I programmed Tick-Off-Jack so that all you need to play (besides a brain)
is the keypad on your keyboard. Each square in the board corresponds to the
same number on your keypad if you were to turn your keypad into the board. So,
if you want to enter your piece into the bottom left corner of the board, you
would enter '1' into the console. Here is a picture of exactly how the board is
set up:

_7_|_8_|_9_
_4_|_5_|_6_
 1 | 2 | 3 


+*+*+*+*+*+*+*+*+*
Known Bugs
+*+*+*+*+*+*+*+*+*
1. The game never shows the last move made at the end of the game.
It is designed to end before it refreshes the screen. That's just how I made it.

2. Uses a dumb logic AI. Checks for basic blocks, and then empty spaces,
and uses a preset quote for "Jack" before the CPU makes a move.


+*+*+*+*+*+*+*+*+*
Files Included
+*+*+*+*+*+*+*+*+*
1. toj.dev    //project file for Dev C++
2. toj.cpp    //main C++ code file
3. SimpCon.h  //Header library I wrote
4. readme.txt //This file
5. toj.exe    //The Game
6. toj.ico    //Game Icon (not necessary for binary use)
