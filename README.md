## 🏦 The Banker’s Algorithm (Operating Systems Project)

An implementation of the **Banker’s Algorithm** for **deadlock avoidance** in Operating Systems.
This project determines whether a system is in a **safe state** based on process resource requests and allocations.

---

## 📌 Project Overview

The **Banker’s Algorithm**, proposed by **Edsger Dijkstra**, is a classic deadlock avoidance algorithm used in operating systems.
It ensures that resource allocation always keeps the system in a **safe state**, preventing deadlocks.

This project simulates the algorithm by checking whether a given set of processes and resources can be executed in a safe sequence.

---

## 🎯 Objectives

* Detect whether a system is in a **safe or unsafe state**
* Prevent **deadlock** during resource allocation
* Simulate real-world **process scheduling constraints**
* Strengthen understanding of **Operating Systems resource management**

---

## 🧠 Key Concepts Used

* Banker’s Algorithm
* Deadlock avoidance
* Process scheduling
* Resource allocation matrices
* Safe state detection
* Operating Systems fundamentals

---

## 🧾 Problem Description

Given:

* `n` processes
* `m` resource types
* Total available resources
* Maximum resource claim matrix
* Current allocation matrix

The program determines whether **all processes can finish execution safely**.

---

## 📥 Input Format

1. Two integers `n` and `m`
2. Resource vector (total resources for each type)
3. Claim (maximum) matrix of size `n × m`
4. Allocation matrix of size `n × m`

---

## 📤 Output Format

* **`Yes`** → System is in a safe state
* **`No`** → System is NOT in a safe state (deadlock possible)

---

## 🧪 Sample Test Cases

### Test Case 1

**Input:**

```
5 3
10 5 7
...
```

**Output:**

```
No
```

### Test Case 2

**Input:**

```
5 3
10 5 7
...
```

**Output:**

```
Yes
```

(Additional test cases included in the project)

---

## 💻 Implementation Details

* **Language:** C++
* **Algorithm:** Banker’s Algorithm
* **Approach:**

  * Calculate **Need Matrix**
  * Track **Available Resources**
  * Repeatedly find a process that can safely execute
  * Determine safe or unsafe state

---

## 📂 Project Structure

```
The-Banker-s-Algorithm/
│
├── main.cpp
├── README.md
└── test_cases/
```

---

## ▶️ How to Run

1. Compile the program:

```bash
gcc bankers.c -o bankers
```

2. Run the program:

```bash
./bankers
```

3. Provide input as specified

---

## 🏫 Academic Information

* **Course:** Operating Systems
* **University:** Hubei University of Technology
* **Student Name:** Muntasir Md Fahim (王一然)
* **Student ID:** 1911521213
* **Class:** 19 lq CST

---

## 📚 References

* Operating System Concepts (Silberschatz, Galvin, Gagne)
* Textbook: *The Banker’s Algorithm for Multiple Resources* (pp. 454–456)
* GeeksforGeeks
* Stack Overflow

---

## 📜 License

This project is developed for **academic and educational purposes**.
You are free to use, modify, and learn from it with proper attribution.

---
