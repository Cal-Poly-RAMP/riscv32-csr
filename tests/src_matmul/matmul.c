
#include "dataset.h"
#include <stddef.h>

volatile int * const sseg = (int *) 0x110C0000;

// Given Code for Multiplying NxN matrices 
// Should end up being O(n^3)
void matmul(int N,  const data_t A[], const data_t B[], data_t C[])
{
  int i, j, k;
 
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      data_t sum = 0;
      for (k = 0; k < N; k++)
        sum += A[j*N + k] * B[k*N + i];
      C[i + j*N] = sum;
    }
  }
}

// Letting the compiler optimize multiply;
int mul (int M, int N)
{
  return M * N;
}

// This uses a double for loop but could be accomplished in a single for loop;
// Either way behavior should be O(n^2) when m and n are the same.
void matadd (int M, int N,  const data_t A[], const data_t B[], data_t C[])
{
  int i, j;
 
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      C[i + j*N] = A[i + j*N] + B[i + j*N];
    }
  }
}

void main()
{
  // X Should be volatile to prevent compiler over-optimization
  volatile int x = DIM_SIZE;
  static data_t results_data[ARRAY_SIZE];

  *sseg = 0x12345678; // Writing to SSEG to easily tell how long each thing takes

	matmul  (DIM_SIZE, input1_data, input2_data, results_data);

  // Verify Result of MatMul using included matrix
  for (int i = 0; i < DIM_SIZE * DIM_SIZE; i++)
  {
    if (results_data[i] != verify_data[i])
    {
      // Show Failure on Mismatch
      *sseg = 0xFFFFFFFF;
    }
  }

  *sseg = 0x87654321;
  x = mul     (x, x);
  *sseg = 0x02468ACE;
  matadd  ( DIM_SIZE, DIM_SIZE, input1_data, input2_data, results_data);
  *sseg = 0;
}
