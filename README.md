# c-project
 C Knowledge Quiz Application
  Project Description
 This is a simple console-based quiz application written in C. It uses structured data (a Question
 struct array) to store multiple-choice questions, collects user input, validates the answers, and
 calculates a final score. It provides immediate feedback after each question and a personalized rating
 at the end.
  Features
 Structured Questions: Questions, choices, and correct answers are stored in a clear, maintainable
 array of C structures.
 Case-Insensitive Input: The application processes the user's single-character input ( A , B , C ,
 or D ) and converts it to uppercase for reliable comparison.
 Input Handling: Includes a robust clean_input function to handle newline characters and clear
 the input buffer, preventing common C input errors.
 Real-time Feedback: Provides immediate feedback ("Correct!" or "Incorrect!") after the user
 submits an answer for each question.
 Final Score Report: Displays the final score out of the total number of questions, along with a
 rating message based on performance.
  Prerequisites
 To compile and run this application, you will need:
 A C compiler (e.g., GCC, Clang).
 A standard library ( stdio.h , stdlib.h , string.h , ctype.h ).
 ⚙ How to Compile and Run
 1. Save the Code: Save the C code (containing main , run_quiz , and clean_input functions) into
 a file named quiz.c .
 2. Compile using GCC: Open your terminal or command prompt and run the following command:
 gcc quiz.c -o quiz
 3. Run the Executable: Execute the compiled program:
 ./quiz
  Application Logic Flow
 The core logic is managed by the run_quiz function, which follows these main steps:
 1. Initialization: The score variable is set to 0.
 2. Question Loop: The program enters a loop that iterates through every question in the
 quiz_bank .
 3. Display & Input: Inside the loop, the current question and its four choices are displayed. The
 user's input is captured using clean_input .
 4. Answer Processing:
 The user's answer is checked: if it's a single character, it's converted to uppercase.
 Decision: The normalized user answer is compared against the correct answer.
 If correct, the score is incremented. If incorrect, the correct answer is revealed.
 5. Final Results: Once the loop finishes (all questions are answered), the quiz ends, and the total
 score is displayed.
 6. Rating: A final rating message is determined based on the score:
 Perfect Score: "EXCELLENT JOB!"
 Above 50%: "Good effort!"
 Below 50%: "Keep studying!"
 