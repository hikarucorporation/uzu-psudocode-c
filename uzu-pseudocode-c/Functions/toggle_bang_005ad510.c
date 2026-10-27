// Function : toggle_bang
// Namespace: 
// Entry    : 005ad510
// Prototype: undefined toggle_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005ad510 - 005ad575


void toggle_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  long *plVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(float *)(param_9 + 0x490) == 0.0) {
    uVar2 = *(undefined4 *)(param_9 + 0x494);
  }
  *(undefined4 *)(param_9 + 0x490) = uVar2;
  (**(code **)(param_9 + 0x38))(param_9,*(undefined8 *)(param_9 + 0x30),0);
  outlet_float((ulong)*(uint *)(param_9 + 0x490),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x18));
  if (((*(byte *)(param_9 + 0x440) & 0x80) == 0) ||
     (plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar1 == (long *)0x0)) {
    return;
  }
  pd_float(plVar1);
  return;
}


