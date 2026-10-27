// Function : helmholtz_dsp
// Namespace: 
// Entry    : 00572aa0
// Prototype: undefined helmholtz_dsp(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 00572aa0 - 00572ad1


/* WARNING: Unknown calling convention: __cdecl */
/* helmholtz_dsp(t_helmholtz*, _signal**) */

void __cdecl
helmholtz_dsp(undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 *param_10)

{
  uint uVar1;
  uint *puVar2;
  undefined8 in_stack_00000008;
  
  puVar2 = (uint *)*param_10;
  uVar1 = puVar2[4];
  *(uint *)(param_9 + 0x5c) = uVar1;
  dsp_add((ulong)uVar1,param_2_00,param_3,param_4,param_5,param_6,param_7,param_8,helmholtz_perform,
          4,param_9,*(undefined8 *)(puVar2 + 2),*(undefined8 *)(param_10[1] + 8),(ulong)*puVar2,
          in_stack_00000008);
  return;
}


