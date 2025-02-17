/* { dg-do compile } */
/* { dg-additional-options "-march=rv32gcv_zvfh -mabi=ilp32d --param=riscv-autovec-preference=scalable -fdump-tree-optimized-details -fno-schedule-insns -fno-vect-cost-model" } */

#include "ternop-3.c"

/* { dg-final { scan-assembler-times {\tvmacc\.vv} 8 } } */
/* { dg-final { scan-assembler-times {\tvfmacc\.vv} 9 } } */
/* { dg-final { scan-tree-dump-times "COND_LEN_FMA" 9 "optimized" } } */
