# Module 2: Class Assessment

This repository contains three small C++ programs that demonstrate object-oriented programming by modelling real-world entities as classes.

Each source file is an independent program and contains its own `main()` function. Compile and run **one file at a time**.

## Concepts Demonstrated

- Creating classes from real-world entities
- Keeping data members private (encapsulation)
- Initializing objects with constructors
- Defining public member functions to perform operations and display information

## Programs

### `Student_class.cpp`

Defines a `Student` class with private data members:

- `rollNo` (`int`)
- `name` (`string`)
- `marks` (`double`)

The constructor initializes these values. The `display()` method prints a student's roll number, name, and marks.

The program creates and displays two students:

- Asha (`101`, `82.5`)
- Rahul (`102`, `90.5`)

### `BankAccount_class.cpp`

Defines a `BankAccount` class with private data members:

- `accountNumber` (`long`)
- `accountHolder` (`string`)
- `balance` (`double`)

It provides these public operations:

- `deposit(double amount)` adds a positive amount to the account balance.
- `withdraw(double amount)` removes a positive amount only when it does not exceed the available balance.
- `displayBalance()` prints the account number, holder name, and current balance.

The program creates an account for Abhinav with an opening balance of `5000`, deposits `2000`, withdraws `1000`, and displays the final balance.

### `Product_class.cpp`

Defines a `Product` class with private data members:

- `productId` (`int`)
- `productName` (`string`)
- `price` (`double`)

The constructor initializes a product, and `displayProduct()` prints its details. The program creates and displays a Laptop product with ID `101` and price `55000`.

## Requirements

- A C++ compiler. The commands below use **G++** (GCC/MinGW) with C++17 enabled.
- A terminal opened in the repository directory.

> The programs use standard C++ features only, so C++11 or newer is sufficient. C++17 is used in the commands as a modern default.

## Compile and Run

### Windows (MinGW/G++)

Compile and run the Student program:

```powershell
g++ -std=c++17 -Wall -Wextra Student_class.cpp -o Student_class.exe
.\Student_class.exe
```

Compile and run the Bank Account program:

```powershell
g++ -std=c++17 -Wall -Wextra BankAccount_class.cpp -o BankAccount_class.exe
.\BankAccount_class.exe
```

Compile and run the Product program:

```powershell
g++ -std=c++17 -Wall -Wextra Product_class.cpp -o Product_class.exe
.\Product_class.exe
```

### Linux or macOS (G++)

Compile and run the Student program:

```bash
g++ -std=c++17 -Wall -Wextra Student_class.cpp -o Student_class
./Student_class
```

Compile and run the Bank Account program:

```bash
g++ -std=c++17 -Wall -Wextra BankAccount_class.cpp -o BankAccount_class
./BankAccount_class
```

Compile and run the Product program:

```bash
g++ -std=c++17 -Wall -Wextra Product_class.cpp -o Product_class
./Product_class
```

## Important Note

Do not compile all three `.cpp` files in a single command because each program defines a separate `main()` function. Build them individually, as shown above.

## Repository Files

```text
.
├── BankAccount_class.cpp
├── Product_class.cpp
├── Student_class.cpp
└── README.md
```
