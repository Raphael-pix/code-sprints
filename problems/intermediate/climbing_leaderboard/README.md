# Climbing the leaderboard

An arcade game player wants to climb to the top of the leaderboard and track their ranking. The game uses Dense Ranking, so its leaderboard works like this:

- The player with the highest score is ranked number  on the leaderboard.
- Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.

## Problem Statement

### Task
Find the players rank after every new score

### Function Description

climbingLeaderboard function has the following parameter(s):

- int ranked[n]: the leaderboard scores
- int player[m]: the player's scores

Returns: 
- int[m]: the player's rank after each new score

### Constraints

- 1 ≤ *n* ≤ 2 × 10<sup>5</sup>
- 1 ≤ *m* ≤ 2 × 10<sup>5</sup>
- 0 ≤ *ranked[i]* ≤ 10<sup>9</sup> for 0 ≤ *i* < *n*
- 0 ≤ *ranked[j]* ≤ 10<sup>9</sup> for 0 ≤ *j* < *m*
- The existing leaderboard,*ranked* , is in descending order.
- The player's scores,*player* , are in ascending order.

### Subtask

For **60%** of the maximum score:
-  1 ≤ *n* ≤ 200
- 1 ≤ *m* ≤ 200

### Example

**Input:**
`
ranked[7]= [100, 100, 50, 40, 40, 20, 10]
`
`
player[4] = [5, 25, 50, 120]
`
**Output**
`
rank[m] = [6, 4, 2, 1]
`

### Where to write your code

Each language has a starter file:
- `climbing_leaderboard.py`
- `climbing_leaderboard.js`
- `climbing_leaderboard.c`
- `climbing_leaderboard.cpp`
- `ClimbingLeaderboard.java`

Open the file and complete the `climbingLeaderboard` function.