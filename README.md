# 🚀 Introduction to C

Welcome to the **Introduction to C** repository! This project contains a collection of essential C programming exercises, ranging from basic arithmetic to file handling and data structures. It is designed for beginners to understand core concepts, logic implementation, and program structure.

---

## 📂 Project Structure

- **`/*.c`**: Source code files for various programming problems.
- **`flowcharts/`**: Visual representations (Flowcharts) of the logic for each program.
- **`output/`**: (Ignored by Git) Contains compiled `.exe` files, you can store your exe files here
- **`compile_all.ps1`**: A PowerShell script to automate the compilation of all programs.

---

## 📝 Program List & Descriptions

| SL | Program Name | Description |
| :---: | :--- | :--- |
| 01 | **Simple Calculator** | Evaluates basic arithmetic expressions using a `switch` statement. |
| 02 | **Quadratic Equations** | Finds the roots of a quadratic equation and handles real/imaginary cases. |
| 03 | **Electricity Bill** | Calculates monthly charges including surcharges and minimum fees. |
| 04 | **Number Pyramid** | Generates a numeric pyramid pattern using nested loops. |
| 05 | **Binary Search** | Implements the binary search algorithm on a sorted array. |
| 06 | **Matrix Multiplication** | Multiplies two matrices after checking for compatibility. |
| 07 | **Taylor Series** | Approximates the Sine of an angle using Taylor's expansion. |
| 08 | **Bubble Sort** | Sorts an array of integers in ascending order. |
| 09 | **String Operations** | User-defined functions for `strlen`, `strcmp`, and `strcat`. |
| 10 | **Student Records** | Uses structures to manage student data and calculate averages. |
| 11 | **Standard Deviation** | Calculates the Mean and Standard Deviation using pointers. |
| 12 | **File Copy** | Copies the contents of one text file to another. |

---

## ⚙️ How to Compile & Run

### Automated Build (Recommended)

I have included a PowerShell script to compile all `.c` files into the `output/` folder at once:

1. Open PowerShell in this directory.
2. Run the script:

   ```powershell
   .\compile_all.ps1
   ```

3. Run any program from the `output/` folder:

   ```powershell
   .\output\01.exe
   ```

### Manual Compilation

Alternatively, you can compile individual files using `gcc`:

```bash
gcc 01.c -o output/01.exe
```

---

## 🗺️ Logic & Algorithms

Every program in this repository includes:

1. **Source Code**: Clean and commented C code.
2. **Algorithm**: Step-by-step logic documented at the end of each `.c` file.
3. **Flowcharts**: Visual diagrams located in the `/flowcharts` directory.

---

## 🛠️ Requirements

- A C compiler (e.g., **GCC** via MinGW or Clang).
- **PowerShell** (for the automated build script).
- **VS Code** (recommended editor).

---
*Happy Coding!* 💻
