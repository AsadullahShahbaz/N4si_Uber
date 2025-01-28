# Uber-Clone-C-
### Documentation for Uber Ride Simulation (C++ OOP Project)

#### **Overview**
This Project simulates a simple Uber-like trip-hailing device the use of item-orientated programming (OOP) in C++. It consists of functions including person registration, login, wallet management, trip reserving, and feedback. The gadget permits a consumer to both join up or log in, pick out a pickup and drop location, pick out a vehicle, and get information of the trip, consisting of value and available drivers. Finally, it enables customers to depart comments for his or her ride.

#### **Classes**

1. **Account** (Inherits `Register`, `login`):
    - Responsible for person registration and login.
    - Manages the person's pockets for bills.
  
    **Attributes:**
    - `char x`: A variable to take user input for either login (`L`) or signup (`S`).
    - `flow pockets`: Holds the wallet quantity for the consumer.
    
    **Methods:**
    - `setLogInSignUp()`: Prompts the person to both log in or sign on. It calls the `Register` methods for signup and `login` methods for logging in.
    - `walletamount()`: Prompts the consumer to input the quantity for their pockets.
    - `get_walletamount()`: Returns the consumer's modern-day wallet stability.

2. **Ride** (Inherits `Account`):
    - Responsible for dealing with experience information inclusive of car selection, fare calculation, journey fame, and remarks.
    
    **Attributes:**
    - `int drivers`: A placeholder variable for the wide variety of drivers available nearby.
    - `int vehicle`: Stores the kind of car decided on with the aid of the person (1 for Moto, 2 for Uber Mini, three for Uber Go).
    - `flow distance`: Stores the randomly generated distance for the journey.
    - `go with the flow truthful`: Stores the fare calculated for the journey.
    - `string pickup`: Stores the consumer's pickup place.
    - `string drop`: Stores the user's drop-off region.
    
    **Methods:**
    - `drivers_active()`: Randomly generates a number of active drivers near the user.
    - `set_pickup()`: Prompts the user to enter their pickup point.
    - `get_pickup()`: Returns the pickup point entered by means of the person.
    - `set_drop()`: Prompts the consumer to enter their drop-off point.
    - `get_distance()`: Randomly generates a distance for the trip between 0.Five and 30 kilometers.
    - `set_vehicle()`: Allows the consumer to pick the car type from Moto (1), Uber Mini (2), or Uber Go (three).
    - `get_fair()`: Calculates the fare based totally on the automobile type and distance.
    - `arrival_time()`: Randomly generates an anticipated arrival time for the driving force.
    - `current_time()`: Displays the modern-day neighborhood time when the journey is booked.
    - `display_ride()`: Displays all relevant journey details (lively drivers, distance, fare, and many others.).
    - `remainingbal()`: Calculates the final pockets stability after the trip fare is deducted.
    - `remarks()`: Allows the user to offer remarks on their journey experience with a celebrity rating.

#### **Details of Important Methods**

- **setLogInSignUp()**: This technique handles each login and registration. It makes use of `Register` and `login` magnificence techniques for coping with consumer credentials:
  - If the consumer selects `S` (sign up), it invokes the `set_name()`, `set_age()`, `set_email()`, and `set_password()` techniques from the `Register` magnificence to create a new person.
  - If the person selects `L` (log in), it activates the user for their login credentials and verifies them by using evaluating with the saved e-mail and password from the `Register` magnificence.

- **walletamount()**: Prompts the consumer to input their pockets amount, that is used for purchasing the ride.

- **get_fair()**: This technique calculates the fare based totally on the selected automobile type and the randomly generated trip distance. 
  - Moto: Base fare is forty PKR for a brief ride (<= 2 km) or 15 PKR in step with kilometer for longer rides.
  - Uber Mini: Base fare is 50 PKR for quick rides or 25 PKR in line with km for longer rides.
  - Uber Go: Base fare is 80 PKR for quick rides or 30 PKR according to km for longer rides.

- **remainingbal()**: This approach calculates and returns the ultimate stability inside the user’s pockets after deducting the fare for the ride.

- **feedback()**: After the experience, the user is requested to offer remarks inside the form of a celebrity score (Excellent, Good, Average, Poor, Worst). It also shows the closing wallet balance.

#### **Main Function**

The `most important()` characteristic creates an item `U` of the `Ride` magnificence and plays the following actions:

1. Registers  users through placing their name, electronic mail, password, and age.
2. Allows the user to log in or join up with the aid of calling `setLogInSignUp()`.
3. Prompts the consumer to enter pickup and drop locations, choose a automobile kind, and think about details together with distance, fare, and arrival time.
Four. Prompts the consumer to go into their wallet quantity, calculates the final stability after the trip, and collects comments.

#### **Code Flow**

1. **User Login or Sign-up**: The application first asks the consumer whether they want to log in or sign on. If they select sign on, their details (call, age, email, and password) are stored. If they pick login, the program prompts for the e-mail and password and verifies them.

2. **Ride Booking**: After successful login, the program prompts the person to enter the pickup and drop points and automobile type. It calculates the experience distance and fare. 

3. **Ride Details**: The software shows the wide variety of drivers nearby, the distance to be traveled, the appearance time of the driving force, and the entire fare.

4. **Payment**: The consumer is caused to enter the amount for their wallet. The closing pockets balance after the ride fare is calculated and displayed.

Five. **Feedback**: After the experience is complete, the consumer is requested to price their experience, and the ultimate pockets balance is proven.

#### **Dependencies**

- **Windows.H**: For the `Beep()` function that offers an audible alert on wrong login tries.
- **ctime**: For producing random journey distances and the current time.
- **stdlib.H**: For using the `rand()` characteristic to simulate random values just like the quantity of lively drivers, distance, and arrival time.

#### **Future Improvements**
- Add records staying power for consumer statistics (e.G., saving to a document or database).
- Handle more facet instances along with invalid input for pockets quantity or remarks.
- Provide more superior features which include trip history, experience cancellation, or motive force ratings.
