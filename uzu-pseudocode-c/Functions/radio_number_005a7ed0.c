// Function : radio_number
// Namespace: 
// Entry    : 005a7ed0
// Prototype: undefined radio_number(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 005a7ed0 - 005a7f73


void radio_number(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9)

{
  bool bVar1;
  uint uVar2;
  undefined7 extraout_var;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar2 = 1;
  if (0 < (int)param_1) {
    uVar2 = (int)param_1;
  }
  uVar3 = 0x80;
  if (uVar2 < 0x80) {
    uVar3 = uVar2;
  }
  if (uVar3 != *(uint *)((long)param_9 + 0x49c)) {
    uVar2 = glist_isvisible(param_9[6]);
    if (uVar2 != 0) {
      (*(code *)param_9[7])(param_9,param_9[6],4);
    }
    *(uint *)((long)param_9 + 0x49c) = uVar3;
    iVar4 = (int)param_9[0x92];
    if ((int)uVar3 <= iVar4) {
      iVar4 = uVar3 - 1;
      *(int *)(param_9 + 0x92) = iVar4;
    }
    *(int *)((long)param_9 + 0x494) = iVar4;
    if (uVar2 != 0) {
      bVar1 = gobj_shouldvis(param_9,(long *)param_9[6]);
      if ((int)CONCAT71(extraout_var,bVar1) != 0) {
        uVar5 = (*(code *)param_9[7])(param_9,param_9[6],2);
        canvas_fixlinesfor(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[6],
                           (long)param_9);
        return;
      }
    }
  }
  return;
}


