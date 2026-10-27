// Function : upsampling_perform_0
// Namespace: 
// Entry    : 00573900
// Prototype: long upsampling_perform_0(long param_1)
// Body     : 00573900 - 00573a1e


long upsampling_perform_0(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined4 *__s;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  puVar9 = *(undefined4 **)(param_1 + 8);
  __s = *(undefined4 **)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar7 = (uint)uVar2;
  iVar8 = (int)*(undefined8 *)(param_1 + 0x18);
  uVar3 = uVar7 * iVar8;
  if (uVar3 != 0) {
    memset(__s,0,(ulong)uVar3 << 2);
  }
  if (uVar7 != 0) {
    lVar4 = (long)iVar8;
    uVar3 = uVar7 - 1;
    if ((uVar2 & 7) != 0) {
      uVar5 = 0;
      do {
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        *__s = uVar1;
        uVar5 = uVar5 + 1;
        __s = __s + lVar4;
      } while ((uVar7 & 7) != uVar5);
      uVar7 = uVar7 - uVar5;
    }
    if (6 < uVar3) {
      lVar6 = 0;
      do {
        *__s = puVar9[lVar6];
        __s[lVar4] = puVar9[lVar6 + 1];
        __s[lVar4 * 2] = puVar9[lVar6 + 2];
        __s[lVar4 * 3] = puVar9[lVar6 + 3];
        __s[lVar4 * 4] = puVar9[lVar6 + 4];
        __s[lVar4 * 5] = puVar9[lVar6 + 5];
        __s[lVar4 * 6] = puVar9[lVar6 + 6];
        __s[lVar4 * 7] = puVar9[lVar6 + 7];
        __s = __s + lVar4 * 8;
        lVar6 = lVar6 + 8;
      } while (uVar7 != (uint)lVar6);
    }
  }
  return param_1 + 0x28;
}


