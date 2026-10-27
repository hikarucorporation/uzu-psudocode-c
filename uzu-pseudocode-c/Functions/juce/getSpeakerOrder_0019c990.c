// Function : getSpeakerOrder
// Namespace: juce
// Entry    : 0019c990
// Prototype: undefined getSpeakerOrder(juce * this, ulong param_1)
// Body     : 0019c990 - 0019d7c0


/* juce::getSpeakerOrder(unsigned long) */

void __thiscall juce::getSpeakerOrder(juce *this,ulong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  void *__ptr;
  byte bVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  
  if (param_1 == 0) {
    puVar7 = &detail::layoutTable;
  }
  else if ((long)param_1 < 0x2d03f) {
    if ((long)param_1 < 0x137) {
      if ((long)param_1 < 0x37) {
        if (param_1 == 3) {
          puVar7 = (undefined8 *)&DAT_00704a50;
        }
        else if (param_1 == 7) {
          puVar7 = (undefined8 *)&DAT_00704a68;
        }
        else {
          if (param_1 != 0x33) goto switchD_0019cc9d_caseD_f8;
          puVar7 = (undefined8 *)&DAT_00704ba0;
        }
      }
      else {
        switch(param_1) {
        case 0xf7:
          puVar7 = (undefined8 *)&DAT_00704b58;
          break;
        case 0xf8:
        case 0xf9:
        case 0xfa:
        case 0xfb:
        case 0xfc:
        case 0xfd:
        case 0xfe:
        case 0x100:
        case 0x101:
        case 0x102:
        case 0x104:
        case 0x105:
        case 0x106:
          goto switchD_0019cc9d_caseD_f8;
        case 0xff:
          puVar7 = (undefined8 *)&DAT_00704b88;
          break;
        case 0x103:
          puVar7 = (undefined8 *)&DAT_00704a80;
          break;
        case 0x107:
          puVar7 = (undefined8 *)&DAT_00704a98;
          break;
        default:
          if (param_1 == 0x37) {
            puVar7 = (undefined8 *)&DAT_00704ab0;
          }
          else {
            if (param_1 != 0x3f) goto switchD_0019cc9d_caseD_f8;
            puVar7 = (undefined8 *)&DAT_00704ac8;
          }
        }
      }
    }
    else if ((long)param_1 < 0x633) {
      if (param_1 == 0x137) {
        puVar7 = (undefined8 *)&DAT_00704ae0;
      }
      else {
        if (param_1 != 0x13f) goto switchD_0019cc9d_caseD_f8;
        puVar7 = (undefined8 *)&DAT_00704af8;
      }
    }
    else {
      switch(param_1) {
      case 0x633:
        puVar7 = (undefined8 *)&DAT_00704b10;
        break;
      case 0x634:
      case 0x635:
      case 0x636:
      case 0x638:
      case 0x639:
      case 0x63a:
      case 0x63c:
      case 0x63d:
      case 0x63e:
switchD_0019cc9d_caseD_f8:
        uVar18 = 0;
        uVar12 = param_1;
        do {
          uVar18 = uVar18 + ((uint)uVar12 & 1);
          bVar26 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar26);
        if (uVar18 == 0) {
          iVar24 = 0;
          uVar22 = 0;
          __ptr = (void *)0x0;
        }
        else {
          uVar17 = 0;
          uVar22 = uVar18 + (uVar18 >> 1) + 8 & 0xfffffff8;
          if ((int)uVar22 < 1) {
            __ptr = (void *)0x0;
          }
          else {
            __ptr = malloc((ulong)uVar22 << 2);
          }
          uVar10 = 0x80;
          if ((param_1 & 4) == 0) {
            uVar10 = 3;
          }
          iVar24 = 0;
          do {
            if (param_1 != 0) {
              bVar9 = 0;
              uVar12 = param_1;
              uVar25 = 0xffffffff;
              do {
                uVar6 = ((uint)uVar12 & 1) + uVar25;
                if (uVar6 == uVar17) {
                  lVar19 = 1L << (bVar9 & 0x3f);
                  if (lVar19 < 0x40000000) {
                    if (lVar19 < 0x8000) {
                      if (lVar19 < 0x80) {
                        if (lVar19 - 1U < 0x40) {
                    /* WARNING: Could not emulate address calculation at 0x0019d279 */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)((long)&DAT_005da948 + (long)(int)(&DAT_005da948)[lVar19 - 1U]))
                                    (__ptr,uVar25,1);
                          return;
                        }
                        break;
                      }
                      if (lVar19 < 0x800) {
                        if (lVar19 < 0x200) {
                          if (lVar19 == 0x80) {
                            uVar14 = 8;
                          }
                          else {
                            if (lVar19 != 0x100) break;
                            uVar14 = 9;
                          }
                        }
                        else if (lVar19 == 0x200) {
                          uVar14 = 10;
                        }
                        else {
                          if (lVar19 != 0x400) break;
                          uVar14 = 0xb;
                        }
                      }
                      else if (lVar19 < 0x2000) {
                        if (lVar19 == 0x800) {
                          uVar14 = 0xc;
                        }
                        else {
                          if (lVar19 != 0x1000) break;
                          uVar14 = 0xd;
                        }
                      }
                      else if (lVar19 == 0x2000) {
                        uVar14 = 0xe;
                      }
                      else {
                        if (lVar19 != 0x4000) break;
                        uVar14 = 0xf;
                      }
                    }
                    else if (lVar19 < 0x400000) {
                      if (lVar19 < 0x40000) {
                        if (lVar19 == 0x8000) {
                          uVar14 = 0x10;
                        }
                        else if (lVar19 == 0x10000) {
                          uVar14 = 0x11;
                        }
                        else {
                          if (lVar19 != 0x20000) break;
                          uVar14 = 0x12;
                        }
                      }
                      else if (lVar19 < 0x100000) {
                        if (lVar19 == 0x40000) {
                          uVar14 = 0x13;
                        }
                        else {
                          uVar14 = uVar10;
                          if (lVar19 != 0x80000) break;
                        }
                      }
                      else if (lVar19 == 0x100000) {
                        uVar14 = 0x18;
                      }
                      else {
                        if (lVar19 != 0x200000) break;
                        uVar14 = 0x19;
                      }
                    }
                    else if (lVar19 < 0x4000000) {
                      if (lVar19 < 0x1000000) {
                        if (lVar19 == 0x400000) {
                          uVar14 = 0x1a;
                        }
                        else {
                          if (lVar19 != 0x800000) break;
                          uVar14 = 0x1b;
                        }
                      }
                      else if (lVar19 == 0x1000000) {
                        uVar14 = 0x1c;
                      }
                      else {
                        if (lVar19 != 0x2000000) break;
                        uVar14 = 0x1d;
                      }
                    }
                    else if (lVar19 < 0x10000000) {
                      if (lVar19 == 0x4000000) {
                        uVar14 = 0x14;
                      }
                      else {
                        if (lVar19 != 0x8000000) break;
                        uVar14 = 0x15;
                      }
                    }
                    else if (lVar19 == 0x10000000) {
                      uVar14 = 0x3e;
                    }
                    else {
                      if (lVar19 != 0x20000000) break;
                      uVar14 = 0x3f;
                    }
                  }
                  else if (lVar19 < 0x200000000000) {
                    if (lVar19 < 0x2000000000) {
                      if (lVar19 < 0x200000000) {
                        if (lVar19 == 0x40000000) {
                          uVar14 = 0x40;
                        }
                        else if (lVar19 == 0x80000000) {
                          uVar14 = 0x41;
                        }
                        else {
                          if (lVar19 != 0x100000000) break;
                          uVar14 = 0x42;
                        }
                      }
                      else if (lVar19 < 0x800000000) {
                        if (lVar19 == 0x200000000) {
                          uVar14 = 0x43;
                        }
                        else {
                          if (lVar19 != 0x400000000) break;
                          uVar14 = 0x44;
                        }
                      }
                      else if (lVar19 == 0x800000000) {
                        uVar14 = 0x45;
                      }
                      else {
                        if (lVar19 != 0x1000000000) break;
                        uVar14 = 0x46;
                      }
                    }
                    else if (lVar19 < 0x20000000000) {
                      if (lVar19 < 0x8000000000) {
                        if (lVar19 == 0x2000000000) {
                          uVar14 = 0x47;
                        }
                        else {
                          if (lVar19 != 0x4000000000) break;
                          uVar14 = 0x1e;
                        }
                      }
                      else if (lVar19 == 0x8000000000) {
                        uVar14 = 0x1f;
                      }
                      else {
                        if (lVar19 != 0x10000000000) break;
                        uVar14 = 0x20;
                      }
                    }
                    else if (lVar19 < 0x80000000000) {
                      if (lVar19 == 0x20000000000) {
                        uVar14 = 0x21;
                      }
                      else {
                        if (lVar19 != 0x40000000000) break;
                        uVar14 = 0x22;
                      }
                    }
                    else if (lVar19 == 0x80000000000) {
                      uVar14 = 0x23;
                    }
                    else {
                      if (lVar19 != 0x100000000000) break;
                      uVar14 = 0x24;
                    }
                  }
                  else if (lVar19 < 0x20000000000000) {
                    if (lVar19 < 0x2000000000000) {
                      if (lVar19 < 0x800000000000) {
                        if (lVar19 == 0x200000000000) {
                          uVar14 = 0x25;
                        }
                        else {
                          if (lVar19 != 0x400000000000) break;
                          uVar14 = 0x26;
                        }
                      }
                      else if (lVar19 == 0x800000000000) {
                        uVar14 = 0x27;
                      }
                      else {
                        if (lVar19 != 0x1000000000000) break;
                        uVar14 = 0x28;
                      }
                    }
                    else if (lVar19 < 0x8000000000000) {
                      if (lVar19 == 0x2000000000000) {
                        uVar14 = 0x29;
                      }
                      else {
                        if (lVar19 != 0x4000000000000) break;
                        uVar14 = 0x2a;
                      }
                    }
                    else if (lVar19 == 0x8000000000000) {
                      uVar14 = 0x2b;
                    }
                    else {
                      if (lVar19 != 0x10000000000000) break;
                      uVar14 = 0x2c;
                    }
                  }
                  else if (lVar19 < 0x200000000000000) {
                    if (lVar19 < 0x80000000000000) {
                      if (lVar19 == 0x20000000000000) {
                        uVar14 = 0x2d;
                      }
                      else {
                        if (lVar19 != 0x40000000000000) break;
                        uVar14 = 0x2e;
                      }
                    }
                    else if (lVar19 == 0x80000000000000) {
                      uVar14 = 0x2f;
                    }
                    else {
                      if (lVar19 != 0x100000000000000) break;
                      uVar14 = 0x30;
                    }
                  }
                  else if (lVar19 < 0x800000000000000) {
                    if (lVar19 == 0x200000000000000) {
                      uVar14 = 0x31;
                    }
                    else {
                      if (lVar19 != 0x400000000000000) break;
                      uVar14 = 0x32;
                    }
                  }
                  else if (lVar19 == 0x800000000000000) {
                    uVar14 = 0x16;
                  }
                  else {
                    if (lVar19 != 0x1000000000000000) break;
                    uVar14 = 0x17;
                  }
                  if ((int)uVar22 <= iVar24) {
                    uVar25 = iVar24 + (iVar24 + 1) / 2 + 9U & 0xfffffff8;
                    if (uVar22 != uVar25) {
                      uVar22 = uVar25;
                      if ((int)uVar25 < 1) {
                        free(__ptr);
                        __ptr = (void *)0x0;
                      }
                      else {
                        __ptr = realloc(__ptr,(ulong)uVar25 << 2);
                      }
                    }
                  }
                  *(undefined4 *)((long)__ptr + (long)iVar24 * 4) = uVar14;
                  iVar24 = iVar24 + 1;
                  break;
                }
                bVar9 = bVar9 + 1;
                bVar26 = 1 < uVar12;
                uVar12 = uVar12 >> 1;
                uVar25 = uVar6;
              } while (bVar26);
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar18);
        }
        iVar13 = 0;
        if (param_1 != 0) {
          iVar13 = 0;
          do {
            iVar13 = iVar13 + ((uint)param_1 & 1);
            bVar26 = 1 < param_1;
            param_1 = param_1 >> 1;
          } while (bVar26);
        }
        if (iVar13 == iVar24) {
          *(void **)this = __ptr;
          *(uint *)(this + 8) = uVar22;
          *(int *)(this + 0xc) = iVar24;
          __ptr = (void *)0x0;
        }
        this[0x10] = (juce)(iVar13 == iVar24);
        free(__ptr);
        return;
      case 0x637:
        puVar7 = (undefined8 *)&DAT_00704b40;
        break;
      case 0x63b:
        puVar7 = (undefined8 *)&DAT_00704b28;
        break;
      case 0x63f:
        puVar7 = (undefined8 *)&DAT_00704b70;
        break;
      default:
        if (param_1 != 0x2d037) goto switchD_0019cc9d_caseD_f8;
        puVar7 = (undefined8 *)&DAT_00704bd0;
      }
    }
  }
  else if ((long)param_1 < 0x302d637) {
    if ((long)param_1 < 0x2d6ff) {
      if ((long)param_1 < 0x2d63f) {
        if (param_1 == 0x2d03f) {
          puVar7 = (undefined8 *)&DAT_00704bb8;
        }
        else {
          if (param_1 != 0x2d637) goto switchD_0019cc9d_caseD_f8;
          puVar7 = (undefined8 *)&DAT_00704c30;
        }
      }
      else if (param_1 == 0x2d63f) {
        puVar7 = (undefined8 *)&DAT_00704c18;
      }
      else {
        if (param_1 != 0x2d6f7) goto switchD_0019cc9d_caseD_f8;
        puVar7 = (undefined8 *)&DAT_00704cd8;
      }
    }
    else if ((long)param_1 < 0x3000637) {
      if (param_1 == 0x2d6ff) {
        puVar7 = (undefined8 *)&DAT_00704cf0;
      }
      else {
        if (param_1 != 0x80000) goto switchD_0019cc9d_caseD_f8;
        puVar7 = (undefined8 *)&DAT_00704a38;
      }
    }
    else if (param_1 == 0x3000637) {
      puVar7 = (undefined8 *)&DAT_00704c00;
    }
    else {
      if (param_1 != 0x300063f) goto switchD_0019cc9d_caseD_f8;
      puVar7 = (undefined8 *)&DAT_00704be8;
    }
  }
  else if ((long)param_1 < 0x180000000002d637) {
    if ((long)param_1 < 0x302d6f7) {
      if (param_1 == 0x302d637) {
        puVar7 = (undefined8 *)&DAT_00704c60;
      }
      else {
        if (param_1 != 0x302d63f) goto switchD_0019cc9d_caseD_f8;
        puVar7 = (undefined8 *)&DAT_00704c48;
      }
    }
    else if (param_1 == 0x302d6f7) {
      puVar7 = (undefined8 *)&DAT_00704d08;
    }
    else {
      if (param_1 != 0x302d6ff) goto switchD_0019cc9d_caseD_f8;
      puVar7 = (undefined8 *)&DAT_00704d20;
    }
  }
  else if ((long)param_1 < 0x180000000302d637) {
    if (param_1 == 0x180000000002d637) {
      puVar7 = (undefined8 *)&DAT_00704c78;
    }
    else {
      if (param_1 != 0x180000000002d63f) goto switchD_0019cc9d_caseD_f8;
      puVar7 = (undefined8 *)&DAT_00704c90;
    }
  }
  else if (param_1 == 0x180000000302d637) {
    puVar7 = (undefined8 *)&DAT_00704ca8;
  }
  else {
    if (param_1 != 0x180000000302d63f) goto switchD_0019cc9d_caseD_f8;
    puVar7 = (undefined8 *)&DAT_00704cc0;
  }
  puVar2 = (undefined4 *)puVar7[1];
  uVar12 = puVar7[2];
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  if ((int)uVar12 < 1) {
    if (uVar12 == 0) goto LAB_0019caf6;
    puVar8 = (undefined4 *)0x0;
  }
  else {
    uVar18 = (int)uVar12 + ((uint)(uVar12 >> 1) & 0x7fffffff) + 8 & 0xfffffff8;
    if ((int)uVar18 < 1) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = malloc((ulong)uVar18 << 2);
      *(undefined4 **)this = puVar8;
    }
    *(uint *)(this + 8) = uVar18;
  }
  uVar23 = uVar12 - 1 & 0x3fffffffffffffff;
  if ((uVar23 < 7) ||
     ((puVar8 < puVar2 + uVar12 + 0x4000000000000000 &&
      (puVar2 < puVar8 + uVar12 + 0x4000000000000000)))) {
    uVar11 = 0;
    puVar15 = puVar2;
LAB_0019cacd:
    do {
      puVar8[uVar11] = *puVar15;
      uVar11 = uVar11 + 1;
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar2 + uVar12);
  }
  else {
    uVar23 = uVar23 + 1;
    uVar11 = uVar23 & 0xfffffffffffffff8;
    uVar21 = (uVar11 - 8 >> 3) + 1;
    uVar20 = (ulong)((uint)uVar21 & 3);
    if (uVar11 - 8 < 0x18) {
      lVar19 = 0;
    }
    else {
      uVar21 = uVar21 & 0x3ffffffffffffffc;
      lVar19 = 0;
      do {
        uVar3 = *(undefined8 *)((long)(puVar2 + lVar19) + 8);
        uVar4 = *(undefined8 *)(puVar2 + lVar19 + 4);
        uVar5 = *(undefined8 *)((long)(puVar2 + lVar19 + 4) + 8);
        *(undefined8 *)(puVar8 + lVar19) = *(undefined8 *)(puVar2 + lVar19);
        *(undefined8 *)((long)(puVar8 + lVar19) + 8) = uVar3;
        *(undefined8 *)(puVar8 + lVar19 + 4) = uVar4;
        *(undefined8 *)((long)(puVar8 + lVar19 + 4) + 8) = uVar5;
        uVar3 = *(undefined8 *)((long)(puVar2 + lVar19 + 8) + 8);
        uVar4 = *(undefined8 *)(puVar2 + lVar19 + 0xc);
        uVar5 = *(undefined8 *)((long)(puVar2 + lVar19 + 0xc) + 8);
        *(undefined8 *)(puVar8 + lVar19 + 8) = *(undefined8 *)(puVar2 + lVar19 + 8);
        *(undefined8 *)((long)(puVar8 + lVar19 + 8) + 8) = uVar3;
        *(undefined8 *)(puVar8 + lVar19 + 0xc) = uVar4;
        *(undefined8 *)((long)(puVar8 + lVar19 + 0xc) + 8) = uVar5;
        uVar3 = *(undefined8 *)((long)(puVar2 + lVar19 + 0x10) + 8);
        uVar4 = *(undefined8 *)(puVar2 + lVar19 + 0x14);
        uVar5 = *(undefined8 *)((long)(puVar2 + lVar19 + 0x14) + 8);
        *(undefined8 *)(puVar8 + lVar19 + 0x10) = *(undefined8 *)(puVar2 + lVar19 + 0x10);
        *(undefined8 *)((long)(puVar8 + lVar19 + 0x10) + 8) = uVar3;
        *(undefined8 *)(puVar8 + lVar19 + 0x14) = uVar4;
        *(undefined8 *)((long)(puVar8 + lVar19 + 0x14) + 8) = uVar5;
        uVar3 = *(undefined8 *)((long)(puVar2 + lVar19 + 0x18) + 8);
        uVar4 = *(undefined8 *)(puVar2 + lVar19 + 0x1c);
        uVar5 = *(undefined8 *)((long)(puVar2 + lVar19 + 0x1c) + 8);
        *(undefined8 *)(puVar8 + lVar19 + 0x18) = *(undefined8 *)(puVar2 + lVar19 + 0x18);
        *(undefined8 *)((long)(puVar8 + lVar19 + 0x18) + 8) = uVar3;
        *(undefined8 *)(puVar8 + lVar19 + 0x1c) = uVar4;
        *(undefined8 *)((long)(puVar8 + lVar19 + 0x1c) + 8) = uVar5;
        lVar19 = lVar19 + 0x20;
        uVar21 = uVar21 - 4;
      } while (uVar21 != 0);
    }
    if (uVar20 != 0) {
      lVar16 = 0;
      do {
        puVar7 = (undefined8 *)((long)puVar2 + lVar16 + lVar19 * 4);
        uVar3 = puVar7[1];
        puVar1 = (undefined8 *)((long)puVar2 + lVar16 + lVar19 * 4 + 0x10);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        puVar1 = (undefined8 *)((long)puVar8 + lVar16 + lVar19 * 4);
        *puVar1 = *puVar7;
        puVar1[1] = uVar3;
        puVar7 = (undefined8 *)((long)puVar8 + lVar16 + lVar19 * 4 + 0x10);
        *puVar7 = uVar4;
        puVar7[1] = uVar5;
        lVar16 = lVar16 + 0x20;
      } while (uVar20 * 0x20 != lVar16);
    }
    if (uVar23 != uVar11) {
      puVar15 = puVar2 + uVar11;
      goto LAB_0019cacd;
    }
  }
  *(int *)(this + 0xc) = (int)uVar11;
LAB_0019caf6:
  this[0x10] = (juce)0x1;
  return;
}


