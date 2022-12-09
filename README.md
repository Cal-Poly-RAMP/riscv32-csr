# RISCV32 Spec CSR
## Overview - Intterrupt Support for the Otter

## Makefile Usage

### Hardware Simulation
Development is done in system verilog with linting and simulation done in verilator. When in the directory ```hardware```, the following make commands are useful:

```make``` to compile all system verilog files into verilator format and build a simulation executable

```make run``` to run the executable using the hex code found in ```otter_memory.mem```

```make view``` to launch gtkwave to view simulation results

### Software Compilation
Software compilation is done in the ```test``` directory using the riscv toolchain. Run:

```make testAll``` to compile testAll program into build directory

```make matmul``` to compile testAll program into build directory

After compiling, copy the contents of ```mem.txt``` in ```build``` into ```otter_memory.mem``` in ```hardware```

## Verification 

To ensure that this CSR implementation was data safe and not losing instructions or data, two test programs were developped. The following waveforms are corrected after debugging and solving edge cases involving the CSR's interrupt handling.

The first of these programs is testAll modified with interrupts. The finish line denotes a run of every test, and the fail line denotes that the fail state was entered. As can be seen, the finish state is reached without ever hitting fail.

![image](https://user-images.githubusercontent.com/74398368/206650547-9deac8a9-33b3-49d1-a947-85dfe27b8b91.png)

The second program used for testing is matmul (matrix multiplication) modified with interrupts. This program multiplies 2 16x16 matrices and then verifys that result against a sample solution. If the solution is valid, the following LED pattern is written.

![image](https://user-images.githubusercontent.com/74398368/206650572-0923eea2-f076-4c8a-bc77-d0c9881f6b1f.png)

If the solution to matmul is invalid, a different LED patter appears featuring 0xFFFF. This was generated purposefully by changing a result in the sample solution.

![image](https://user-images.githubusercontent.com/74398368/206650595-9730f2c3-f617-4302-b018-d312b3fe4fba.png)
