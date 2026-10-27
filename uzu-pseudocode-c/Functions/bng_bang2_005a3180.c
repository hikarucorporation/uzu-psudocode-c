// Function : bng_bang2
// Namespace: 
// Entry    : 005a3180
// Prototype: undefined bng_bang2(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005a3180 - 005a3258


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bng_bang2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  long *plVar1;
  int iVar2;
  double extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar3;
  
  if ((*(byte *)(param_9 + 1099) & 8) == 0) {
    iVar2 = *(int *)(param_9 + 0x498);
    clock_gettimesince(*(undefined8 *)(param_9 + 0x4b8));
    clock_getlogicaltime();
    *(undefined8 *)(param_9 + 0x4b8) = extraout_XMM0_Qa_00;
    if ((int)extraout_XMM0_Qa < *(int *)(param_9 + 0x498) * 2) {
      iVar2 = (int)extraout_XMM0_Qa / 2;
    }
    if (iVar2 < *(int *)(param_9 + 0x494)) {
      iVar2 = *(int *)(param_9 + 0x494);
    }
    *(undefined4 *)(param_9 + 0x490) = 1;
    (**(code **)(param_9 + 0x38))(param_9,*(undefined8 *)(param_9 + 0x30),0);
    uVar3 = clock_delay((double)iVar2,*(double **)(param_9 + 0x4a0));
    if ((*(byte *)(param_9 + 0x443) & 4) == 0) {
      *(byte *)(param_9 + 1099) = *(byte *)(param_9 + 1099) | 8;
      uVar3 = clock_delay(_DAT_00653f50,*(double **)(param_9 + 0x4b0));
    }
    outlet_bang(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x18));
    if (((*(byte *)(param_9 + 0x440) & 0x80) != 0) &&
       (plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar1 != (long *)0x0)) {
      pd_bang(plVar1);
      return;
    }
  }
  return;
}


