# Banker's Algorithm (Deadlock Avoidance)

This project implements the **Banker’s Algorithm** for deadlock avoidance in operating systems.

## 📘 Description
The Banker’s Algorithm checks whether a system is in a **safe state** before allocating resources to processes.  
If a safe sequence exists, all processes can complete execution without deadlock.

## 🧮 Input Format
1. Number of processes (n) and resources (m)
2. Total instances of each resource
3. Maximum demand matrix (n × m)
4. Allocation matrix (n × m)

## 📤 Output
- `Yes` if the system is in a safe state
- `No` otherwise
- Prints a **safe sequence** when available

## 🛠 Compile & Run
```bash
gcc bankers_algorithm.c -o banker
./banker
