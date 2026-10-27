// Function : _ZN4juce16jpeglibNamespaceL26encode_mcu_AC_first_jchuffEPNS0_20jpeg_compress_structEPPA64_s
// Namespace: 
// Entry    : 003624e0
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL26encode_mcu_AC_first_jchuffEPNS0_20jpeg_compress_structEPPA64_s(long * param_1, long * param_2)
// Body     : 003624e0 - 00362982


/* WARNING: Removing unreachable block (ram,0x00362687) */

undefined8
_ZN4juce16jpeglibNamespaceL26encode_mcu_AC_first_jchuffEPNS0_20jpeg_compress_structEPPA64_s
          (long *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  short sVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  char cVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  
  puVar4 = (undefined8 *)param_1[5];
  lVar5 = param_1[0x44];
  *(undefined8 *)(lVar5 + 200) = *puVar4;
  *(undefined8 *)(lVar5 + 0xd0) = puVar4[1];
  if (((int)param_1[0x26] != 0) && (*(int *)(lVar5 + 0x38) == 0)) {
    juce::jpeglibNamespace::emit_restart_e(lVar5,(char)*(undefined4 *)(lVar5 + 0x3c));
  }
  lVar23 = (long)*(int *)((long)param_1 + 0x1bc);
  if (*(int *)((long)param_1 + 0x1bc) <= (int)param_1[0x38]) {
    lVar12 = param_1[0xb];
    lVar13 = param_1[0x39];
    lVar6 = param_1[0x3a];
    lVar7 = *param_2;
    iVar15 = (int)param_1[0x38] + 1;
    iVar19 = 0;
    do {
      while( true ) {
        iVar22 = iVar19;
        sVar3 = *(short *)(lVar7 + (long)*(int *)(lVar6 + lVar23 * 4) * 2);
        iVar19 = (int)sVar3;
        if (iVar19 == 0) break;
        if (sVar3 < 0) {
          uVar20 = -iVar19 >> ((byte)lVar13 & 0x1f);
          if (uVar20 == 0) break;
          iVar19 = *(int *)(lVar5 + 0xe4);
          uVar11 = ~uVar20;
        }
        else {
          uVar20 = iVar19 >> ((byte)lVar13 & 0x1f);
          if (uVar20 == 0) break;
          iVar19 = *(int *)(lVar5 + 0xe4);
          uVar11 = uVar20;
        }
        if (iVar19 != 0) {
          juce::jpeglibNamespace::emit_eobrun(lVar5);
        }
        if (0xf < iVar22) {
          if (*(char *)(lVar5 + 0xc0) == '\0') {
            lVar16 = (long)*(int *)(lVar5 + 0xe0);
            do {
              lVar16 = *(long *)(lVar5 + 0x60 + lVar16 * 8);
              uVar17 = *(uint *)(lVar16 + 0x3c0);
              bVar2 = *(byte *)(lVar16 + 0x4f0);
              iVar19 = iVar22;
              if ((char)bVar2 == 0) {
                puVar4 = (undefined8 *)**(long **)(lVar5 + 0xd8);
                *(undefined4 *)(puVar4 + 5) = 0x29;
                (*(code *)*puVar4)();
                if (*(char *)(lVar5 + 0xc0) == '\0') goto LAB_003626cb;
              }
              else {
LAB_003626cb:
                iVar22 = (int)(char)bVar2 + *(int *)(lVar5 + 0x20);
                uVar21 = (ulong)(uVar17 & ~(uint)(-1L << (bVar2 & 0x3f))) <<
                         (0x18U - (char)iVar22 & 0x3f) | *(ulong *)(lVar5 + 0x18);
                iVar18 = iVar22;
                if (7 < iVar22) {
                  do {
                    puVar8 = *(undefined1 **)(lVar5 + 200);
                    *(undefined1 **)(lVar5 + 200) = puVar8 + 1;
                    *puVar8 = (char)(uVar21 >> 0x10);
                    plVar1 = (long *)(lVar5 + 0xd0);
                    *plVar1 = *plVar1 + -1;
                    if (*plVar1 == 0) {
                      puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0xd8) + 0x28);
                      cVar14 = (*(code *)puVar4[3])();
                      if (cVar14 == '\0') {
                        puVar9 = (undefined8 *)**(long **)(lVar5 + 0xd8);
                        *(undefined4 *)(puVar9 + 5) = 0x19;
                        (*(code *)*puVar9)();
                      }
                      *(undefined8 *)(lVar5 + 200) = *puVar4;
                      *(undefined8 *)(lVar5 + 0xd0) = puVar4[1];
                    }
                    if ((~(uint)uVar21 & 0xff0000) == 0) {
                      puVar8 = *(undefined1 **)(lVar5 + 200);
                      *(undefined1 **)(lVar5 + 200) = puVar8 + 1;
                      *puVar8 = 0;
                      plVar1 = (long *)(lVar5 + 0xd0);
                      *plVar1 = *plVar1 + -1;
                      if (*plVar1 == 0) {
                        puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0xd8) + 0x28);
                        cVar14 = (*(code *)puVar4[3])();
                        if (cVar14 == '\0') {
                          puVar9 = (undefined8 *)**(long **)(lVar5 + 0xd8);
                          *(undefined4 *)(puVar9 + 5) = 0x19;
                          (*(code *)*puVar9)();
                        }
                        *(undefined8 *)(lVar5 + 200) = *puVar4;
                        *(undefined8 *)(lVar5 + 0xd0) = puVar4[1];
                      }
                    }
                    uVar21 = uVar21 << 8;
                    iVar22 = iVar18 + -8;
                    bVar10 = 0xf < iVar18;
                    iVar18 = iVar22;
                  } while (bVar10);
                }
                *(ulong *)(lVar5 + 0x18) = uVar21;
                *(int *)(lVar5 + 0x20) = iVar22;
              }
              while( true ) {
                iVar22 = iVar19 + -0x10;
                if (iVar19 < 0x20) goto LAB_00362860;
                lVar16 = (long)*(int *)(lVar5 + 0xe0);
                if (*(char *)(lVar5 + 0xc0) == '\0') break;
                plVar1 = (long *)(*(long *)(lVar5 + 0xa0 + lVar16 * 8) + 0x780);
                *plVar1 = *plVar1 + 1;
                iVar19 = iVar22;
              }
            } while( true );
          }
          lVar16 = *(long *)(lVar5 + 0xa0 + (long)*(int *)(lVar5 + 0xe0) * 8);
          iVar19 = 0x1f;
          if (iVar22 < 0x1f) {
            iVar19 = iVar22;
          }
          uVar17 = (iVar22 - iVar19) + 0xf;
          iVar22 = (iVar22 - (uVar17 & 0xfffffff0)) + -0x10;
          *(ulong *)(lVar16 + 0x780) = *(long *)(lVar16 + 0x780) + (ulong)(uVar17 >> 4) + 1;
        }
LAB_00362860:
        iVar19 = 0;
        do {
          iVar18 = iVar19;
          iVar19 = iVar18 + 1;
          bVar10 = 1 < uVar20;
          uVar20 = (int)uVar20 >> 1;
        } while (bVar10);
        if ((int)lVar12 + 2 <= iVar18) {
          puVar4 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar4 + 5) = 6;
          (*(code *)*puVar4)();
        }
        iVar22 = iVar22 * 0x10 + iVar19;
        if (*(char *)(lVar5 + 0xc0) == '\0') {
          lVar16 = *(long *)(lVar5 + 0x60 + (long)*(int *)(lVar5 + 0xe0) * 8);
          juce::jpeglibNamespace::emit_bits_e
                    (lVar5,*(uint *)(lVar16 + (long)iVar22 * 4),
                     (int)*(char *)(lVar16 + 0x400 + (long)iVar22));
        }
        else {
          plVar1 = (long *)(*(long *)(lVar5 + 0xa0 + (long)*(int *)(lVar5 + 0xe0) * 8) +
                           (long)iVar22 * 8);
          *plVar1 = *plVar1 + 1;
        }
        juce::jpeglibNamespace::emit_bits_e(lVar5,uVar11,iVar19);
        lVar23 = lVar23 + 1;
        iVar19 = 0;
        if (iVar15 == (int)lVar23) goto LAB_0036292f;
      }
      lVar23 = lVar23 + 1;
      iVar19 = iVar22 + 1;
    } while (iVar15 != (int)lVar23);
    if ((-1 < iVar22) &&
       (iVar15 = *(int *)(lVar5 + 0xe4) + 1, *(int *)(lVar5 + 0xe4) = iVar15, iVar15 == 0x7fff)) {
      juce::jpeglibNamespace::emit_eobrun(lVar5);
    }
  }
LAB_0036292f:
  puVar4 = (undefined8 *)param_1[5];
  *puVar4 = *(undefined8 *)(lVar5 + 200);
  puVar4[1] = *(undefined8 *)(lVar5 + 0xd0);
  lVar23 = param_1[0x26];
  iVar15 = (int)lVar23;
  if (iVar15 != 0) {
    iVar19 = *(int *)(lVar5 + 0x38);
    if (*(int *)(lVar5 + 0x38) == 0) {
      *(uint *)(lVar5 + 0x3c) = *(int *)(lVar5 + 0x3c) + 1U & 7;
      iVar19 = iVar15;
    }
    *(int *)(lVar5 + 0x38) = iVar19 + -1;
  }
  return CONCAT71((uint7)(uint3)((ulong)lVar23 >> 8),1);
}


