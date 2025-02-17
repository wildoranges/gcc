/* { dg-do compile } */
/* { dg-additional-options "-march=rv32gcv_zvfh -mabi=ilp32d --param=riscv-autovec-preference=scalable -fdump-tree-optimized-details -fno-vect-cost-model" } */

#include "ternop-7.c"

/* TODO: we don't have undefine IR for COND_LEN_* operations,
    which will produce redundant move instructions here.
    Will add assembler-not check of 'vmv' instructions in the future.  */
/* { dg-final { scan-tree-dump-times "COND_LEN_FMS" 3 "optimized" } } */
