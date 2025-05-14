## 🚍 Basic Booking System in C++

This is a **simple console-based booking system** built using **C++**, designed specifically for beginners who want to practice their programming fundamentals. It simulates a basic seat booking system for a bus or train where users can **view available seats**, **book a seat**, **cancel bookings**, and **print ticket details**.

---

### 🧠 Concepts Used

This project demonstrates the use of several **core programming concepts in C++**, including:

#### 🔹 `struct`

* The `Booking` struct is used to store data for each seat.
* It contains fields like `name`, `age`, `source`, `destination`, `seat_number`, and a flag `is_booked`.

#### 🔹 Arrays

* An array of `Booking` structs (`train[MAX_SEATS]`) is used to represent all the seats.
* This teaches how to manage collections of structured data.

#### 🔹 Constants and Macros

* `#define MAX_SEATS 50` is used to set the maximum number of available seats. Changing this value adjusts the entire system accordingly.

#### 🔹 Functions

* The logic is modularized into functions like:

  * `initializeSeats()` – resets all seats to unbooked.
  * `displayAvailableSeats()` – shows all unbooked seats.
  * `bookSeat()` – books a seat and stores passenger info.
  * `cancelSeat()` – cancels an existing booking.
  * `printTicket()` – prints booking details for a specific seat.

#### 🔹 Conditionals and Loops

* Uses `if-else` conditions to validate inputs and booking states.
* A `do-while` loop is used in `main()` to keep the system running until the user chooses to exit.

#### 🔹 Input/Output (`cin`, `cout`)

* Console-based input and output allow interaction with the system through a text-based interface.

#### 🔹 Basic Error Handling

* Checks for invalid seat numbers and prevents double booking.

---

### ✨ Features

* 🔎 View available seats
* 📝 Book a seat with passenger name, age, source, and destination
* ❌ Cancel a booking
* 🎫 Print ticket details
* ❗ Prevents double-booking and handles invalid inputs gracefully

---

### 🛠 Technologies Used

* **C++**
* Standard C++ Libraries: `<iostream>` and `<string>`

---

### 🧑‍💻 Ideal For

* C++ beginners looking for small, practical projects
* Students practicing basic data structures and logic
* Academic mini-projects or demonstration assignments

---

### 📦 How to Run

1. Clone the repository:

   ```bash
   git clone https://github.com/juniorcoderr/basic-booking-system-cpp.git
   ```
2. Compile the code:

   ```bash
   g++ booking.cpp -o booking
   ```
3. Run the executable:

   ```bash
   ./booking    # on Linux/Mac
   booking.exe  # on Windows
   ```

---

### 📌 Possible Future Enhancements

* Add file I/O to save and load bookings
* Use dynamic memory and classes (OOP version)
* Add a simple GUI using libraries like Qt or SFML
* Expand to support multiple buses/trains
