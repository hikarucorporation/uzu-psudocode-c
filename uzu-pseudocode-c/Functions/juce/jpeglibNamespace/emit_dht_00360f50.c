// Function : emit_dht
// Namespace: juce:jpeglibNamespace
// Entry    : 00360f50
// Prototype: undefined emit_dht(long * param_1, int param_2, int param_3)
// Body     : 00360f50 - 003611e3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::emit_dht(juce::jpeglibNamespace::jpeg_compress_struct*, int, unsigned
   char) */

void __cdecl juce::jpeglibNamespace::emit_dht(long *param_1,int param_2,int param_3)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  
  iVar8 = param_2;
  lVar3 = (long)param_2 + 0x14;
  if (param_3 != 0) {
    iVar8 = param_2 + 0x10;
    lVar3 = (long)param_2 + 0x18;
  }
  lVar3 = param_1[lVar3];
  if (lVar3 == 0) {
    lVar12 = *param_1;
    *(undefined4 *)(lVar12 + 0x28) = 0x34;
    *(int *)(lVar12 + 0x2c) = iVar8;
    (**(code **)*param_1)(param_1);
    cVar9 = cRam0000000000000111;
  }
  else {
    cVar9 = *(char *)(lVar3 + 0x111);
  }
  if (cVar9 == '\0') {
    puVar4 = (undefined8 *)param_1[5];
    puVar5 = (undefined1 *)*puVar4;
    *puVar4 = puVar5 + 1;
    *puVar5 = 0xff;
    plVar1 = puVar4 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar9 = (*(code *)puVar4[3])(param_1), cVar9 == '\0')) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x19;
      (*(code *)*puVar4)(param_1);
    }
    puVar4 = (undefined8 *)param_1[5];
    puVar5 = (undefined1 *)*puVar4;
    *puVar4 = puVar5 + 1;
    *puVar5 = 0xc4;
    plVar1 = puVar4 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar9 = (*(code *)puVar4[3])(param_1), cVar9 == '\0')) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x19;
      (*(code *)*puVar4)(param_1);
    }
    lVar12 = (ulong)*(byte *)(lVar3 + 0x10) +
             (ulong)*(byte *)(lVar3 + 0xf) +
             (ulong)*(byte *)(lVar3 + 0xe) +
             (ulong)*(byte *)(lVar3 + 0xd) +
             (ulong)*(byte *)(lVar3 + 0xc) +
             (ulong)*(byte *)(lVar3 + 0xb) +
             (ulong)*(byte *)(lVar3 + 10) +
             (ulong)*(byte *)(lVar3 + 9) +
             (ulong)*(byte *)(lVar3 + 8) +
             (ulong)*(byte *)(lVar3 + 7) +
             (ulong)*(byte *)(lVar3 + 6) +
             (ulong)*(byte *)(lVar3 + 5) +
             (ulong)*(byte *)(lVar3 + 4) +
             (ulong)*(byte *)(lVar3 + 3) + (ulong)*(byte *)(lVar3 + 2) + (ulong)*(byte *)(lVar3 + 1)
    ;
    iVar7 = (int)lVar12;
    iVar10 = iVar7 + 0x13;
    plVar6 = (long *)param_1[5];
    puVar5 = (undefined1 *)*plVar6;
    *plVar6 = (long)(puVar5 + 1);
    *puVar5 = (char)((uint)iVar10 >> 8);
    plVar1 = plVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar9 = (*(code *)plVar6[3])(param_1), cVar9 == '\0')) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x19;
      (*(code *)*puVar4)(param_1);
    }
    plVar6 = (long *)param_1[5];
    puVar5 = (undefined1 *)*plVar6;
    *plVar6 = (long)(puVar5 + 1);
    *puVar5 = (char)iVar10;
    plVar1 = plVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar9 = (*(code *)plVar6[3])(param_1), cVar9 == '\0')) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x19;
      (*(code *)*puVar4)(param_1);
    }
    plVar6 = (long *)param_1[5];
    puVar5 = (undefined1 *)*plVar6;
    *plVar6 = (long)(puVar5 + 1);
    *puVar5 = (char)iVar8;
    plVar1 = plVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar9 = (*(code *)plVar6[3])(param_1), cVar9 == '\0')) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x19;
      (*(code *)*puVar4)(param_1);
    }
    lVar11 = 0;
    do {
      uVar2 = *(undefined1 *)(lVar3 + 1 + lVar11);
      plVar6 = (long *)param_1[5];
      puVar5 = (undefined1 *)*plVar6;
      *plVar6 = (long)(puVar5 + 1);
      *puVar5 = uVar2;
      plVar1 = plVar6 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar9 = (*(code *)plVar6[3])(param_1), cVar9 == '\0')) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 0x19;
        (*(code *)*puVar4)(param_1);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x10);
    if (iVar7 != 0) {
      lVar11 = 0;
      do {
        uVar2 = *(undefined1 *)(lVar3 + 0x11 + lVar11);
        plVar6 = (long *)param_1[5];
        puVar5 = (undefined1 *)*plVar6;
        *plVar6 = (long)(puVar5 + 1);
        *puVar5 = uVar2;
        plVar1 = plVar6 + 1;
        *plVar1 = *plVar1 + -1;
        if ((*plVar1 == 0) && (cVar9 = (*(code *)plVar6[3])(param_1), cVar9 == '\0')) {
          puVar4 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar4 + 5) = 0x19;
          (*(code *)*puVar4)(param_1);
        }
        lVar11 = lVar11 + 1;
      } while (lVar12 != lVar11);
    }
    *(undefined1 *)(lVar3 + 0x111) = 1;
  }
  return;
}


