// Function : sigthrow_dsp
// Namespace: 
// Entry    : 00597590
// Prototype: undefined sigthrow_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 00597590 - 005975d9


void sigthrow_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 *param_10)

{
  int *piVar1;
  undefined8 in_R9;
  undefined8 uVar2;
  undefined8 in_stack_00000008;
  
  *(undefined4 *)(param_9 + 0x40) = *(undefined4 *)*param_10;
  uVar2 = sigthrow_set(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       *(long *)(param_9 + 0x30));
  piVar1 = (int *)*param_10;
  dsp_add(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigthrow_perform,3,param_9,
          *(undefined8 *)(piVar1 + 2),(long)piVar1[5] * (long)*piVar1,in_R9,in_stack_00000008);
  return;
}


