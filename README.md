# Game of Life (Console Simulator)

A **Conway’s Game of Life simulator written entirely from scratch in C++**, including a **custom console rendering framework**.  
No external libraries, no engines — just raw C++ and console control.

This project focuses on performance, interactivity, and clean terminal visuals.



## Features

- Fully custom **console framework** (rendering, input, timing)
- Interactive **seed drawing mode**
- Multiple **classic Game of Life patterns**
- Adjustable board size, speed, and refresh rate
- Optional **wrap-around edges**
- Clean, minimal terminal UI
- Everything built **from scratch in C++**



## Building the Executable (Windows)

The project includes a PowerShell build script.

### Steps

1. Open PowerShell in the project directory  
2. Run:
   ```powershell
   ./run.ps1
3. This will create a gameoflife.exe* file.
4. run it with given options. Use -help to understand options.
    ```powershell
    GameOfLife.exe -w 120 -h 50 -gr 15 -seed gosper

## Tech Overview

- **Language:** C++
- **Platform:** Windows Console
- **Rendering:** Custom console framework

The console framework used in this project is maintained separately

This simulator was built to explore:

- Cellular automata
- Low-level console rendering
- Interactive terminal applications
- Clean C++ architecture without external libraries

