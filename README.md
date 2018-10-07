# ProdMat

## Description
First attemp to design and implement a matrix product algorithm in C for FPGA (embebed system). Using Xilinx Vivado HLS

## Requisites
*   Xilinx Vivado HLS Webpack (available for free in Xilinx web) or Vivado paid versions.

## Project structure
*  source - C code and headers (.h).
*  test   - Test C code.
*  pictures_statistics - pictures with simulated results statistics.

## Algorithm

A classic implementation of matrix multiplication.
*   A[M][L] * B[L][N] = R[M][N] 


## Directives

One of the most common directives when talking about RTL synthesis or High-level synthesis in general, is **pipeline**.
More information about directives is available in [Xilinx Documentation](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=1&ved=2ahUKEwi-1OyukfPdAhVFWBoKHf1qDhYQFjAAegQICRAC&url=http%3A%2F%2Fwww.xilinx.com%2Fpublications%2Fprod_mktg%2Fclub_vivado%2Fpresentation-2015%2Fparis%2FXilinx-AdvancedSynthesis.pdf&usg=AOvVaw3t63mJ16w0dTlO-9P2XuwE)

To show an example, below you can see the latency without using any directive:
![no_pipeline](https://github.com/betegon/ProdMat/blob/master/pictures_statistics/no_pipeline.png)
Latency is then 1621[clock cycles]. 
*Xilinx Doc.: Latency is defined as the number of clock cycles required to produce an output*

Now, specify a directive for loop 'lazoFilas' (image below).
![pipeline_directive](https://github.com/betegon/ProdMat/blob/master/pictures_statistics/pipeline_directive.png)

Latency improved in comparison with the first result (image below), getting as a result 155[clock cycles]
![pipeline](https://github.com/betegon/ProdMat/blob/master/pictures_statistics/pipeline.png)

latency_NoPipeline = 1621 [clock cycles]
latency_Pipeline   = 155  [clock cycles]
change = 1621/155  = 10.458 times smaller

So it is a good change to get to know how to use these directives in order to meet requirements.
