# Introduction
The Uber Ride Sharing Application is a C++ program that simulates the functionality of the popular ride-sharing service, Uber. This application allows users to sign up, log in, request a ride, and provide feedback on their experience.
Features

User Registration and Login
Ride Booking
Real-time Ride Information (Active Drivers, Distance, Fare, Arrival Time)
Wallet Management
Ride Feedback

# Requirements
To run the Uber Ride Sharing Application, you'll need the following:

C++ compiler (e.g., g++, Visual C++)
Windows.h library

# Installation

Download or clone the repository to your local machine.
Make sure all the files (register.h, loginacc.h, and project Uber.cpp) are in the same directory.
Compile the project Uber.cpp file using your C++ compiler.
Run the compiled executable.

# Usage

Upon running the application, you'll be presented with the login/sign-up menu.
If you're a new user, select 'S' to sign up and enter your personal information.
If you're an existing user, select 'L' to log in using your email and password.
After logging in, you can request a ride by entering the pickup and drop-off locations.
The application will display the ride details, including the number of active drivers, distance, fare, and estimated arrival time.
Once the ride is completed, you can provide feedback on your experience.

# File Structure

register.h: Contains the Register class, which handles user registration and personal information.
loginacc.h: Contains the login class, which handles user login functionality.
project Uber.cpp: The main program file that integrates the Register and login classes, and implements the Uber ride sharing functionality.

# Requirements.txt
There are no external libraries required to run this application. The program uses only standard C++ libraries, including iostream, stdlib.h, ctime, and windows.h.
Contribution
If you find any issues or have suggestions for improvements, please feel free to submit a pull request or open an issue on the GitHub repository.
