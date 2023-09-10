#include <stdio.h>

int NumOfMoves(int diskCount) {
    if (diskCount == 1) {
        return 1; // If there is only one disk, it can be moved directly to the destination.
    } else {
        // To move 'n' disks from pole A to pole C using B as the temporary pole:
        // 1. Move 'n-1' disks from pole A to pole B using C as the temporary pole.
        // 2. Move the largest disk from pole A to pole C.
        // 3. Move the 'n-1' disks from pole B to pole C using A as the temporary pole.
        // Calculate the number of moves for each step and add them up.
        
        return 2 * NumOfMoves(diskCount - 1) + 1;
    }
}

int main() {
    int diskCount = 3; // Change this to the number of disks you want to calculate moves for
    int moves = NumOfMoves(diskCount);
    
    printf("Number of moves needed to solve Tower of Hanoi with %d disks: %d\n", diskCount, moves);
    
    return 0;
}
