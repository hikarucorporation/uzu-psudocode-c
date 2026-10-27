// Function : cftrec4
// Namespace: 
// Entry    : 004f0470
// Prototype: undefined cftrec4(uint param_1, long param_2, int param_3, long param_4)
// Body     : 004f0470 - 004f06ad


void cftrec4(uint param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  ulong local_58;
  
  uVar5 = param_1;
  if (0x200 < (int)param_1) {
    uVar4 = param_1;
    do {
      uVar5 = uVar4 >> 2;
      cftmdl1(uVar5,(double *)(param_2 + (long)(int)(param_1 - uVar5) * 8),
              param_4 + (long)(int)(param_3 - (uVar4 >> 3)) * 8);
      bVar9 = 0x803 < uVar4;
      uVar4 = uVar5;
    } while (bVar9);
  }
  local_58 = (ulong)(param_1 - uVar5);
  cftleaf(uVar5,1,(double *)(param_2 + local_58 * 8),param_3,param_4);
  if (0 < (int)(param_1 - uVar5)) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      iVar3 = (int)local_58;
      uVar2 = uVar5;
      uVar7 = uVar4;
      if ((uVar4 & 3) == 0) {
        do {
          uVar2 = uVar2 * 4;
          uVar8 = uVar7 >> 2;
          uVar1 = uVar7 & 0xc;
          uVar7 = uVar8;
        } while (uVar1 == 0);
        uVar8 = uVar8 & 1;
        if (uVar8 == 0) {
          if (0x80 < (int)uVar2) {
            do {
              cftmdl2(uVar2,(double *)((long)(int)(iVar3 - uVar2) * 8 + param_2),
                      param_4 + (long)(int)(param_3 - uVar2) * 8);
              bVar9 = 0x203 < uVar2;
              uVar2 = uVar2 >> 2;
            } while (bVar9);
          }
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
          if (0x80 < (int)uVar2) {
            do {
              cftmdl1(uVar2,(double *)((long)(int)(iVar3 - uVar2) * 8 + param_2),
                      param_4 + (long)(int)(param_3 - (uVar2 >> 1)) * 8);
              bVar9 = 0x203 < uVar2;
              uVar2 = uVar2 >> 2;
            } while (bVar9);
            uVar7 = uVar8;
          }
        }
      }
      else {
        pdVar6 = (double *)((long)(int)(iVar3 - uVar5) * 8 + param_2);
        bVar9 = (uVar4 & 1) != 0;
        if (bVar9) {
          cftmdl1(uVar5,pdVar6,param_4 + (long)(param_3 - ((int)uVar5 >> 1)) * 8);
        }
        else {
          cftmdl2(uVar5,pdVar6,param_4 + (long)(int)(param_3 - uVar5) * 8);
        }
        uVar7 = (uint)bVar9;
      }
      uVar2 = iVar3 - uVar5;
      local_58 = (ulong)uVar2;
      cftleaf(uVar5,uVar7,(double *)((long)(int)uVar2 * 8 + param_2),param_3,param_4);
    } while (0 < (int)uVar2);
  }
  return;
}


