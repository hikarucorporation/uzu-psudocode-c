// Function : my_numbox_ftoa
// Namespace: 
// Entry    : 005a6c00
// Prototype: undefined my_numbox_ftoa(long param_1)
// Body     : 005a6c00 - 005a6d5d


void my_numbox_ftoa(long param_1)

{
  char *__s;
  float fVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  fVar1 = *(float *)(param_1 + 0x4a0);
  __s = (char *)(param_1 + 0x4c4);
  sprintf(__s,"%g",(double)fVar1);
  sVar4 = strlen(__s);
  uVar2 = *(uint *)(param_1 + 0x4e4);
  lVar6 = (long)(int)uVar2;
  iVar3 = (int)sVar4;
  if (iVar3 < 5) {
    if (iVar3 <= (int)uVar2) {
      return;
    }
    if (0 < iVar3) goto LAB_005a6d08;
    if (uVar2 < 0x80000000) goto LAB_005a6d46;
  }
  else {
    if (iVar3 <= (int)uVar2) {
      return;
    }
    if ((*(byte *)(param_1 + 0x4c4 + (ulong)(iVar3 - 4)) & 0xdf) == 0x45) {
      if ((int)uVar2 < 6) {
        *(char *)(param_1 + 0x4c4) = (fVar1 < 0.0) * '\x02' + '+';
        *(undefined1 *)(param_1 + 0x4c5) = 0;
      }
      uVar5 = (long)iVar3 - 4;
      uVar7 = 0;
      do {
        if (*(char *)(param_1 + 0x4c4 + uVar7) == '.') goto LAB_005a6cb5;
        uVar7 = uVar7 + 1;
      } while ((uVar5 & 0xffffffff) != uVar7);
      uVar7 = uVar5 & 0xffffffff;
LAB_005a6cb5:
      if ((int)uVar7 <= (int)(uVar2 - 4)) {
        lVar6 = (long)(int)(uVar2 - 4);
        *(undefined1 *)(param_1 + 0x4c4 + lVar6) = *(undefined1 *)(param_1 + 0x4c4 + uVar5);
        *(undefined1 *)(param_1 + 0x4c5 + lVar6) = *(undefined1 *)(param_1 + 0x4c5 + uVar5);
        *(undefined1 *)(param_1 + 0x4c6 + lVar6) = *(undefined1 *)(param_1 + 0x4c6 + uVar5);
        *(undefined1 *)(param_1 + 0x4c7 + lVar6) = *(undefined1 *)(param_1 + 0x4c7 + uVar5);
        lVar6 = (long)*(int *)(param_1 + 0x4e4);
        goto LAB_005a6d46;
      }
    }
    else {
LAB_005a6d08:
      uVar5 = 0;
      do {
        if (*(char *)(param_1 + 0x4c4 + uVar5) == '.') {
          iVar3 = (int)uVar5;
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((sVar4 & 0xffffffff) != uVar5);
      if (iVar3 <= (int)uVar2) goto LAB_005a6d46;
    }
  }
  *__s = (fVar1 < 0.0) * '\x02' + '+';
  lVar6 = 1;
LAB_005a6d46:
  *(undefined1 *)(param_1 + 0x4c4 + lVar6) = 0;
  return;
}


