
all:
	verilator -IPipelinedOtter -cc OTTER_SIM.sv bram_dualport_pipelined.sv CLK_DIV_FS.v PipelinedOtter/sim_main.cpp -build -timing --trace --exe --threads 4

run:
	./obj_dir/VOTTER_SIM
	vcd2fst logs/vlt_dump.vcd logs/vlt_dump.fst
	rm logs/vlt_dump.vcd

view:
	gtkwave logs/vlt_dump.fst --save=waveform.gtkw

clean:
	rm -rf obj_dir