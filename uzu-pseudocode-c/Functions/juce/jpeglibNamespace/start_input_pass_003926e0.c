// Function : start_input_pass
// Namespace: juce:jpeglibNamespace
// Entry    : 003926e0
// Prototype: undefined start_input_pass(long * param_1)
// Body     : 003926e0 - 003929ed


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_input_pass(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::start_input_pass(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  void *__dest;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  
  iVar6 = (int)param_1[0x34];
  if (iVar6 == 1) {
    lVar11 = param_1[0x35];
    *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(lVar11 + 0x1c);
    uVar8 = *(uint *)(lVar11 + 0x20);
    *(uint *)((long)param_1 + 0x1cc) = uVar8;
    *(undefined8 *)(lVar11 + 0x38) = 0x100000001;
    *(undefined4 *)(lVar11 + 0x40) = 1;
    *(undefined4 *)(lVar11 + 0x44) = *(undefined4 *)(lVar11 + 0x24);
    *(undefined4 *)(lVar11 + 0x48) = 1;
    uVar8 = uVar8 % *(uint *)(lVar11 + 0xc);
    if (uVar8 == 0) {
      uVar8 = *(uint *)(lVar11 + 0xc);
    }
    *(uint *)(lVar11 + 0x4c) = uVar8;
    param_1[0x3a] = 1;
    uVar5 = 1;
  }
  else {
    if (iVar6 - 5U < 0xfffffffc) {
      lVar11 = *param_1;
      *(undefined4 *)(lVar11 + 0x28) = 0x1b;
      *(int *)(lVar11 + 0x2c) = iVar6;
      *(undefined4 *)(*param_1 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
      iVar6 = (int)param_1[0x34];
    }
    uVar12 = (long)*(int *)((long)param_1 + 0x20c) * (long)(int)param_1[0x30];
    uVar5 = (*(uint *)(param_1 + 6) + uVar12) - 1;
    if ((uVar5 | uVar12) >> 0x20 == 0) {
      uVar4 = (undefined4)((uVar5 & 0xffffffff) / (uVar12 & 0xffffffff));
    }
    else {
      uVar4 = (undefined4)((long)uVar5 / (long)uVar12);
    }
    *(undefined4 *)(param_1 + 0x39) = uVar4;
    *(int *)((long)param_1 + 0x1cc) = (int)param_1[0x32];
    *(undefined4 *)(param_1 + 0x3a) = 0;
    if (iVar6 < 1) goto LAB_003929b7;
    iVar6 = 0;
    lVar11 = 0;
    while( true ) {
      lVar3 = param_1[lVar11 + 0x35];
      uVar8 = *(uint *)(lVar3 + 8);
      uVar7 = *(uint *)(lVar3 + 0xc);
      *(uint *)(lVar3 + 0x38) = uVar8;
      *(uint *)(lVar3 + 0x3c) = uVar7;
      uVar10 = uVar7 * uVar8;
      *(uint *)(lVar3 + 0x40) = uVar10;
      *(uint *)(lVar3 + 0x44) = *(int *)(lVar3 + 0x24) * uVar8;
      uVar9 = *(uint *)(lVar3 + 0x1c) % uVar8;
      if (uVar9 == 0) {
        uVar9 = uVar8;
      }
      *(uint *)(lVar3 + 0x48) = uVar9;
      uVar8 = (uint)((ulong)*(uint *)(lVar3 + 0x20) % (ulong)uVar7);
      if (uVar8 == 0) {
        uVar8 = uVar7;
      }
      *(uint *)(lVar3 + 0x4c) = uVar8;
      if (10 < (int)(iVar6 + uVar10)) {
        puVar1 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar1 + 5) = 0xe;
        (*(code *)*puVar1)(param_1);
      }
      if (0 < (int)uVar10) {
        uVar8 = uVar10 - 1;
        uVar7 = uVar10 & 3;
        uVar4 = (undefined4)lVar11;
        if (uVar7 != 0) {
          uVar10 = uVar10 & 0xfffffffc;
          do {
            lVar3 = param_1[0x3a];
            *(int *)(param_1 + 0x3a) = (int)lVar3 + 1;
            *(undefined4 *)((long)param_1 + (long)(int)lVar3 * 4 + 0x1d4) = uVar4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (2 < uVar8) {
          uVar10 = uVar10 - 1;
          do {
            lVar3 = param_1[0x3a];
            *(int *)(param_1 + 0x3a) = (int)lVar3 + 1;
            *(undefined4 *)((long)param_1 + (long)(int)lVar3 * 4 + 0x1d4) = uVar4;
            lVar3 = param_1[0x3a];
            *(int *)(param_1 + 0x3a) = (int)lVar3 + 1;
            *(undefined4 *)((long)param_1 + (long)(int)lVar3 * 4 + 0x1d4) = uVar4;
            lVar3 = param_1[0x3a];
            *(int *)(param_1 + 0x3a) = (int)lVar3 + 1;
            *(undefined4 *)((long)param_1 + (long)(int)lVar3 * 4 + 0x1d4) = uVar4;
            lVar3 = param_1[0x3a];
            *(int *)(param_1 + 0x3a) = (int)lVar3 + 1;
            *(undefined4 *)((long)param_1 + (long)(int)lVar3 * 4 + 0x1d4) = uVar4;
            uVar10 = uVar10 - 4;
          } while (uVar10 < 0xfffffffe);
        }
      }
      lVar11 = lVar11 + 1;
      uVar5 = (ulong)(int)param_1[0x34];
      if ((long)uVar5 <= lVar11) break;
      iVar6 = (int)param_1[0x3a];
    }
    if ((int)param_1[0x34] < 1) goto LAB_003929b7;
  }
  lVar11 = 0;
  do {
    lVar3 = param_1[lVar11 + 0x35];
    if (*(long *)(lVar3 + 0x50) == 0) {
      uVar8 = *(uint *)(lVar3 + 0x10);
      if ((3 < (ulong)uVar8) || (param_1[(ulong)uVar8 + 0x17] == 0)) {
        lVar2 = *param_1;
        *(undefined4 *)(lVar2 + 0x28) = 0x36;
        *(uint *)(lVar2 + 0x2c) = uVar8;
        (**(code **)*param_1)(param_1);
      }
      __dest = (void *)(**(code **)param_1[1])(param_1,1,0x82);
      memcpy(__dest,(void *)param_1[(long)(int)uVar8 + 0x17],0x82);
      *(void **)(lVar3 + 0x50) = __dest;
      uVar5 = (ulong)*(uint *)(param_1 + 0x34);
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 < (int)uVar5);
LAB_003929b7:
  (**(code **)param_1[0x4a])(param_1);
  (**(code **)param_1[0x46])(param_1);
  *(undefined8 *)param_1[0x48] = *(undefined8 *)(param_1[0x46] + 8);
  return;
}


