# checkers
implementation of ai checkers


Checker Program - Due Sunday night November 10 at midnight
Program Description

Program source code
You will code a search algorithm to play a "reasonable" game of checkers. Your search should be at least as robust as the Alpha-Beta Pruning algorithm on top of mini-max. Your program must make a move within in a fixed time limit that will be passed in as a parameter at the beginning of the game. There are no constraints on the depth you can seach to except those imposed by the time limit you are given to make a move in. Because of the time limit, your program will have to use reasonable heuristics in order to find good moves in the limited time.  If your program exceeds the time limit for any move then you will automatically lose that game.

I will provide a few checkers oponents that you can test your mettle against. These will include a random player, a depth limited player restricted to depth 5 that uses the standard material advantage heuristic, and a non-optimized player that uses iterative deepening along with alpha beta pruing and minimax in conjunction with the material advantage heuristic. I will probably also send out a few other players of varying skill levels to motivate (or discourage) you.

In order to receive any credit on this asignment, Your program must beat the random player 100% of the time.

If your player does not consistantly beat the depth 5 limited player in a 3 second game then you will lose a severe number of points on this assignment.

You must also consistantly beat the non-optimized alpha beta player in order to receive an A grade.

You cannot deliberately sabotage your opponent’s efforts.  This means among other things that you must free all possible memory, close all open handles, threads, etc. after your move and you must not use cpu cycles during your opponent's moves.

To receive full credit your program must fulfill the requirements above and play "reasonably well. Your program must be submitted with a make file that compiles it, and it must compile on onyx.  Along with your code, you must submit a short (5 or so) page write-up that should cover how you developed your player, the things you tried, how you tested it, and detailing the final approach and heuristics you used, with a conclusion on how well it worked. In addition, your writeup should state who worked on the program with you (if you are working with someone else) and what each person did, and the amount of time that each person spent on this. Make sure you turn in a professional writeup!

The person(s) with the best playing program (the one which wins most consistently against other programs) will be given some extra credit along with the undying glory of having beat the pants off of the rest of the class, and the winner will also be given something substantial like a taco. Your programs will also be tested against champions from years past just to see where you fit in the eternal scheme of things.  

Submit via Onyx

Submit all required parts via onyx as:

submit tandersen 457 p3

