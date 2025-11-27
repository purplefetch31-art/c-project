#ifndef QUIZ_H
#define QUIZ_H

#include <stddef.h> 

// Maximum lengths for question text and answers
#define MAX_TEXT_LEN 256
#define MAX_ANSWER_LEN 10

// Structure Definition for Question
typedef struct {
    char question_text[MAX_TEXT_LEN];
    char choices[4][MAX_TEXT_LEN]; // 4 choices (A, B, C, D)
    char correct_answer[MAX_ANSWER_LEN]; // E.g., "A", "B", "C", or "D"
} Question;

// External declaration for the quiz data bank and question count
extern Question quiz_bank[];
extern const int NUM_QUESTIONS;


/**
 * @brief Clears the input buffer and reads a string safely.
 * @param str The buffer to read the string into.
 * @param size The maximum size of the buffer.
 */
void clean_input(char *str, size_t size);

/**
 * @brief Runs the main quiz logic, iterating through questions and calculating the score.
 */
void run_quiz();

#endif