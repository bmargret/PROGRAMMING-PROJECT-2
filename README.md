

# PROGRAMMING-PROJECT-2

## 
## Requirements
 C++ compiler in our case CLion
 Standard libraries (for reading files, using vectors, etc.)

 ## Features
 **Reads and parses team data from a CSV file.**
 **Checks if the teams are correctly loaded.**
 **Generates match fixtures based on the input data.**
 **Randomizes and displays the match schedules.**
 **Organizes fixtures to include appropriate breaks between matches.**

 ## Overview
 Our code effectively outlines how we  to read a CSV file containing team information, generate match fixtures, and display the schedule in a well-organized format. The project is structured to handle various inputs, shuffle the fixtures randomly, and ensure that teams play evenly distributed matches. It uses vectors to store and manage the data efficiently. Below is a Flowchart that best outlines the steps taken to achieve the output.
 
+---------------------------------------+
|             Start Program             |
+---------------------------------------+
                |
                v
+---------------------------------------+
|   Prompt for the CSV file path        |
+---------------------------------------+
                |
                v
+---------------------------------------+
|   Read CSV file (team name, town,     |
|   stadium) and store data in vector   |
+---------------------------------------+
                |
                v
+---------------------------------------+
|   Check if teams were loaded          |
|     - Yes: Proceed                    |
|     - No: Display error and exit      |
+---------------------------------------+
                |
                v
+---------------------------------------+
|   Generate match fixtures for all     |
|   teams from different towns          |
+---------------------------------------+
                |
                v
+---------------------------------------+
|   Randomize (shuffle) the fixtures    |
+---------------------------------------+
                |
                v
+---------------------------------------+
|   Display the fixtures in pairs with  |
|   weekend breaks after every two      |
|   matches                             |
+---------------------------------------+
                |
                v
+---------------------------------------+
|              End Program              |
+---------------------------------------+

## Project Structure
 Main.cpp: Contains the core logic for reading the CSV and generating fixtures.
 README.md: Documentation for understanding the project flow and usage.
 teams.csv: Sample CSV file containing team names, towns, and stadiums.
 License: MIT license
