# Unique Paths – Robot Grid Movement

This repository contains a C++ implementation of the **Unique Paths** problem. The task is to determine the number of possible unique paths for a robot to move from the top-left corner to the bottom-right corner of an `m x n` grid, moving only **right** or **down**.

## Problem Statement

A robot is located at the top-left corner of an `m x n` grid. It can only move either down or right at any point in time. Given the values of `m` and `n`, return the total number of unique paths the robot can take to reach the bottom-right corner.

### Example
Input: m = 3, n = 7
Output: 28
# Unique Paths

## Approach

The solution uses **dynamic programming** to build a 2D table where each cell stores the number of ways to reach that cell. The final result is stored in the bottom-right cell of the grid.

## 🧰 Tools

- **Language:** C++
- **IDE:** Visual Studio 2022

## ▶️ How to Run in Visual Studio 2022

1. **Open Visual Studio 2022**.
2. Go to **File > New > Project**.
3. Select **Console App (C++)**.
4. Name the project (e.g., `UniquePaths`) and click **Create**.
5. Replace the content in `main.cpp` with the code from this repository.
6. Press `Ctrl + F5` to build and run the program.

## 📁 Files

- `main.cpp` – Contains the implementation and sample input/output.

## 📄 License

This project is licensed under the MIT License for educational purposes
