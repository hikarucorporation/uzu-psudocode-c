// Function : _ZN4juce16jpeglibNamespaceL27encode_mcu_DC_refine_jchuffEPNS0_20jpeg_compress_structEPPA64_s
// Namespace: 
// Entry    : 00362990
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL27encode_mcu_DC_refine_jchuffEPNS0_20jpeg_compress_structEPPA64_s(long param_1, long param_2)
// Body     : 00362990 - 00362bf8


undefined8
_ZN4juce16jpeglibNamespaceL27encode_mcu_DC_refine_jchuffEPNS0_20jpeg_compress_structEPPA64_s
          (long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x220);
  *(undefined8 *)(lVar4 + 200) = *puVar3;
  *(undefined8 *)(lVar4 + 0xd0) = puVar3[1];
  if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(lVar4 + 0x38) != 0)) {
    iVar9 = *(int *)(param_1 + 400);
  }
  else {
    juce::jpeglibNamespace::emit_restart_e(lVar4,(char)*(undefined4 *)(lVar4 + 0x3c));
    iVar9 = *(int *)(param_1 + 400);
  }
  if ((iVar9 < 1) || (*(char *)(lVar4 + 0xc0) != '\0')) {
LAB_00362ba9:
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    *puVar3 = *(undefined8 *)(lVar4 + 200);
    puVar3[1] = *(undefined8 *)(lVar4 + 0xd0);
    iVar9 = *(int *)(param_1 + 0x130);
    if (iVar9 != 0) {
      iVar10 = *(int *)(lVar4 + 0x38);
      if (*(int *)(lVar4 + 0x38) == 0) {
        *(uint *)(lVar4 + 0x3c) = *(int *)(lVar4 + 0x3c) + 1U & 7;
        iVar10 = iVar9;
      }
      *(int *)(lVar4 + 0x38) = iVar10 + -1;
    }
    return CONCAT71((uint7)(uint3)((uint)iVar9 >> 8),1);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1c8);
  lVar11 = 0;
  do {
    iVar10 = *(int *)(lVar4 + 0x20);
    uVar8 = (ulong)((uint)(int)**(short **)(param_2 + lVar11 * 8) >> ((byte)uVar2 & 0x3f) & 1) <<
            (0x17U - (char)iVar10 & 0x3f) | *(ulong *)(lVar4 + 0x18);
    if (iVar10 < 7) {
      iVar10 = iVar10 + 1;
    }
    else {
      iVar9 = iVar10 + 9;
      do {
        iVar10 = iVar9;
        puVar5 = *(undefined1 **)(lVar4 + 200);
        *(undefined1 **)(lVar4 + 200) = puVar5 + 1;
        *puVar5 = (char)(uVar8 >> 0x10);
        plVar1 = (long *)(lVar4 + 0xd0);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0xd8) + 0x28);
          cVar7 = (*(code *)puVar3[3])();
          if (cVar7 == '\0') {
            puVar6 = (undefined8 *)**(long **)(lVar4 + 0xd8);
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)();
          }
          *(undefined8 *)(lVar4 + 200) = *puVar3;
          *(undefined8 *)(lVar4 + 0xd0) = puVar3[1];
        }
        if ((~(uint)uVar8 & 0xff0000) == 0) {
          puVar5 = *(undefined1 **)(lVar4 + 200);
          *(undefined1 **)(lVar4 + 200) = puVar5 + 1;
          *puVar5 = 0;
          plVar1 = (long *)(lVar4 + 0xd0);
          *plVar1 = *plVar1 + -1;
          if (*plVar1 == 0) {
            puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0xd8) + 0x28);
            cVar7 = (*(code *)puVar3[3])();
            if (cVar7 == '\0') {
              puVar6 = (undefined8 *)**(long **)(lVar4 + 0xd8);
              *(undefined4 *)(puVar6 + 5) = 0x19;
              (*(code *)*puVar6)();
            }
            *(undefined8 *)(lVar4 + 200) = *puVar3;
            *(undefined8 *)(lVar4 + 0xd0) = puVar3[1];
          }
        }
        uVar8 = uVar8 << 8;
        iVar9 = iVar10 + -8;
      } while (0xf < iVar9);
      iVar9 = *(int *)(param_1 + 400);
      iVar10 = iVar10 + -0x10;
    }
    *(ulong *)(lVar4 + 0x18) = uVar8;
    *(int *)(lVar4 + 0x20) = iVar10;
    do {
      lVar11 = lVar11 + 1;
      if (iVar9 <= lVar11) goto LAB_00362ba9;
    } while (*(char *)(lVar4 + 0xc0) != '\0');
  } while( true );
}


