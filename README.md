# BSQ
A program to find the largest possible square on a board while avoiding obstacles, in the shortest time possible.

*This is a school project*

### Board description
A board is represented by a file passed as the program’s argument. The file is valid if it is respecting those constraints:
- Its first line contains the number of lines on the board (and only that),
- '.' (representing an empty place) and 'o' (representing an obstacle) are the only two characters for the other lines
- All of the lines are of the same length
- In a solved board, '.' are replaced by 'x' where the largest square was found

### How to test it
`./bsq board.txt`

*A test board ("testboard.txt") is located at the root's repository for convenient testing*

##### Board generator
For testing purposes, a board generator is present in the projet's repository:

`./board_generator.pl x_size y_size density`

*The density must be a value between 0 and 100, it represents the obstacle's ('o's) density in the board*
