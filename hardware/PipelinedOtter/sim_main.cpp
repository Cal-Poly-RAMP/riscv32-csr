
  #include "../obj_dir/VOTTER_SIM.h"
  #include "verilated.h"
  int main(int argc, char** argv, char** env) {
      VerilatedContext* contextp = new VerilatedContext;
      contextp->commandArgs(argc, argv);
      Verilated::traceEverOn(true);
      Verilated::mkdir("logs");
      VOTTER_SIM* top = new VOTTER_SIM{contextp};
      top->CLK = 0;
      int count = 0;
      while (!contextp->gotFinish()) 
      { 
        contextp->timeInc(1);
        top->CLK = !top->CLK;
        top->eval(); 
      }
       top->final();
      delete top;
      delete contextp;
      return 0;
  }