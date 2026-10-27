// Function : delay_move
// Namespace: 
// Entry    : 0050e2f0
// Prototype: undefined delay_move(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 0050e2f0 - 0050e362


void delay_move(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 in_R9;
  
  plVar3 = (long *)param_9[0x18];
  iVar6 = (int)plVar3[0xd];
  uVar8 = *(uint *)((long)plVar3 + 0x6c);
  iVar7 = *(int *)((long)param_9 + 0xec);
  uVar1 = (long)((int)plVar3[0x13] - iVar6) / (long)iVar7;
  uVar2 = (long)(int)(*(int *)((long)plVar3 + 0x9c) - uVar8) / (long)iVar7;
  iVar4 = (int)uVar1;
  iVar5 = (int)uVar2;
  if (iVar4 != 0 || iVar5 != 0) {
    canvas_displaceselection
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               uVar1 & 0xffffffff,uVar2 & 0xffffffff,plVar3,(char *)(ulong)uVar8,in_R9);
    iVar7 = *(int *)((long)param_9 + 0xec);
    plVar3 = (long *)param_9[0x18];
    iVar6 = (int)plVar3[0xd];
    uVar8 = *(uint *)((long)plVar3 + 0x6c);
  }
  *(int *)(plVar3 + 0xd) = iVar4 * iVar7 + iVar6;
  *(uint *)((long)plVar3 + 0x6c) = iVar5 * iVar7 + uVar8;
  return;
}


