// Function : square_list
// Namespace: 
// Entry    : 00571830
// Prototype: undefined square_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, int * param_12)
// Body     : 00571830 - 0057189b


void square_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,uint param_11,int *param_12)

{
  ulong uVar1;
  int iVar2;
  
  *(undefined8 *)(param_9 + 0xa0) = param_10;
  if (param_11 != 0) {
    if (*(long *)(param_9 + 0x98) != (long)(int)param_11) {
      *(long *)(param_9 + 0x98) = (long)(int)param_11;
      canvas_update_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    if (0 < (int)param_11) {
      uVar1 = 0;
      do {
        iVar2 = atom_getfloat(param_12);
        *(int *)(*(long *)(param_9 + 0x90) + uVar1 * 4) = iVar2;
        uVar1 = uVar1 + 1;
        param_12 = param_12 + 4;
      } while (param_11 != uVar1);
    }
  }
  return;
}


