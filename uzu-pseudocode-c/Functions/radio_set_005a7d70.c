// Function : radio_set
// Namespace: 
// Entry    : 005a7d70
// Prototype: undefined radio_set(float param_1, long param_2)
// Body     : 005a7d70 - 005a7de6


void radio_set(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  *(float *)(param_2 + 0x4a4) = param_1;
  iVar2 = 0;
  if (-1 < (int)param_1) {
    iVar2 = (int)param_1;
  }
  iVar1 = *(int *)(param_2 + 0x49c) + -1;
  if (iVar2 < *(int *)(param_2 + 0x49c)) {
    iVar1 = iVar2;
  }
  iVar2 = *(int *)(param_2 + 0x494);
  if (*(int *)(param_2 + 0x490) == iVar2) {
    *(int *)(param_2 + 0x490) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x005a7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x38))(param_2,*(undefined8 *)(param_2 + 0x30),0);
    return;
  }
  *(int *)(param_2 + 0x494) = *(int *)(param_2 + 0x490);
  *(int *)(param_2 + 0x490) = iVar1;
  (**(code **)(param_2 + 0x38))(param_2,*(undefined8 *)(param_2 + 0x30),0);
  *(int *)(param_2 + 0x494) = iVar2;
  return;
}


