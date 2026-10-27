// Function : per_scan_setup
// Namespace: juce:jpeglibNamespace
// Entry    : 00375de0
// Prototype: undefined per_scan_setup(long * param_1)
// Body     : 00375de0 - 00376044


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::per_scan_setup(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::per_scan_setup(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  
  iVar4 = *(int *)((long)param_1 + 0x164);
  if (iVar4 == 1) {
    lVar10 = param_1[0x2d];
    *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(lVar10 + 0x1c);
    uVar7 = *(uint *)(lVar10 + 0x20);
    *(uint *)((long)param_1 + 0x18c) = uVar7;
    *(undefined8 *)(lVar10 + 0x38) = 0x100000001;
    *(undefined4 *)(lVar10 + 0x40) = 1;
    *(undefined4 *)(lVar10 + 0x44) = *(undefined4 *)(lVar10 + 0x24);
    *(undefined4 *)(lVar10 + 0x48) = 1;
    uVar7 = uVar7 % *(uint *)(lVar10 + 0xc);
    if (uVar7 == 0) {
      uVar7 = *(uint *)(lVar10 + 0xc);
    }
    *(uint *)(lVar10 + 0x4c) = uVar7;
    param_1[0x32] = 1;
  }
  else {
    if (iVar4 - 5U < 0xfffffffc) {
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + 0x28) = 0x1b;
      *(int *)(lVar10 + 0x2c) = iVar4;
      *(undefined4 *)(*param_1 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
      iVar4 = *(int *)((long)param_1 + 0x164);
    }
    uVar9 = (long)*(int *)((long)param_1 + 0x1cc) * (long)(int)param_1[0x2a];
    uVar6 = (*(uint *)(param_1 + 10) + uVar9) - 1;
    if ((uVar6 | uVar9) >> 0x20 == 0) {
      uVar3 = (undefined4)((uVar6 & 0xffffffff) / (uVar9 & 0xffffffff));
    }
    else {
      uVar3 = (undefined4)((long)uVar6 / (long)uVar9);
    }
    *(undefined4 *)(param_1 + 0x31) = uVar3;
    *(int *)((long)param_1 + 0x18c) = (int)param_1[0x2c];
    *(undefined4 *)(param_1 + 0x32) = 0;
    if (0 < iVar4) {
      iVar4 = 0;
      lVar10 = 0;
      while( true ) {
        lVar1 = param_1[lVar10 + 0x2d];
        uVar7 = *(uint *)(lVar1 + 8);
        uVar5 = *(uint *)(lVar1 + 0xc);
        *(uint *)(lVar1 + 0x38) = uVar7;
        *(uint *)(lVar1 + 0x3c) = uVar5;
        uVar11 = uVar5 * uVar7;
        *(uint *)(lVar1 + 0x40) = uVar11;
        *(uint *)(lVar1 + 0x44) = *(int *)(lVar1 + 0x24) * uVar7;
        uVar8 = *(uint *)(lVar1 + 0x1c) % uVar7;
        if (uVar8 == 0) {
          uVar8 = uVar7;
        }
        *(uint *)(lVar1 + 0x48) = uVar8;
        uVar7 = (uint)((ulong)*(uint *)(lVar1 + 0x20) % (ulong)uVar5);
        if (uVar7 == 0) {
          uVar7 = uVar5;
        }
        *(uint *)(lVar1 + 0x4c) = uVar7;
        if (10 < (int)(iVar4 + uVar11)) {
          puVar2 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar2 + 5) = 0xe;
          (*(code *)*puVar2)(param_1);
        }
        if (0 < (int)uVar11) {
          uVar7 = uVar11 - 1;
          uVar5 = uVar11 & 3;
          uVar3 = (undefined4)lVar10;
          if (uVar5 != 0) {
            uVar11 = uVar11 & 0xfffffffc;
            do {
              lVar1 = param_1[0x32];
              *(int *)(param_1 + 0x32) = (int)lVar1 + 1;
              *(undefined4 *)((long)param_1 + (long)(int)lVar1 * 4 + 0x194) = uVar3;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          if (2 < uVar7) {
            uVar11 = uVar11 - 1;
            do {
              lVar1 = param_1[0x32];
              *(int *)(param_1 + 0x32) = (int)lVar1 + 1;
              *(undefined4 *)((long)param_1 + (long)(int)lVar1 * 4 + 0x194) = uVar3;
              lVar1 = param_1[0x32];
              *(int *)(param_1 + 0x32) = (int)lVar1 + 1;
              *(undefined4 *)((long)param_1 + (long)(int)lVar1 * 4 + 0x194) = uVar3;
              lVar1 = param_1[0x32];
              *(int *)(param_1 + 0x32) = (int)lVar1 + 1;
              *(undefined4 *)((long)param_1 + (long)(int)lVar1 * 4 + 0x194) = uVar3;
              lVar1 = param_1[0x32];
              *(int *)(param_1 + 0x32) = (int)lVar1 + 1;
              *(undefined4 *)((long)param_1 + (long)(int)lVar1 * 4 + 0x194) = uVar3;
              uVar11 = uVar11 - 4;
            } while (uVar11 < 0xfffffffe);
          }
        }
        lVar10 = lVar10 + 1;
        if (*(int *)((long)param_1 + 0x164) <= lVar10) break;
        iVar4 = (int)param_1[0x32];
      }
    }
  }
  if (0 < (int)*(uint *)((long)param_1 + 0x134)) {
    uVar6 = (ulong)*(uint *)(param_1 + 0x31) * (ulong)*(uint *)((long)param_1 + 0x134);
    uVar3 = 0xffff;
    if (uVar6 < 0xffff) {
      uVar3 = (int)uVar6;
    }
    *(undefined4 *)(param_1 + 0x26) = uVar3;
  }
  return;
}


