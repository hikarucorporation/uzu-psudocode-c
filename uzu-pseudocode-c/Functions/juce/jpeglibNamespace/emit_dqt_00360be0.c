// Function : emit_dqt
// Namespace: juce:jpeglibNamespace
// Entry    : 00360be0
// Prototype: char emit_dqt(long * param_1, int param_2)
// Body     : 00360be0 - 00360f4c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::emit_dqt(juce::jpeglibNamespace::jpeg_compress_struct*, int) */

char __cdecl juce::jpeglibNamespace::emit_dqt(long *param_1,int param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  char *pcVar9;
  bool bVar10;
  char cVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  short sVar15;
  long lVar16;
  
  lVar5 = param_1[(long)param_2 + 0xe];
  if (lVar5 == 0) {
    lVar16 = *param_1;
    *(undefined4 *)(lVar16 + 0x28) = 0x36;
    *(int *)(lVar16 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
    uVar4 = *(uint *)(param_1 + 0x3b);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x3b);
  }
  if ((int)uVar4 < 0) {
    bVar10 = false;
  }
  else {
    lVar16 = param_1[0x3a];
    uVar12 = (ulong)(uVar4 + 1 & 3);
    if (uVar4 < 3) {
      uVar13 = 0;
      bVar10 = false;
    }
    else {
      uVar13 = 0;
      bVar10 = false;
      do {
        if (0xff < *(ushort *)(lVar5 + (long)*(int *)(lVar16 + uVar13 * 4) * 2)) {
          bVar10 = true;
        }
        if (0xff < *(ushort *)(lVar5 + (long)*(int *)(lVar16 + 4 + uVar13 * 4) * 2)) {
          bVar10 = true;
        }
        if (0xff < *(ushort *)(lVar5 + (long)*(int *)(lVar16 + 8 + uVar13 * 4) * 2)) {
          bVar10 = true;
        }
        if (0xff < *(ushort *)(lVar5 + (long)*(int *)(lVar16 + 0xc + uVar13 * 4) * 2)) {
          bVar10 = true;
        }
        uVar13 = uVar13 + 4;
      } while ((uVar4 + 1 & 0xfffffffc) != uVar13);
    }
    if (uVar12 != 0) {
      uVar14 = 0;
      do {
        if (0xff < *(ushort *)(lVar5 + (long)*(int *)(lVar16 + uVar13 * 4 + uVar14 * 4) * 2)) {
          bVar10 = true;
        }
        uVar14 = uVar14 + 1;
      } while (uVar12 != uVar14);
    }
  }
  if (*(char *)(lVar5 + 0x80) == '\0') {
    puVar6 = (undefined8 *)param_1[5];
    puVar7 = (undefined1 *)*puVar6;
    *puVar6 = puVar7 + 1;
    *puVar7 = 0xff;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)param_1[5];
    puVar7 = (undefined1 *)*puVar6;
    *puVar6 = puVar7 + 1;
    *puVar7 = 0xdb;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    sVar15 = (short)param_1[0x3b] * 2 + 5;
    if (!bVar10) {
      sVar15 = (short)param_1[0x3b] + 4;
    }
    plVar8 = (long *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)((ushort)sVar15 >> 8);
    plVar1 = plVar8 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    plVar8 = (long *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)sVar15;
    plVar1 = plVar8 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    plVar8 = (long *)param_1[5];
    pcVar9 = (char *)*plVar8;
    *plVar8 = (long)(pcVar9 + 1);
    *pcVar9 = bVar10 * '\x10' + (char)param_2;
    plVar1 = plVar8 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    if (-1 < (int)param_1[0x3b]) {
      if (bVar10) {
        lVar16 = -1;
        do {
          plVar8 = (long *)param_1[5];
          uVar3 = *(undefined2 *)(lVar5 + (long)*(int *)(param_1[0x3a] + 4 + lVar16 * 4) * 2);
          puVar7 = (undefined1 *)*plVar8;
          *plVar8 = (long)(puVar7 + 1);
          *puVar7 = (char)((ushort)uVar3 >> 8);
          plVar1 = plVar8 + 1;
          *plVar1 = *plVar1 + -1;
          if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
          }
          plVar8 = (long *)param_1[5];
          puVar7 = (undefined1 *)*plVar8;
          *plVar8 = (long)(puVar7 + 1);
          *puVar7 = (char)uVar3;
          plVar1 = plVar8 + 1;
          *plVar1 = *plVar1 + -1;
          if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)param_1[0x3b]);
      }
      else {
        lVar16 = -1;
        do {
          plVar8 = (long *)param_1[5];
          uVar2 = *(undefined1 *)(lVar5 + (long)*(int *)(param_1[0x3a] + 4 + lVar16 * 4) * 2);
          puVar7 = (undefined1 *)*plVar8;
          *plVar8 = (long)(puVar7 + 1);
          *puVar7 = uVar2;
          plVar1 = plVar8 + 1;
          *plVar1 = *plVar1 + -1;
          if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)param_1[0x3b]);
      }
    }
    *(undefined1 *)(lVar5 + 0x80) = 1;
  }
  return bVar10;
}


