// Function : template_match
// Namespace: 
// Entry    : 00520c50
// Prototype: undefined8 template_match(long param_1, long param_2)
// Body     : 00520c50 - 00520ce0


undefined8 template_match(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_2 + 0x18);
  uVar5 = 0;
  iVar7 = iVar1 - uVar2;
  if ((int)uVar2 <= iVar1) {
    if ((int)uVar2 < iVar1) {
      piVar6 = (int *)((long)(int)uVar2 * 0x18 + *(long *)(param_1 + 0x20));
      do {
        if (*piVar6 == 3) {
          return 0;
        }
        piVar6 = piVar6 + 6;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    uVar5 = 1;
    if (0 < (int)uVar2) {
      lVar3 = *(long *)(param_1 + 0x20);
      lVar4 = *(long *)(param_2 + 0x20);
      lVar8 = 0;
      do {
        if (((*(long *)(lVar3 + 8 + lVar8) != *(long *)(lVar4 + 8 + lVar8)) ||
            (*(int *)(lVar3 + lVar8) != *(int *)(lVar4 + lVar8))) ||
           ((*(int *)(lVar3 + lVar8) == 3 &&
            (*(long *)(lVar3 + 0x10 + lVar8) != *(long *)(lVar4 + 0x10 + lVar8))))) {
          return 0;
        }
        lVar8 = lVar8 + 0x18;
      } while ((ulong)uVar2 * 0x18 != lVar8);
    }
  }
  return uVar5;
}


