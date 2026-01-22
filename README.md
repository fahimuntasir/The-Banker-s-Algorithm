# Banker's Algorithm in C/C++

This repository contains an implementation of the **Banker’s Algorithm**, a classic **deadlock avoidance algorithm** used in operating systems for safe resource allocation.

---

## 📌 Project Overview

The Banker’s Algorithm determines whether a system is in a **safe state** before granting resource requests to processes.
If a safe sequence exists, all processes can complete execution without causing a deadlock.

This implementation takes system configuration as input and outputs whether the system is **safe (`Yes`)** or **unsafe (`No`)**.

---

## ✨ Features

* Supports multiple processes and multiple resource types
* Calculates **Available**, **Need**, and **Work** matrices
* Performs **safety algorithm** check
* Determines whether a **safe sequence exists**
* Efficient and easy-to-read C/C++ implementation

---

## 🧠 Algorithm Explanation

The algorithm works by:

1. Calculating the **Available** resources
2. Computing **Need = Max − Allocation**
3. Iteratively finding a process whose `Need ≤ Available`
4. Releasing allocated resources after a process completes
5. Repeating until:

   * all processes complete → **safe state**
   * or no further progress is possible → **unsafe state**

---

## ⏱ Time Complexity

| Operation           | Complexity      |
| ------------------- | --------------- |
| Safety check        | O(n² × m)       |
| Resource comparison | O(m)            |
| Overall             | Polynomial time |

Where:

* `n` = number of processes
* `m` = number of resource types

---

## 🧾 Input Format

1. Number of processes (`n`) and number of resources (`m`)
2. Total instances of each resource
3. Maximum demand matrix (`n × m`)
4. Allocation matrix (`n × m`)

---

## 📤 Output

* Prints `Yes` if the system is in a safe state
* Prints `No` if the system is in an unsafe state
* (Optional) Prints a safe execution sequence

---

## 🛠 How to Compile and Run

### Using GCC

```bash
gcc bankers_algorithm.c -o banker
./banker
```

---

## 🧪 Sample Output

```
Yes
```

or

```
No
```

---

## 📂 Project Structure

```
The-Banker-s-Algorithm/
│
├── bankers_algorithm.c
├── README.md
└── sample_input.txt
```

---

## 🎓 Course Information

* **Course**: Operating Systems
* **Institution**: Hubei University of Technology
* **Topic**: Deadlock Avoidance & Resource Allocation

---

## ✍ Author

**Md Fahim Muntasir**
Computer Science & Technology

---
