// Function : print_perform
// Namespace: 
// Entry    : 00597a90
// Prototype: long print_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00597a90 - 00597b2a


long print_perform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_9 + 8);
  if (*(int *)(lVar3 + 0x40) != 0) {
    lVar4 = *(long *)(param_9 + 0x10);
    uVar2 = *(uint *)(param_9 + 0x18);
    uVar6 = startpost(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"%s:");
    if (0 < (int)uVar2) {
      uVar5 = 0;
      do {
        if ((uVar5 & 7) == 0) {
          endpost(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        }
        uVar6 = startpost((double)*(float *)(lVar4 + uVar5 * 4),param_2,param_3,param_4,param_5,
                          param_6,param_7,param_8,"%.4g  ");
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
    }
    endpost(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    piVar1 = (int *)(lVar3 + 0x40);
    *piVar1 = *piVar1 + -1;
  }
  return param_9 + 0x20;
}


