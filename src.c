#include "include.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 

// function to clear the input buffer and read string 
void clean_input(char *str, size_t size) {
    if (fgets(str, size, stdin)) {
        size_t len = strlen(str);
        if (len > 0 && str[len-1] == '\n') {
            str[len-1] = '\0';
        } else {
            // Clear buffer if it overflowed
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
    }
}

//  This array holds questions for the quiz.
Question quiz_bank[] = {
    {
        "What is the capital of India",
        {"A) Punjab", "B) Haryana", "C) Delhi", "D) Tamil Nadu"},
        "C"
    },
    {
        "What is the chemical symbol for water?",
        {"A) O2", "B) CO2", "C) H2O", "D) NaCl"},
        "C"
    },
    {
        "In what year did the first man walk on the moon?",
        {"A) 1965", "B) 1969", "C) 1971", "D) 1975"},
        "B"
    },
    {
        "What is the capital city of Australia?",
        {"A) Sydney", "B) Melbourne", "C) Brisbane", "D) Canberra"},
        "D"
    },
    {
        "What is the national bird of India?",
        {"A) Parrot", "B) Eagle", "C) Sparrow", "D) Peacock"},
        "D"
    }
    // More questions here...
};

//  calculate the total number of questions 
const int NUM_QUESTIONS = sizeof(quiz_bank) / sizeof(quiz_bank[0]);


// Main Quiz Logic Function
void run_quiz() {
    int score = 0;
    char user_answer[MAX_ANSWER_LEN];

    printf("         Welcome to the C Knowledge Quiz!       \n");

    for (int i = 0; i < NUM_QUESTIONS; i++) {
        // Display the question number
        printf("\n--- Question %d of %d ---\n", i + 1, NUM_QUESTIONS);

        // Print the question text
        printf("%s\n", quiz_bank[i].question_text);

        // Print choices
        for (int j = 0; j < 4; j++) {
            printf("   %s\n", quiz_bank[i].choices[j]);
        }

        // Get user input
        printf("Your answer (A, B, C, or D): ");
        clean_input(user_answer, MAX_ANSWER_LEN);

        if (strlen(user_answer) == 1) {
            user_answer[0] = toupper(user_answer[0]);
        }

        // Compare the user's answer with the correct answer
        if (strcmp(user_answer, quiz_bank[i].correct_answer) == 0) {
            printf("--> Correct! <--");
            score++;
        } else {
            printf("--> Incorrect. The correct answer was %s. <--", quiz_bank[i].correct_answer);
        }
        printf("\n");
    }

    // Final Score 
    printf("           QUIZ FINISHED!                 \n");
    printf("          Your Final Score: %d out of %d  \n", score, NUM_QUESTIONS);

    if (score == NUM_QUESTIONS) {
        printf("           EXCELLENT JOB! You got everything right! \n");
    } else if (score >= NUM_QUESTIONS / 2) {
        printf("           Good effort! You passed the halfway mark. \n");
    } else {
        printf("           Keep studying! You'll do better next time. \n");
    }
    printf("============================================\n");
}


// Main Function: Entry Point
int main() {
    run_quiz();
    return 0;
}