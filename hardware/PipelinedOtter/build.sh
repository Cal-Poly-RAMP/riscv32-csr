source ~/oss-cad-suite/environment
export SYSTEMC_LIBDIR=/usr/local/systemc-2.3.4/lib-linux64
export SYSTEMC_INCLUDE=/usr/local/systemc-2.3.4/include
export CXX=g++-10
verilator -cc OTTER_SIM.sv bram_dualport_pipelined.sv CLK_DIV_FS.v sim_main.cpp -build -timing --trace --exe --threads 4