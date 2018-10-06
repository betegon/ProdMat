############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project practica1_clase
set_top prodMat
add_files practica1_clase/solution1/source/config.h
add_files practica1_clase/solution1/source/prodMat.c
add_files practica1_clase/solution1/test/test.c
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
set_clock_uncertainty 2
#source "./practica1_clase/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
