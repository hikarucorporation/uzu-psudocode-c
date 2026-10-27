// Function : white_perform
// Namespace: 
// Entry    : 00572290
// Prototype: long white_perform(long param_1)
// Body     : 00572290 - 00572369


long white_perform(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  lVar1 = *(long *)(param_1 + 8);
  iVar3 = *(int *)(lVar1 + 0x48);
  if (0 < iVar3) {
    iVar4 = *(int *)(lVar1 + 0x44);
    if (0 < iVar4) {
      lVar2 = *(long *)(param_1 + 0x10);
      iVar6 = 0;
      do {
        if (0 < iVar4) {
          iVar5 = 0;
          do {
            fVar7 = cyrandom_frand((uint *)(lVar1 + 0x34),(uint *)(lVar1 + 0x38),
                                   (uint *)(lVar1 + 0x3c));
            if (*(int *)(lVar1 + 0x30) != 0) {
              fVar7 = *(float *)(&DAT_0065b6dc + (ulong)(DAT_005d9058 < fVar7) * 4);
            }
            iVar3 = *(int *)(lVar1 + 0x48);
            *(float *)(lVar2 + (long)(iVar3 * iVar5 + iVar6) * 4) = fVar7;
            iVar5 = iVar5 + 1;
            iVar4 = *(int *)(lVar1 + 0x44);
          } while (iVar5 < iVar4);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
  }
  return param_1 + 0x18;
}


