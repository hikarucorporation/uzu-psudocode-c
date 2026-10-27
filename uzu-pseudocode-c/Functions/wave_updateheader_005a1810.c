// Function : wave_updateheader
// Namespace: 
// Entry    : 005a1810
// Prototype: bool wave_updateheader(int * param_1, long param_2)
// Body     : 005a1810 - 005a1930


bool wave_updateheader(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined7 extraout_var;
  ssize_t sVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_38;
  
  iVar1 = param_1[6];
  uStack_38 = in_RAX;
  bVar3 = soundfile_needsbyteswap((long)param_1);
  iVar4 = (int)CONCAT71(extraout_var,bVar3);
  iVar2 = param_1[0xb];
  if ((iVar1 == 8) || (lVar10 = 0x24, iVar1 == 4)) {
    uVar5 = swap4(param_1[5] * (int)param_2,iVar4);
    uStack_38 = CONCAT44(uVar5,(undefined4)uStack_38);
    sVar6 = fd_write(*param_1,0x44,(void *)((long)&uStack_38 + 4),4);
    lVar10 = 0x48;
    if (sVar6 < 4) {
      return false;
    }
  }
  uVar7 = iVar2 * param_2;
  lVar9 = ((uint)uVar7 & 1) + uVar7;
  uVar8 = (uint)lVar9;
  uVar5 = swap4(uVar8,iVar4);
  uStack_38 = CONCAT44(uVar5,(undefined4)uStack_38);
  sVar6 = fd_write(*param_1,lVar10 + 4,(void *)((long)&uStack_38 + 4),4);
  bVar3 = false;
  if (3 < sVar6) {
    if ((uVar7 & 1) != 0) {
      uStack_38 = uStack_38 & 0xffffffff;
      sVar6 = fd_write(*param_1,lVar10 + lVar9 + 7,(void *)((long)&uStack_38 + 4),1);
      if (sVar6 < 1) {
        return false;
      }
    }
    uVar5 = swap4((int)lVar10 + uVar8,iVar4);
    uStack_38 = CONCAT44(uVar5,(undefined4)uStack_38);
    sVar6 = fd_write(*param_1,4,(void *)((long)&uStack_38 + 4),4);
    bVar3 = 3 < sVar6;
  }
  return bVar3;
}


