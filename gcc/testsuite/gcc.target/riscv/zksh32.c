/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gc_zksh -mabi=ilp32" } */
/* { dg-skip-if "" { *-*-* } { "-g" "-flto"} } */

#include <stdint-gcc.h>

uint32_t foo1(uint32_t rs1)
{
    return __builtin_riscv_sm3p0(rs1);
}

uint32_t foo2(uint32_t rs1)
{
    return __builtin_riscv_sm3p1(rs1);
}


/* { dg-final { scan-assembler-times "sm3p0" 1 } } */
/* { dg-final { scan-assembler-times "sm3p1" 1 } } */
