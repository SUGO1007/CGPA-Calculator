# CGPA Calculator

The CGPA Calculator is a C++ program designed to calculate the cumulative grade point average (CGPA) for a student. It organizes courses across multiple semesters, accepts grades for each course, and computes both the semester GPA (SGPA) and overall CGPA.

## Table of Contents

- [Project Overview](#project-overview)
- [Project Structure](#project-structure)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

This CGPA Calculator stores course information, such as course code, course name, and credit hours, for each semester in a nested vector structure. It calculates the SGPA for each semester based on user-provided grades, and then uses these values to determine the overall CGPA.

## Project Structure

The main classes in the project are:

### 1. `Course`

Represents a single course with:
- `course_code`: The unique identifier for the course.
- `course_name`: The name of the course.
- `credit`: The number of credits assigned to the course.

### 2. `Semester`

Represents a semester containing multiple `Course` objects. This class:
- Stores a list of courses in the semester.
- Provides a method to display all courses and credits for the semester.

### 3. `Departments`

Represents a department containing multiple `Semester` objects. This class:
- Stores all semesters in a department.
- Displays all courses and credits across semesters.

### 4. `Sgpa`

Calculates the SGPA for a single semester. This class:
- Uses a static `unordered_map` to store grade values.
- Computes weighted grade points for each course based on user input.

### 5. `Cgpa`

Calculates the cumulative GPA by combining SGPAs across multiple semesters. This class:
- Prompts the user to continue calculating for subsequent semesters.
- Computes the final CGPA based on the total credits and weighted grade points.

## Features

- **Course Management**: Stores and organizes course information by semester.
- **SGPA Calculation**: Computes the SGPA for individual semesters.
- **CGPA Calculation**: Calculates the overall CGPA across semesters.
- **Modular Structure**: Easily extensible to add more courses, semesters, or departments.

## Technologies Used

- **Programming Language**: C++ (Standard Library)
- **Headers**: Custom headers for `Course`, `Semester`, `Departments`, `Sgpa`, and `Cgpa`.

## Getting Started

### Prerequisites

Ensure you have:
- A C++ compiler (e.g., GCC or MSVC)

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/SUGO1007/CGPA-Calculator.git
   ```
2. Navigate to the project directory:
   ```bash
   cd CGPA-Calculator
   ```
3. Compile the program:
   ```bash
   g++ main.cpp -o cgpa_calculator
   ```
4. Run the program:
   ```bash
   ./cgpa_calculator
   ```

## Usage

1. Run the program.
2. The program will display each course and prompt you to enter a grade.
3. Enter the grade for each course (e.g., `O`, `A+`, `A`, `B+`).
4. After each semester, choose whether to continue to the next semester.
5. At the end, the program displays the calculated CGPA.

## Example

![image](https://github.com/user-attachments/assets/a5e3ebcf-a5c5-48ec-8a6d-8981e2543f2d)




## License

This project is licensed under the MIT License.

--- 

