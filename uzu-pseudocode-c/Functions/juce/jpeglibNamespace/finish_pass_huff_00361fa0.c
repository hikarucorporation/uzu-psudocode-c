// Function : finish_pass_huff
// Namespace: juce:jpeglibNamespace
// Entry    : 00361fa0
// Prototype: undefined finish_pass_huff(long * param_1)
// Body     : 00361fa0 - 00362157


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::finish_pass_huff(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::finish_pass_huff(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  
  lVar2 = param_1[0x44];
  puVar3 = (undefined8 *)param_1[5];
  puVar8 = (undefined1 *)*puVar3;
  if (*(char *)((long)param_1 + 0x14c) == '\0') {
    lVar7 = puVar3[1];
    uVar9 = *(ulong *)(lVar2 + 0x18);
    iVar10 = *(int *)(lVar2 + 0x20);
    uVar1 = *(undefined4 *)(lVar2 + 0x34);
    uVar4 = *(undefined8 *)(lVar2 + 0x24);
    uVar5 = *(undefined8 *)(lVar2 + 0x2c);
    if (iVar10 < 1) {
      uVar9 = 0;
      iVar10 = 0;
    }
    else {
      uVar12 = 0x7fL << (0x11U - (char)iVar10 & 0x3f) | uVar9;
      iVar11 = iVar10 + 0xf;
      do {
        *puVar8 = (char)(uVar12 >> 0x10);
        puVar8 = puVar8 + 1;
        lVar7 = lVar7 + -1;
        if (lVar7 == 0) {
          puVar3 = (undefined8 *)param_1[5];
          cVar6 = (*(code *)puVar3[3])();
          if (cVar6 != '\0') {
            puVar8 = (undefined1 *)*puVar3;
            lVar7 = puVar3[1];
            goto joined_r0x003620d2;
          }
LAB_003620f4:
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x19;
          (*(code *)*puVar3)(param_1);
          lVar7 = 0;
          goto LAB_00362126;
        }
joined_r0x003620d2:
        if ((~(uint)uVar12 & 0xff0000) == 0) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) {
            puVar3 = (undefined8 *)param_1[5];
            cVar6 = (*(code *)puVar3[3])();
            if (cVar6 == '\0') goto LAB_003620f4;
            puVar8 = (undefined1 *)*puVar3;
            lVar7 = puVar3[1];
          }
        }
        uVar12 = uVar12 << 8;
        iVar11 = iVar11 + -8;
      } while (0xf < iVar11);
      uVar9 = 0;
      iVar10 = 0;
    }
LAB_00362126:
    puVar3 = (undefined8 *)param_1[5];
    *puVar3 = puVar8;
    puVar3[1] = lVar7;
    *(ulong *)(lVar2 + 0x18) = uVar9;
    *(int *)(lVar2 + 0x20) = iVar10;
    *(undefined4 *)(lVar2 + 0x34) = uVar1;
    *(undefined8 *)(lVar2 + 0x24) = uVar4;
    *(undefined8 *)(lVar2 + 0x2c) = uVar5;
  }
  else {
    *(undefined1 **)(lVar2 + 200) = puVar8;
    *(undefined8 *)(lVar2 + 0xd0) = puVar3[1];
    emit_eobrun(lVar2);
    flush_bits_e(lVar2);
    puVar3 = (undefined8 *)param_1[5];
    *puVar3 = *(undefined8 *)(lVar2 + 200);
    puVar3[1] = *(undefined8 *)(lVar2 + 0xd0);
  }
  return;
}


