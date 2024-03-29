#ifndef HEURISTIC_H
#define HEURISTIC_H

#include <stdint.h>

/* Constants to indicate whether a certain player has won
 * or lost the game (No evaluation = draw) */
#define MAX_EVAL    100
#define MIN_EVAL    -100
#define NO_EVAL     0
#define EVAL_KEEP   -1

/**
 * @brief Calculates the heuristic value of the current board state.
 * This function calculates and returns the heuristic value of the current
 * state of the game board.
 * 
 * @param pmax bitboard of the player to maximize.
 * @param pmin bitboard of the player to minimize.
 * 
 * @return The heuristic value.
 */
int heuristic(uint16_t pmax, uint16_t pmin);

#endif // !HEURISTIC_H
