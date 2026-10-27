// Function : _ZN4juce16jpeglibNamespaceL27encode_mcu_AC_refine_jchuffEPNS0_20jpeg_compress_structEPPA64_s
// Namespace: 
// Entry    : 00362c00
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL27encode_mcu_AC_refine_jchuffEPNS0_20jpeg_compress_structEPPA64_s(long param_1, long * param_2)
// Body     : 00362c00 - 00363933


/* WARNING: Removing unreachable block (ram,0x003634f8) */

undefined8
_ZN4juce16jpeglibNamespaceL27encode_mcu_AC_refine_jchuffEPNS0_20jpeg_compress_structEPPA64_s
          (long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ushort uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long *plVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  ushort uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint local_194;
  byte *local_180;
  uint auStack_138 [66];
  
  lVar6 = *(long *)(param_1 + 0x220);
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(lVar6 + 200) = *puVar7;
  *(undefined8 *)(lVar6 + 0xd0) = puVar7[1];
  if ((*(int *)(param_1 + 0x130) != 0) && (*(int *)(lVar6 + 0x38) == 0)) {
    juce::jpeglibNamespace::emit_restart_e(lVar6,(char)*(undefined4 *)(lVar6 + 0x3c));
  }
  plVar3 = (long *)(lVar6 + 200);
  plVar4 = (long *)(lVar6 + 0xd0);
  iVar14 = *(int *)(param_1 + 0x1c0);
  iVar29 = *(int *)(param_1 + 0x1bc);
  lVar25 = (long)iVar29;
  if (iVar14 < iVar29) {
    iVar14 = 0;
    local_194 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x1d0);
    lVar9 = *param_2;
    iVar1 = iVar14 + 1;
    bVar17 = (byte)*(undefined4 *)(param_1 + 0x1c8);
    if (iVar14 == iVar29) {
      iVar24 = 0;
      lVar20 = lVar25;
    }
    else {
      lVar20 = lVar8 + lVar25 * 4;
      lVar15 = 0;
      iVar24 = 0;
      do {
        uVar5 = *(ushort *)(lVar9 + (long)*(int *)(lVar20 + lVar15 * 4) * 2);
        uVar26 = -uVar5;
        if ((short)uVar26 < 0) {
          uVar26 = uVar5;
        }
        uVar22 = (uint)(uVar26 >> (bVar17 & 0x1f));
        auStack_138[lVar25 + lVar15] = uVar22;
        iVar14 = iVar29 + (int)lVar15;
        if (uVar22 != 1) {
          iVar14 = iVar24;
        }
        uVar5 = *(ushort *)(lVar9 + (long)*(int *)(lVar20 + 4 + lVar15 * 4) * 2);
        uVar26 = -uVar5;
        if ((short)uVar26 < 0) {
          uVar26 = uVar5;
        }
        uVar22 = (uint)(uVar26 >> (bVar17 & 0x1f));
        auStack_138[lVar25 + lVar15 + 1] = uVar22;
        iVar24 = iVar29 + 1 + (int)lVar15;
        if (uVar22 != 1) {
          iVar24 = iVar14;
        }
        lVar15 = lVar15 + 2;
      } while ((iVar1 - iVar29 & 0xfffffffeU) != (uint)lVar15);
      lVar20 = lVar15 + lVar25;
    }
    if ((iVar1 - iVar29 & 1U) != 0) {
      uVar5 = *(ushort *)(lVar9 + (long)*(int *)(lVar8 + lVar20 * 4) * 2);
      uVar26 = -uVar5;
      if ((short)uVar26 < 0) {
        uVar26 = uVar5;
      }
      uVar22 = (uint)(uVar26 >> (bVar17 & 0x1f));
      auStack_138[lVar20] = uVar22;
      if (uVar22 == 1) {
        iVar24 = (int)lVar20;
      }
    }
    local_180 = (byte *)((ulong)*(uint *)(lVar6 + 0xe8) + *(long *)(lVar6 + 0xf0));
    plVar11 = (long *)(lVar6 + 0xd8);
    local_194 = 0;
    iVar14 = 0;
    do {
      while (uVar22 = auStack_138[lVar25], uVar22 != 0) {
        if (iVar14 < 0x10) {
          if ((int)uVar22 < 2) goto LAB_003636b4;
LAB_00362e07:
          uVar16 = (ulong)local_194;
          local_194 = local_194 + 1;
          local_180[uVar16] = (byte)uVar22 & 1;
        }
        else {
          iVar29 = iVar14;
          if (lVar25 <= iVar24) {
            do {
              uVar23 = *(uint *)(lVar6 + 0xe4);
              if (uVar23 != 0) {
                iVar14 = 0;
                if (uVar23 != 1) {
                  uVar19 = 0xffffffff;
                  do {
                    uVar18 = uVar19;
                    uVar19 = uVar18 + 1;
                    bVar12 = 3 < uVar23;
                    uVar23 = (int)uVar23 >> 1;
                  } while (bVar12);
                  iVar14 = uVar18 + 2;
                  if (0xd < uVar19) {
                    puVar7 = *(undefined8 **)*plVar11;
                    *(undefined4 *)(puVar7 + 5) = 0x29;
                    (*(code *)*puVar7)();
                  }
                }
                lVar20 = (long)(iVar14 << 4);
                if (*(char *)(lVar6 + 0xc0) == '\0') {
                  lVar15 = *(long *)(lVar6 + 0x60 + (long)*(int *)(lVar6 + 0xe0) * 8);
                  uVar23 = *(uint *)(lVar15 + lVar20 * 4);
                  bVar17 = *(byte *)(lVar15 + 0x400 + lVar20);
                  if ((char)bVar17 == 0) {
                    puVar7 = (undefined8 *)**(long **)(lVar6 + 0xd8);
                    *(undefined4 *)(puVar7 + 5) = 0x29;
                    (*(code *)*puVar7)();
                    if (*(char *)(lVar6 + 0xc0) != '\0') goto LAB_00363060;
                  }
                  iVar27 = (int)(char)bVar17 + *(int *)(lVar6 + 0x20);
                  uVar16 = (ulong)(uVar23 & ~(uint)(-1L << (bVar17 & 0x3f))) <<
                           (0x18U - (char)iVar27 & 0x3f) | *(ulong *)(lVar6 + 0x18);
                  iVar28 = iVar27;
                  if (7 < iVar27) {
                    do {
                      puVar10 = (undefined1 *)*plVar3;
                      *plVar3 = (long)(puVar10 + 1);
                      *puVar10 = (char)(uVar16 >> 0x10);
                      *plVar4 = *plVar4 + -1;
                      if (*plVar4 == 0) {
                        plVar2 = *(long **)(*plVar11 + 0x28);
                        cVar13 = (*(code *)plVar2[3])();
                        if (cVar13 == '\0') {
                          puVar7 = *(undefined8 **)*plVar11;
                          *(undefined4 *)(puVar7 + 5) = 0x19;
                          (*(code *)*puVar7)();
                        }
                        *plVar3 = *plVar2;
                        *plVar4 = plVar2[1];
                      }
                      if ((~(uint)uVar16 & 0xff0000) == 0) {
                        puVar10 = (undefined1 *)*plVar3;
                        *plVar3 = (long)(puVar10 + 1);
                        *puVar10 = 0;
                        *plVar4 = *plVar4 + -1;
                        if (*plVar4 == 0) {
                          plVar2 = *(long **)(*plVar11 + 0x28);
                          cVar13 = (*(code *)plVar2[3])();
                          if (cVar13 == '\0') {
                            puVar7 = *(undefined8 **)*plVar11;
                            *(undefined4 *)(puVar7 + 5) = 0x19;
                            (*(code *)*puVar7)();
                          }
                          *plVar3 = *plVar2;
                          *plVar4 = plVar2[1];
                        }
                      }
                      uVar16 = uVar16 << 8;
                      iVar27 = iVar28 + -8;
                      bVar12 = 0xf < iVar28;
                      iVar28 = iVar27;
                    } while (bVar12);
                  }
                  *(ulong *)(lVar6 + 0x18) = uVar16;
                  *(int *)(lVar6 + 0x20) = iVar27;
                }
                else {
                  plVar2 = (long *)(*(long *)(lVar6 + 0xa0 + (long)*(int *)(lVar6 + 0xe0) * 8) +
                                   lVar20 * 8);
                  *plVar2 = *plVar2 + 1;
                }
LAB_00363060:
                if ((iVar14 != 0) && (*(char *)(lVar6 + 0xc0) == '\0')) {
                  iVar27 = iVar14 + *(int *)(lVar6 + 0x20);
                  uVar16 = (ulong)(~(uint)(-1L << ((byte)iVar14 & 0x3f)) & *(uint *)(lVar6 + 0xe4))
                           << (0x18U - (char)iVar27 & 0x3f) | *(ulong *)(lVar6 + 0x18);
                  iVar14 = iVar27;
                  if (7 < iVar27) {
                    do {
                      puVar10 = (undefined1 *)*plVar3;
                      *plVar3 = (long)(puVar10 + 1);
                      *puVar10 = (char)(uVar16 >> 0x10);
                      *plVar4 = *plVar4 + -1;
                      if (*plVar4 == 0) {
                        plVar2 = *(long **)(*plVar11 + 0x28);
                        cVar13 = (*(code *)plVar2[3])();
                        if (cVar13 == '\0') {
                          puVar7 = *(undefined8 **)*plVar11;
                          *(undefined4 *)(puVar7 + 5) = 0x19;
                          (*(code *)*puVar7)();
                        }
                        *plVar3 = *plVar2;
                        *plVar4 = plVar2[1];
                      }
                      if ((~(uint)uVar16 & 0xff0000) == 0) {
                        puVar10 = (undefined1 *)*plVar3;
                        *plVar3 = (long)(puVar10 + 1);
                        *puVar10 = 0;
                        *plVar4 = *plVar4 + -1;
                        if (*plVar4 == 0) {
                          plVar2 = *(long **)(*plVar11 + 0x28);
                          cVar13 = (*(code *)plVar2[3])();
                          if (cVar13 == '\0') {
                            puVar7 = *(undefined8 **)*plVar11;
                            *(undefined4 *)(puVar7 + 5) = 0x19;
                            (*(code *)*puVar7)();
                          }
                          *plVar3 = *plVar2;
                          *plVar4 = plVar2[1];
                        }
                      }
                      uVar16 = uVar16 << 8;
                      iVar27 = iVar14 + -8;
                      bVar12 = 0xf < iVar14;
                      iVar14 = iVar27;
                    } while (bVar12);
                  }
                  *(ulong *)(lVar6 + 0x18) = uVar16;
                  *(int *)(lVar6 + 0x20) = iVar27;
                }
                *(undefined4 *)(lVar6 + 0xe4) = 0;
                iVar14 = *(int *)(lVar6 + 0xe8);
                if ((iVar14 != 0) && (*(char *)(lVar6 + 0xc0) == '\0')) {
                  pbVar21 = *(byte **)(lVar6 + 0xf0);
                  do {
                    iVar27 = *(int *)(lVar6 + 0x20);
                    uVar16 = (ulong)(*pbVar21 & 1) << (0x17U - (char)iVar27 & 0x3f) |
                             *(ulong *)(lVar6 + 0x18);
                    if (iVar27 < 7) {
                      iVar27 = iVar27 + 1;
                    }
                    else {
                      iVar28 = iVar27 + 9;
                      do {
                        iVar27 = iVar28;
                        puVar10 = (undefined1 *)*plVar3;
                        *plVar3 = (long)(puVar10 + 1);
                        *puVar10 = (char)(uVar16 >> 0x10);
                        *plVar4 = *plVar4 + -1;
                        if (*plVar4 == 0) {
                          plVar2 = *(long **)(*plVar11 + 0x28);
                          cVar13 = (*(code *)plVar2[3])();
                          if (cVar13 == '\0') {
                            puVar7 = *(undefined8 **)*plVar11;
                            *(undefined4 *)(puVar7 + 5) = 0x19;
                            (*(code *)*puVar7)();
                          }
                          *plVar3 = *plVar2;
                          *plVar4 = plVar2[1];
                        }
                        if ((~(uint)uVar16 & 0xff0000) == 0) {
                          puVar10 = (undefined1 *)*plVar3;
                          *plVar3 = (long)(puVar10 + 1);
                          *puVar10 = 0;
                          *plVar4 = *plVar4 + -1;
                          if (*plVar4 == 0) {
                            plVar2 = *(long **)(*plVar11 + 0x28);
                            cVar13 = (*(code *)plVar2[3])();
                            if (cVar13 == '\0') {
                              puVar7 = *(undefined8 **)*plVar11;
                              *(undefined4 *)(puVar7 + 5) = 0x19;
                              (*(code *)*puVar7)();
                            }
                            *plVar3 = *plVar2;
                            *plVar4 = plVar2[1];
                          }
                        }
                        uVar16 = uVar16 << 8;
                        iVar28 = iVar27 + -8;
                      } while (0xf < iVar28);
                      iVar27 = iVar27 + -0x10;
                    }
                    *(ulong *)(lVar6 + 0x18) = uVar16;
                    *(int *)(lVar6 + 0x20) = iVar27;
                    do {
                      iVar14 = iVar14 + -1;
                      if (iVar14 == 0) goto LAB_00363270;
                      pbVar21 = pbVar21 + 1;
                    } while (*(char *)(lVar6 + 0xc0) != '\0');
                  } while( true );
                }
LAB_00363270:
                *(undefined4 *)(lVar6 + 0xe8) = 0;
              }
              if (*(char *)(lVar6 + 0xc0) == '\0') {
                lVar20 = *(long *)(lVar6 + 0x60 + (long)*(int *)(lVar6 + 0xe0) * 8);
                uVar23 = *(uint *)(lVar20 + 0x3c0);
                bVar17 = *(byte *)(lVar20 + 0x4f0);
                if ((char)bVar17 == 0) {
                  puVar7 = (undefined8 *)**(long **)(lVar6 + 0xd8);
                  *(undefined4 *)(puVar7 + 5) = 0x29;
                  (*(code *)*puVar7)();
                  if (*(char *)(lVar6 + 0xc0) != '\0') goto LAB_00362e40;
                }
                iVar14 = (int)(char)bVar17 + *(int *)(lVar6 + 0x20);
                uVar16 = (ulong)(uVar23 & ~(uint)(-1L << (bVar17 & 0x3f))) <<
                         (0x18U - (char)iVar14 & 0x3f) | *(ulong *)(lVar6 + 0x18);
                iVar27 = iVar14;
                if (iVar14 < 8) {
                  cVar13 = '\0';
                  *(ulong *)(lVar6 + 0x18) = uVar16;
                  *(int *)(lVar6 + 0x20) = iVar14;
                }
                else {
                  do {
                    puVar10 = (undefined1 *)*plVar3;
                    *plVar3 = (long)(puVar10 + 1);
                    *puVar10 = (char)(uVar16 >> 0x10);
                    *plVar4 = *plVar4 + -1;
                    if (*plVar4 == 0) {
                      plVar2 = *(long **)(*plVar11 + 0x28);
                      cVar13 = (*(code *)plVar2[3])();
                      if (cVar13 == '\0') {
                        puVar7 = *(undefined8 **)*plVar11;
                        *(undefined4 *)(puVar7 + 5) = 0x19;
                        (*(code *)*puVar7)();
                      }
                      *plVar3 = *plVar2;
                      *plVar4 = plVar2[1];
                    }
                    if ((~(uint)uVar16 & 0xff0000) == 0) {
                      puVar10 = (undefined1 *)*plVar3;
                      *plVar3 = (long)(puVar10 + 1);
                      *puVar10 = 0;
                      *plVar4 = *plVar4 + -1;
                      if (*plVar4 == 0) {
                        plVar2 = *(long **)(*plVar11 + 0x28);
                        cVar13 = (*(code *)plVar2[3])();
                        if (cVar13 == '\0') {
                          puVar7 = *(undefined8 **)*plVar11;
                          *(undefined4 *)(puVar7 + 5) = 0x19;
                          (*(code *)*puVar7)();
                        }
                        *plVar3 = *plVar2;
                        *plVar4 = plVar2[1];
                      }
                    }
                    uVar16 = uVar16 << 8;
                    iVar14 = iVar27 + -8;
                    bVar12 = 0xf < iVar27;
                    iVar27 = iVar14;
                  } while (bVar12);
                  cVar13 = *(char *)(lVar6 + 0xc0);
                  *(ulong *)(lVar6 + 0x18) = uVar16;
                  *(int *)(lVar6 + 0x20) = iVar14;
                }
                if ((local_194 != 0) && (cVar13 == '\0')) {
                  do {
                    uVar16 = (ulong)(*local_180 & 1) << (0x17U - (char)iVar14 & 0x3f) | uVar16;
                    if (iVar14 < 7) {
                      iVar14 = iVar14 + 1;
                    }
                    else {
                      iVar27 = iVar14 + 9;
                      do {
                        iVar14 = iVar27;
                        puVar10 = (undefined1 *)*plVar3;
                        *plVar3 = (long)(puVar10 + 1);
                        *puVar10 = (char)(uVar16 >> 0x10);
                        *plVar4 = *plVar4 + -1;
                        if (*plVar4 == 0) {
                          plVar2 = *(long **)(*plVar11 + 0x28);
                          cVar13 = (*(code *)plVar2[3])();
                          if (cVar13 == '\0') {
                            puVar7 = *(undefined8 **)*plVar11;
                            *(undefined4 *)(puVar7 + 5) = 0x19;
                            (*(code *)*puVar7)();
                          }
                          *plVar3 = *plVar2;
                          *plVar4 = plVar2[1];
                        }
                        if ((~(uint)uVar16 & 0xff0000) == 0) {
                          puVar10 = (undefined1 *)*plVar3;
                          *plVar3 = (long)(puVar10 + 1);
                          *puVar10 = 0;
                          *plVar4 = *plVar4 + -1;
                          if (*plVar4 == 0) {
                            plVar2 = *(long **)(*plVar11 + 0x28);
                            cVar13 = (*(code *)plVar2[3])();
                            if (cVar13 == '\0') {
                              puVar7 = *(undefined8 **)*plVar11;
                              *(undefined4 *)(puVar7 + 5) = 0x19;
                              (*(code *)*puVar7)();
                            }
                            *plVar3 = *plVar2;
                            *plVar4 = plVar2[1];
                          }
                        }
                        uVar16 = uVar16 << 8;
                        iVar27 = iVar14 + -8;
                      } while (0xf < iVar27);
                      iVar14 = iVar14 + -0x10;
                    }
                    *(ulong *)(lVar6 + 0x18) = uVar16;
                    *(int *)(lVar6 + 0x20) = iVar14;
                    do {
                      local_194 = local_194 - 1;
                      if (local_194 == 0) goto LAB_00362e40;
                      local_180 = local_180 + 1;
                    } while (*(char *)(lVar6 + 0xc0) != '\0');
                  } while( true );
                }
              }
              else {
                plVar2 = (long *)(*(long *)(lVar6 + 0xa0 + (long)*(int *)(lVar6 + 0xe0) * 8) + 0x780
                                 );
                *plVar2 = *plVar2 + 1;
              }
LAB_00362e40:
              iVar14 = iVar29 + -0x10;
              local_180 = *(byte **)(lVar6 + 0xf0);
              local_194 = 0;
              bVar12 = 0x1f < iVar29;
              iVar29 = iVar14;
            } while (bVar12);
          }
          if (1 < (int)uVar22) goto LAB_00362e07;
LAB_003636b4:
          juce::jpeglibNamespace::emit_eobrun(lVar6);
          uVar16 = (long)(iVar14 << 4) | 1;
          if (*(char *)(lVar6 + 0xc0) == '\0') {
            lVar20 = *(long *)(lVar6 + 0x60 + (long)*(int *)(lVar6 + 0xe0) * 8);
            juce::jpeglibNamespace::emit_bits_e
                      (lVar6,*(uint *)(lVar20 + uVar16 * 4),(int)*(char *)(lVar20 + 0x400 + uVar16))
            ;
            if (*(char *)(lVar6 + 0xc0) == '\0') {
              iVar14 = *(int *)(lVar6 + 0x20);
              uVar16 = (ulong)((ushort)~*(ushort *)(lVar9 + (long)*(int *)(lVar8 + lVar25 * 4) * 2)
                              >> 0xf) << (0x17U - (char)iVar14 & 0x3f) | *(ulong *)(lVar6 + 0x18);
              if (iVar14 < 7) {
                iVar14 = iVar14 + 1;
              }
              else {
                iVar29 = iVar14 + 9;
                do {
                  iVar14 = iVar29;
                  puVar10 = (undefined1 *)*plVar3;
                  *plVar3 = (long)(puVar10 + 1);
                  *puVar10 = (char)(uVar16 >> 0x10);
                  *plVar4 = *plVar4 + -1;
                  if (*plVar4 == 0) {
                    plVar2 = *(long **)(*plVar11 + 0x28);
                    cVar13 = (*(code *)plVar2[3])();
                    if (cVar13 == '\0') {
                      puVar7 = *(undefined8 **)*plVar11;
                      *(undefined4 *)(puVar7 + 5) = 0x19;
                      (*(code *)*puVar7)();
                    }
                    *plVar3 = *plVar2;
                    *plVar4 = plVar2[1];
                  }
                  if ((~(uint)uVar16 & 0xff0000) == 0) {
                    puVar10 = (undefined1 *)*plVar3;
                    *plVar3 = (long)(puVar10 + 1);
                    *puVar10 = 0;
                    *plVar4 = *plVar4 + -1;
                    if (*plVar4 == 0) {
                      plVar2 = *(long **)(*plVar11 + 0x28);
                      cVar13 = (*(code *)plVar2[3])();
                      if (cVar13 == '\0') {
                        puVar7 = *(undefined8 **)*plVar11;
                        *(undefined4 *)(puVar7 + 5) = 0x19;
                        (*(code *)*puVar7)();
                      }
                      *plVar3 = *plVar2;
                      *plVar4 = plVar2[1];
                    }
                  }
                  uVar16 = uVar16 << 8;
                  iVar29 = iVar14 + -8;
                } while (0xf < iVar29);
                iVar14 = iVar14 + -0x10;
              }
              *(ulong *)(lVar6 + 0x18) = uVar16;
              *(int *)(lVar6 + 0x20) = iVar14;
            }
          }
          else {
            plVar2 = (long *)(*(long *)(lVar6 + 0xa0 + (long)*(int *)(lVar6 + 0xe0) * 8) +
                             (long)(int)uVar16 * 8);
            *plVar2 = *plVar2 + 1;
          }
          juce::jpeglibNamespace::emit_buffered_bits(lVar6,local_180,local_194);
          local_180 = *(byte **)(lVar6 + 0xf0);
          iVar14 = 0;
          local_194 = 0;
        }
        lVar25 = lVar25 + 1;
        if (iVar1 == (int)lVar25) goto LAB_00363898;
      }
      iVar14 = iVar14 + 1;
      lVar25 = lVar25 + 1;
    } while (iVar1 != (int)lVar25);
  }
LAB_00363898:
  if ((0 < iVar14) || (local_194 != 0)) {
    iVar14 = *(int *)(lVar6 + 0xe4) + 1;
    *(int *)(lVar6 + 0xe4) = iVar14;
    local_194 = local_194 + *(int *)(lVar6 + 0xe8);
    *(uint *)(lVar6 + 0xe8) = local_194;
    if ((iVar14 == 0x7fff) || (0x3a9 < local_194)) {
      juce::jpeglibNamespace::emit_eobrun(lVar6);
    }
  }
  plVar11 = *(long **)(param_1 + 0x28);
  *plVar11 = *plVar3;
  plVar11[1] = *plVar4;
  iVar14 = *(int *)(param_1 + 0x130);
  if (iVar14 != 0) {
    iVar29 = *(int *)(lVar6 + 0x38);
    if (*(int *)(lVar6 + 0x38) == 0) {
      *(uint *)(lVar6 + 0x3c) = *(int *)(lVar6 + 0x3c) + 1U & 7;
      iVar29 = iVar14;
    }
    *(int *)(lVar6 + 0x38) = iVar29 + -1;
  }
  return CONCAT71((uint7)(uint3)((uint)iVar14 >> 8),1);
}


