// Function : update
// Namespace: juce:XWindowSystemUtilities:XSettings
// Entry    : 002c35c0
// Prototype: undefined update(XSettings * this)
// Body     : 002c35c0 - 002c4b30


/* juce::XWindowSystemUtilities::XSettings::update() */

void __thiscall juce::XWindowSystemUtilities::XSettings::update(XSettings *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long *plVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long *plVar16;
  long *plVar17;
  XSettings *__s;
  long *plVar18;
  long *plVar19;
  byte bVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  long *plVar26;
  byte bVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  byte *pbVar31;
  uint uVar32;
  int *piVar33;
  byte *pbVar34;
  undefined8 *puVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined1 auVar39 [16];
  byte *local_100;
  int local_f8;
  int local_f4;
  char *local_f0;
  ulong local_e8;
  byte *local_e0;
  long local_d8;
  byte *local_d0;
  undefined8 local_c8;
  ulong local_c0;
  byte *local_b8;
  XSettings *local_b0;
  undefined4 local_a4;
  XSettings *local_a0;
  undefined1 local_98;
  char *local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_78;
  int local_70 [2];
  ulong local_68;
  undefined8 *local_60;
  XSettings *local_58;
  ulong local_50;
  undefined8 local_48;
  long local_40;
  int *local_38;
  
  uVar2 = *(undefined8 *)this;
  uVar3 = *(undefined8 *)(this + 8);
  uVar4 = *(undefined8 *)(this + 0x10);
  local_98 = 0;
  local_90 = (char *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_70[0] = -1;
  lVar13 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar11 = (**(code **)(lVar13 + 0x1b8))
                     (uVar2,uVar3,uVar4,0,0x7fffffffffffffff,0,uVar4,&local_78,local_70,&uStack_88,
                      &local_80,&local_90);
  local_98 = local_90 != (char *)0x0 && iVar11 == 0;
  if (local_90 != (char *)0x0 && iVar11 == 0) {
    if (((local_78 != *(ulong *)(this + 0x10)) || (local_70[0] != 8)) || (uStack_88 == 0))
    goto LAB_002c4afb;
    uVar12 = *(undefined4 *)(local_90 + 4);
    if (0xc < uStack_88) {
      local_100 = (byte *)(local_90 + 0xc);
      local_58 = this + 0x40;
      local_a0 = this + 0x50;
      local_b0 = this + 0x30;
      uVar32 = 0;
      uVar36 = 0xc;
      local_f0 = local_90;
      local_c0 = uStack_88;
      uVar14 = uStack_88;
      local_a4 = *(undefined4 *)(local_90 + 4);
      do {
        uVar29 = (ulong)(uVar32 & 0xffff);
        if (*(uint *)(local_f0 + 8) <= (uVar32 & 0xffff)) break;
        uVar37 = uVar36 + 4;
        if (uVar14 < uVar37) {
          pbVar34 = local_100 + 2;
          uVar37 = uVar36 + 2;
          uVar36 = 0;
        }
        else {
          uVar36 = (ulong)CONCAT11(local_100[(ulong)(*local_f0 != '\x01') + 2],
                                   local_100[(ulong)(*local_f0 == '\x01') + 2]);
          pbVar34 = local_100 + 4;
        }
        bVar20 = *local_100;
        uVar38 = (ulong)((int)uVar36 + 3U & 0xfffffffc);
        uVar14 = uVar38 + uVar37;
        local_50 = uVar29;
        if (local_c0 < uVar14) {
          local_b8 = &DAT_0061ac58;
          uVar36 = uVar37 + 4;
          local_100 = pbVar34;
          uVar14 = uVar37;
          if (local_c0 < uVar36) goto LAB_002c39f2;
LAB_002c37ce:
          if (*local_f0 == '\x01') {
            pbVar34 = local_100 + 2;
            pbVar31 = local_100 + 1;
            pbVar22 = local_100;
            pbVar24 = local_100 + 3;
          }
          else {
            pbVar34 = local_100 + 1;
            pbVar31 = local_100 + 2;
            pbVar22 = local_100 + 3;
            pbVar24 = local_100;
          }
          uVar32 = (uint)*pbVar22 << 0x18 |
                   (uint)*pbVar31 << 0x10 | (uint)*pbVar24 | (uint)*pbVar34 << 8;
          local_100 = local_100 + 4;
          if (bVar20 != 2) goto LAB_002c3a0c;
LAB_002c38a8:
          uVar14 = uVar36 + 2;
          if (local_c0 < uVar14) {
            bVar20 = 0;
            uVar29 = uVar36;
            uVar37 = uVar14;
            if (local_c0 < uVar14) goto LAB_002c3afd;
LAB_002c38c8:
            uVar21 = (uint)local_100[*local_f0 == '\x01'];
            local_100 = local_100 + 2;
            uVar36 = uVar29 + 2;
            uVar37 = uVar29 + 4;
            if (local_c0 < uVar37) goto LAB_002c3b08;
LAB_002c38f1:
            bVar27 = local_100[*local_f0 == '\x01'];
            local_100 = local_100 + 2;
            uVar14 = uVar36 + 2;
            uVar29 = uVar36 + 4;
            uVar36 = uVar14;
            if (local_c0 < uVar29) goto LAB_002c3b13;
LAB_002c391b:
            uVar28 = (uint)local_100[*local_f0 == '\x01'];
            local_100 = local_100 + 2;
            uVar36 = uVar36 + 2;
          }
          else {
            bVar20 = local_100[*local_f0 == '\x01'];
            local_100 = local_100 + 2;
            uVar37 = uVar36 + 4;
            uVar36 = uVar14;
            uVar29 = uVar14;
            if (uVar37 <= local_c0) goto LAB_002c38c8;
LAB_002c3afd:
            uVar21 = 0;
            if (uVar37 <= local_c0) goto LAB_002c38f1;
LAB_002c3b08:
            bVar27 = 0;
            if (uVar37 <= local_c0) goto LAB_002c391b;
LAB_002c3b13:
            uVar28 = 0;
          }
          pbVar34 = local_b8 + -0x10;
          if (pbVar34 != (byte *)&emptyString) {
            LOCK();
            *(int *)pbVar34 = *(int *)pbVar34 + 1;
            UNLOCK();
          }
          local_d8 = -0xfffffffe;
          local_d0 = &DAT_0061ac58;
          local_c8 = CONCAT44(local_c8._4_4_,
                              (uint)bVar27 | uVar21 << 8 | (uint)bVar20 << 0x10 | uVar28 << 0x18);
          pbVar34 = local_b8;
          local_e0 = local_b8;
          if ((int)uVar32 <= *(int *)(this + 0x18)) goto LAB_002c4a30;
LAB_002c3e60:
          pbVar31 = local_e0;
          bVar20 = *local_e0;
          uVar14 = 0;
          if (bVar20 != 0) {
            pbVar34 = local_e0;
            do {
              pbVar22 = pbVar34 + 1;
              uVar32 = (uint)bVar20;
              if ((char)bVar20 < '\0') {
                if ((bVar20 & 0x40) == 0) {
                  uVar32 = uVar32 & 0x7f;
                  goto LAB_002c3ea7;
                }
                if ((bVar20 & 0x20) == 0) {
                  uVar21 = 0x3f;
                  lVar13 = 0;
                  bVar9 = false;
                  bVar10 = false;
                }
                else {
                  bVar9 = true;
                  if ((bVar20 & 0x10) == 0) {
                    uVar21 = 0x1f;
                    lVar13 = 1;
                    bVar10 = false;
                  }
                  else {
                    uVar21 = 0xf;
                    lVar13 = 2;
                    bVar10 = true;
                  }
                }
                uVar32 = uVar21 & uVar32;
                bVar20 = pbVar34[1];
                if ((bVar20 & 0xc0) == 0x80) {
                  pbVar24 = pbVar34 + lVar13 + 2;
                  uVar32 = bVar20 & 0x3f | uVar32 << 6;
                  pbVar22 = pbVar24;
                  if (bVar9) {
                    pbVar22 = pbVar34 + 2;
                    bVar20 = *pbVar22;
                    if ((bVar20 & 0xc0) != 0x80) goto LAB_002c3eac;
                    uVar32 = bVar20 & 0x3f | uVar32 << 6;
                    pbVar22 = pbVar24;
                    if (bVar10) {
                      pbVar22 = pbVar34 + 3;
                      bVar20 = *pbVar22;
                      if ((bVar20 & 0xc0) != 0x80) goto LAB_002c3eac;
                      uVar32 = uVar32 << 6 | bVar20 & 0x3f;
                      pbVar22 = pbVar24;
                    }
                  }
                  goto LAB_002c3ea7;
                }
              }
              else {
LAB_002c3ea7:
                bVar20 = *pbVar22;
              }
LAB_002c3eac:
              uVar14 = uVar14 * 0x65 + (ulong)uVar32;
              pbVar34 = pbVar22;
            } while (bVar20 != 0);
          }
          uVar29 = *(ulong *)(this + 0x28);
          if ((uVar14 | uVar29) >> 0x20 == 0) {
            uVar37 = (uVar14 & 0xffffffff) % (uVar29 & 0xffffffff);
            puVar25 = *(undefined8 **)(*(long *)(this + 0x20) + uVar37 * 8);
          }
          else {
            uVar37 = uVar14 % uVar29;
            puVar25 = *(undefined8 **)(*(long *)(this + 0x20) + uVar37 * 8);
          }
          local_e8 = uVar36;
          if (puVar25 != (undefined8 *)0x0) {
            puVar35 = (undefined8 *)*puVar25;
            do {
              if ((pbVar31 == (byte *)puVar35[1]) ||
                 (uVar32 = CharacterFunctions::
                           compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                     (pbVar31,(byte *)puVar35[1]), uVar32 == 0)) {
                if ((puVar25 != (undefined8 *)0x0) &&
                   (plVar16 = (long *)*puVar25, plVar16 != (long *)0x0)) goto LAB_002c45c5;
                break;
              }
              puVar5 = (undefined8 *)*puVar35;
              if (puVar5 == (undefined8 *)0x0) break;
              bVar20 = *(byte *)puVar5[1];
              uVar36 = 0;
              pbVar34 = (byte *)puVar5[1];
              while (bVar20 != 0) {
                pbVar22 = pbVar34 + 1;
                uVar32 = (uint)bVar20;
                if ((char)bVar20 < '\0') {
                  if ((bVar20 & 0x40) == 0) {
                    uVar32 = uVar32 & 0x7f;
                    goto LAB_002c4045;
                  }
                  if ((bVar20 & 0x20) == 0) {
                    uVar21 = 0x3f;
                    lVar13 = 0;
                    bVar9 = false;
                    bVar10 = false;
                  }
                  else {
                    bVar9 = true;
                    if ((bVar20 & 0x10) == 0) {
                      uVar21 = 0x1f;
                      lVar13 = 1;
                      bVar10 = false;
                    }
                    else {
                      uVar21 = 0xf;
                      lVar13 = 2;
                      bVar10 = true;
                    }
                  }
                  uVar32 = uVar21 & uVar32;
                  bVar20 = pbVar34[1];
                  if ((bVar20 & 0xc0) == 0x80) {
                    pbVar24 = pbVar34 + lVar13 + 2;
                    uVar32 = bVar20 & 0x3f | uVar32 << 6;
                    pbVar22 = pbVar24;
                    if (bVar9) {
                      pbVar22 = pbVar34 + 2;
                      bVar20 = *pbVar22;
                      if ((bVar20 & 0xffffffc0) != 0x80) goto LAB_002c404a;
                      uVar32 = bVar20 & 0x3f | uVar32 << 6;
                      pbVar22 = pbVar24;
                      if (bVar10) {
                        pbVar22 = pbVar34 + 3;
                        bVar20 = *pbVar22;
                        if ((bVar20 & 0xc0) != 0x80) goto LAB_002c404a;
                        uVar32 = uVar32 << 6 | bVar20 & 0x3f;
                        pbVar22 = pbVar24;
                      }
                    }
                    goto LAB_002c4045;
                  }
                }
                else {
LAB_002c4045:
                  bVar20 = *pbVar22;
                }
LAB_002c404a:
                uVar36 = uVar36 * 0x65 + (ulong)uVar32;
                pbVar34 = pbVar22;
              }
              if ((uVar36 | uVar29) >> 0x20 == 0) {
                uVar36 = (uVar36 & 0xffffffff) % (uVar29 & 0xffffffff);
              }
              else {
                uVar36 = uVar36 % uVar29;
              }
              puVar25 = puVar35;
              puVar35 = puVar5;
            } while (uVar36 == uVar37);
          }
                    /* try { // try from 002c4160 to 002c416c has its CatchHandler @ 002c4b84 */
          plVar16 = operator_new(0x30);
          *plVar16 = 0;
          plVar16[1] = (long)local_e0;
          pbVar34 = local_e0 + -0x10;
          if (pbVar34 != (byte *)&emptyString) {
            LOCK();
            *(int *)pbVar34 = *(int *)pbVar34 + 1;
            UNLOCK();
          }
          plVar16[5] = 0;
          plVar16[2] = (long)&DAT_0061ac58;
          plVar16[3] = -0xfffffffd;
          plVar16[4] = (long)&DAT_0061ac58;
                    /* try { // try from 002c41cf to 002c41e0 has its CatchHandler @ 002c4b72 */
          auVar39 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                              ((ulong)local_58,*(ulong *)(this + 0x28),*(ulong *)(this + 0x38));
          uVar36 = auVar39._8_8_;
          if ((auVar39._0_8_ & 1) == 0) {
            __s = *(XSettings **)(this + 0x20);
            plVar17 = *(long **)(__s + uVar37 * 8);
            if (plVar17 == (long *)0x0) goto LAB_002c446c;
LAB_002c4200:
            *plVar16 = *plVar17;
            **(undefined8 **)(__s + uVar37 * 8) = plVar16;
          }
          else {
            if (uVar36 == 1) {
              *(undefined8 *)local_a0 = 0;
              __s = local_a0;
            }
            else {
              auVar39._8_8_ = 0;
              auVar39._0_8_ = uVar36;
              if (SUB168(auVar39 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002c4b20 to 002c4b24 has its CatchHandler @ 002c4b40 */
                std::__throw_bad_array_new_length();
              }
                    /* try { // try from 002c423e to 002c4245 has its CatchHandler @ 002c4b42 */
              __s = operator_new(SUB168(auVar39 * ZEXT816(8),0));
              memset(__s,0,uVar36 * 8);
            }
            plVar17 = *(long **)(this + 0x30);
            *(undefined8 *)(this + 0x30) = 0;
            if (plVar17 != (long *)0x0) {
              uVar29 = 0;
              do {
                pbVar34 = (byte *)plVar17[1];
                bVar20 = *pbVar34;
                uVar37 = 0;
                while (bVar20 != 0) {
                  pbVar31 = pbVar34 + 1;
                  uVar32 = (uint)bVar20;
                  if ((char)bVar20 < '\0') {
                    if ((bVar20 & 0x40) == 0) {
                      uVar32 = uVar32 & 0x7f;
                      goto LAB_002c42be;
                    }
                    if ((bVar20 & 0x20) == 0) {
                      uVar21 = 0x3f;
                      lVar13 = 0;
                      bVar9 = false;
                      bVar10 = false;
                    }
                    else {
                      bVar9 = true;
                      if ((bVar20 & 0x10) == 0) {
                        uVar21 = 0x1f;
                        lVar13 = 1;
                        bVar10 = false;
                      }
                      else {
                        uVar21 = 0xf;
                        lVar13 = 2;
                        bVar10 = true;
                      }
                    }
                    uVar32 = uVar21 & uVar32;
                    bVar20 = pbVar34[1];
                    if ((bVar20 & 0xc0) == 0x80) {
                      pbVar22 = pbVar34 + lVar13 + 2;
                      uVar32 = bVar20 & 0x3f | uVar32 << 6;
                      pbVar31 = pbVar22;
                      if (!bVar9) goto LAB_002c42be;
                      pbVar31 = pbVar34 + 2;
                      bVar20 = *pbVar31;
                      if ((bVar20 & 0xc0) == 0x80) {
                        uVar32 = bVar20 & 0x3f | uVar32 << 6;
                        pbVar31 = pbVar22;
                        if (bVar10) {
                          pbVar31 = pbVar34 + 3;
                          bVar20 = *pbVar31;
                          if ((bVar20 & 0xffffffc0) != 0x80) goto LAB_002c42c1;
                          uVar32 = uVar32 << 6 | bVar20 & 0x3f;
                          pbVar31 = pbVar22;
                        }
                        goto LAB_002c42be;
                      }
                      goto LAB_002c42c1;
                    }
                  }
                  else {
LAB_002c42be:
                    bVar20 = *pbVar31;
LAB_002c42c1:
                  }
                  pbVar34 = pbVar31;
                  uVar37 = uVar37 * 0x65 + (ulong)uVar32;
                }
                plVar6 = (long *)*plVar17;
                if ((uVar37 | uVar36) >> 0x20 == 0) {
                  uVar37 = (uVar37 & 0xffffffff) % (uVar36 & 0xffffffff);
                  plVar18 = *(long **)(__s + uVar37 * 8);
                  if (plVar18 == (long *)0x0) goto LAB_002c43e5;
LAB_002c4292:
                  *plVar17 = *plVar18;
                  **(undefined8 **)(__s + uVar37 * 8) = plVar17;
                  uVar37 = uVar29;
                }
                else {
                  uVar37 = uVar37 % uVar36;
                  plVar18 = *(long **)(__s + uVar37 * 8);
                  if (plVar18 != (long *)0x0) goto LAB_002c4292;
LAB_002c43e5:
                  *plVar17 = *(long *)local_b0;
                  *(long **)local_b0 = plVar17;
                  *(XSettings **)(__s + uVar37 * 8) = local_b0;
                  if (*plVar17 != 0) {
                    *(long **)(__s + uVar29 * 8) = plVar17;
                  }
                }
                plVar17 = plVar6;
                uVar29 = uVar37;
              } while (plVar6 != (long *)0x0);
            }
            if (local_a0 != *(XSettings **)(this + 0x20)) {
              operator_delete(*(XSettings **)(this + 0x20));
            }
            *(ulong *)(this + 0x28) = uVar36;
            *(XSettings **)(this + 0x20) = __s;
            if ((uVar14 | uVar36) >> 0x20 == 0) {
              uVar37 = (uVar14 & 0xffffffff) % (uVar36 & 0xffffffff);
            }
            else {
              uVar37 = uVar14 % uVar36;
            }
            plVar17 = *(long **)(__s + uVar37 * 8);
            if (plVar17 != (long *)0x0) goto LAB_002c4200;
LAB_002c446c:
            lVar13 = *(long *)local_b0;
            *plVar16 = lVar13;
            *(long **)local_b0 = plVar16;
            if (lVar13 != 0) {
              bVar20 = **(byte **)(lVar13 + 8);
              uVar36 = 0;
              pbVar34 = *(byte **)(lVar13 + 8);
              while (bVar20 != 0) {
                pbVar31 = pbVar34 + 1;
                uVar32 = (uint)bVar20;
                if ((char)bVar20 < '\0') {
                  if ((bVar20 & 0x40) == 0) {
                    uVar32 = uVar32 & 0x7f;
                    goto LAB_002c4493;
                  }
                  if ((bVar20 & 0x20) == 0) {
                    uVar21 = 0x3f;
                    lVar13 = 0;
                    bVar9 = false;
                    bVar10 = false;
                  }
                  else {
                    bVar9 = true;
                    if ((bVar20 & 0x10) == 0) {
                      uVar21 = 0x1f;
                      lVar13 = 1;
                      bVar10 = false;
                    }
                    else {
                      uVar21 = 0xf;
                      lVar13 = 2;
                      bVar10 = true;
                    }
                  }
                  uVar32 = uVar21 & uVar32;
                  bVar20 = pbVar34[1];
                  if ((bVar20 & 0xc0) == 0x80) {
                    pbVar22 = pbVar34 + lVar13 + 2;
                    uVar32 = bVar20 & 0x3f | uVar32 << 6;
                    pbVar31 = pbVar22;
                    if (bVar9) {
                      pbVar31 = pbVar34 + 2;
                      bVar20 = *pbVar31;
                      if ((bVar20 & 0xffffffc0) != 0x80) goto LAB_002c4498;
                      uVar32 = bVar20 & 0x3f | uVar32 << 6;
                      pbVar31 = pbVar22;
                      if (bVar10) {
                        pbVar31 = pbVar34 + 3;
                        bVar20 = *pbVar31;
                        if ((bVar20 & 0xc0) != 0x80) goto LAB_002c4498;
                        uVar32 = uVar32 << 6 | bVar20 & 0x3f;
                        pbVar31 = pbVar22;
                      }
                    }
                    goto LAB_002c4493;
                  }
                }
                else {
LAB_002c4493:
                  bVar20 = *pbVar31;
                }
LAB_002c4498:
                uVar36 = uVar36 * 0x65 + (ulong)uVar32;
                pbVar34 = pbVar31;
              }
              uVar14 = *(ulong *)(this + 0x28);
              if ((uVar36 | uVar14) >> 0x20 == 0) {
                uVar36 = (uVar36 & 0xffffffff) % (uVar14 & 0xffffffff);
              }
              else {
                uVar36 = uVar36 % uVar14;
              }
              *(long **)(__s + uVar36 * 8) = plVar16;
              __s = *(XSettings **)(this + 0x20);
            }
            *(XSettings **)(__s + uVar37 * 8) = local_b0;
          }
          *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
          pbVar31 = local_e0;
LAB_002c45c5:
          pbVar34 = local_b8;
          pbVar22 = pbVar31 + -0x10;
          if (pbVar22 != (byte *)&emptyString) {
            LOCK();
            *(int *)pbVar22 = *(int *)pbVar22 + 1;
            UNLOCK();
            pbVar31 = local_e0;
          }
          LOCK();
          lVar13 = plVar16[2];
          plVar16[2] = (long)pbVar31;
          UNLOCK();
          piVar33 = (int *)(lVar13 + -0x10);
          if (piVar33 != &emptyString) {
            LOCK();
            iVar11 = *piVar33;
            *piVar33 = *piVar33 + -1;
            UNLOCK();
            if (iVar11 == 0) {
              operator_delete__(piVar33);
            }
          }
          uVar36 = local_e8;
          plVar16[3] = local_d8;
          pbVar31 = local_d0 + -0x10;
          if (pbVar31 != (byte *)&emptyString) {
            LOCK();
            *(int *)pbVar31 = *(int *)pbVar31 + 1;
            UNLOCK();
          }
          LOCK();
          lVar13 = plVar16[4];
          plVar16[4] = (long)local_d0;
          UNLOCK();
          piVar33 = (int *)(lVar13 + -0x10);
          if (piVar33 != &emptyString) {
            LOCK();
            iVar11 = *piVar33;
            *piVar33 = *piVar33 + -1;
            UNLOCK();
            if (iVar11 == 0) {
              operator_delete__(piVar33);
            }
          }
          *(undefined4 *)(plVar16 + 5) = (undefined4)local_c8;
          if (*(int *)(this + 0x78) == 2) {
            plVar16 = *(long **)(this + 0x58);
            this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x60);
            if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              if (*PTR___libc_single_threaded_00715c50 == '\0') {
                LOCK();
                *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
                UNLOCK();
              }
              else {
                *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
              }
            }
            local_f8 = 0;
            local_f4 = *(int *)((long)plVar16 + 0xc);
            puVar25 = *(undefined8 **)(this + 0x68);
            plVar17 = (long *)puVar25[1];
            if (plVar17 == (long *)puVar25[2]) {
              plVar6 = (long *)*puVar25;
              lVar13 = (long)plVar17 - (long)plVar6;
              local_60 = puVar25;
              if (lVar13 == 0x7ffffffffffffff8) {
                    /* try { // try from 002c4b25 to 002c4b30 has its CatchHandler @ 002c4b3b */
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar14 = lVar13 >> 3;
              uVar36 = uVar14;
              if (lVar13 == 0) {
                uVar36 = 1;
              }
              local_68 = uVar36 + uVar14;
              if (0xfffffffffffffff < local_68) {
                local_68 = 0xfffffffffffffff;
              }
              if (CARRY8(uVar36,uVar14)) {
                local_68 = 0xfffffffffffffff;
              }
              if (local_68 == 0) {
                plVar18 = (long *)0x0;
                *(int **)(uVar14 * 8) = &local_f8;
                if (0 < lVar13) goto LAB_002c477c;
LAB_002c47de:
                plVar26 = plVar18 + uVar14;
              }
              else {
                    /* try { // try from 002c4765 to 002c4769 has its CatchHandler @ 002c4b31 */
                plVar18 = operator_new(local_68 * 8);
                plVar18[uVar14] = (long)&local_f8;
                if (lVar13 < 1) goto LAB_002c47de;
LAB_002c477c:
                plVar26 = plVar18;
                if (plVar6 != plVar17) {
                  plVar19 = plVar6;
                  if (0x17 < lVar13 - 8U) {
                    uVar37 = (lVar13 - 8U >> 3) + 1;
                    uVar36 = uVar37 & 0xfffffffffffffffc;
                    uVar29 = (uVar36 - 4 >> 2) + 1;
                    uVar14 = (ulong)((uint)uVar29 & 3);
                    if (uVar36 - 4 < 0xc) {
                      lVar13 = 0;
                    }
                    else {
                      uVar29 = uVar29 & 0x7ffffffffffffffc;
                      lVar13 = 0;
                      do {
                        lVar30 = (plVar6 + lVar13)[1];
                        lVar7 = plVar6[lVar13 + 2];
                        lVar8 = (plVar6 + lVar13 + 2)[1];
                        plVar18[lVar13] = plVar6[lVar13];
                        (plVar18 + lVar13)[1] = lVar30;
                        plVar18[lVar13 + 2] = lVar7;
                        (plVar18 + lVar13 + 2)[1] = lVar8;
                        lVar30 = (plVar6 + lVar13 + 4)[1];
                        lVar7 = plVar6[lVar13 + 6];
                        lVar8 = (plVar6 + lVar13 + 6)[1];
                        plVar18[lVar13 + 4] = plVar6[lVar13 + 4];
                        (plVar18 + lVar13 + 4)[1] = lVar30;
                        plVar18[lVar13 + 6] = lVar7;
                        (plVar18 + lVar13 + 6)[1] = lVar8;
                        lVar30 = (plVar6 + lVar13 + 8)[1];
                        lVar7 = plVar6[lVar13 + 10];
                        lVar8 = (plVar6 + lVar13 + 10)[1];
                        plVar18[lVar13 + 8] = plVar6[lVar13 + 8];
                        (plVar18 + lVar13 + 8)[1] = lVar30;
                        plVar18[lVar13 + 10] = lVar7;
                        (plVar18 + lVar13 + 10)[1] = lVar8;
                        lVar30 = (plVar6 + lVar13 + 0xc)[1];
                        lVar7 = plVar6[lVar13 + 0xe];
                        lVar8 = (plVar6 + lVar13 + 0xe)[1];
                        plVar18[lVar13 + 0xc] = plVar6[lVar13 + 0xc];
                        (plVar18 + lVar13 + 0xc)[1] = lVar30;
                        plVar18[lVar13 + 0xe] = lVar7;
                        (plVar18 + lVar13 + 0xe)[1] = lVar8;
                        lVar13 = lVar13 + 0x10;
                        uVar29 = uVar29 - 4;
                      } while (uVar29 != 0);
                    }
                    if (uVar14 != 0) {
                      lVar30 = 0;
                      do {
                        puVar35 = (undefined8 *)((long)plVar6 + lVar30 + lVar13 * 8);
                        uVar2 = puVar35[1];
                        puVar25 = (undefined8 *)((long)plVar6 + lVar30 + lVar13 * 8 + 0x10);
                        uVar3 = *puVar25;
                        uVar4 = puVar25[1];
                        puVar25 = (undefined8 *)((long)plVar18 + lVar30 + lVar13 * 8);
                        *puVar25 = *puVar35;
                        puVar25[1] = uVar2;
                        puVar25 = (undefined8 *)((long)plVar18 + lVar30 + lVar13 * 8 + 0x10);
                        *puVar25 = uVar3;
                        puVar25[1] = uVar4;
                        lVar30 = lVar30 + 0x20;
                      } while (uVar14 * 0x20 != lVar30);
                    }
                    plVar26 = plVar18 + uVar36;
                    if (uVar37 == uVar36) goto LAB_002c48e3;
                    plVar19 = plVar6 + uVar36;
                  }
                  do {
                    *plVar26 = *plVar19;
                    plVar19 = plVar19 + 1;
                    plVar26 = plVar26 + 1;
                  } while (plVar19 != plVar17);
                }
              }
LAB_002c48e3:
              if (plVar6 != (long *)0x0) {
                operator_delete(plVar6);
              }
              *local_60 = plVar18;
              local_60[1] = plVar26 + 1;
              local_60[2] = plVar18 + local_68;
              local_48 = *(undefined8 *)(this + 0x68);
              local_40 = *(long *)(this + 0x70);
              uVar36 = local_e8;
              pbVar34 = local_b8;
            }
            else {
              *plVar17 = (long)&local_f8;
              puVar25[1] = puVar25[1] + 8;
              local_48 = *(undefined8 *)(this + 0x68);
              local_40 = *(long *)(this + 0x70);
            }
            if (local_40 != 0) {
              if (*PTR___libc_single_threaded_00715c50 == '\0') {
                LOCK();
                *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
                UNLOCK();
              }
              else {
                *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
              }
            }
            local_38 = &local_f8;
            iVar11 = local_f4;
            for (; local_f8 < iVar11; local_f8 = local_f8 + 1) {
              plVar17 = *(long **)(*plVar16 + (long)local_f8 * 8);
              if (plVar17 != (long *)0x0) {
                    /* try { // try from 002c49b6 to 002c49bd has its CatchHandler @ 002c4b94 */
                (**(code **)(*plVar17 + 0x10))(plVar17,&local_e0);
                iVar11 = local_f4;
              }
            }
            ScopeGuard<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::XWindowSystemUtilities::XSettings::update()::$_14,juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::XWindowSystemUtilities::XSettings::Listener*,juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::XWindowSystemUtilities::XSettings::update()::$_14&&)::{lambda()#1}>
            ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::XWindowSystemUtilities::XSettings::update()::__14,juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::XWindowSystemUtilities::XSettings::Listener*,juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::XWindowSystemUtilities::XSettings::update()::__14&&)::_lambda()_1_>
                           *)&local_48);
            if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              if (*(long *)(this_00 + 8) == 0x100000001) {
                *(undefined8 *)(this_00 + 8) = 0;
                (**(code **)(*(long *)this_00 + 0x10))(this_00);
                (**(code **)(*(long *)this_00 + 0x18))(this_00);
              }
              else {
                if (*PTR___libc_single_threaded_00715c50 == '\0') {
                  LOCK();
                  p_Var1 = this_00 + 8;
                  iVar11 = *(int *)p_Var1;
                  *(int *)p_Var1 = *(int *)p_Var1 + -1;
                  UNLOCK();
                }
                else {
                  iVar11 = (int)*(long *)(this_00 + 8);
                  *(int *)(this_00 + 8) = iVar11 + -1;
                }
                if (iVar11 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            (this_00);
                }
              }
            }
          }
        }
        else {
          pbVar31 = &DAT_0061ac58;
          if (uVar36 != 0) {
            bVar27 = *pbVar34;
            pbVar31 = &DAT_0061ac58;
            if (bVar27 != 0) {
              lVar13 = 1;
              uVar29 = 0;
              do {
                lVar30 = lVar13 + (ulong)(bVar27 >> 7);
                lVar13 = lVar30 + 1;
                if (uVar36 - 1 == uVar29) {
                  uVar29 = uVar36;
                  break;
                }
                bVar27 = pbVar34[uVar29 + 1];
                uVar29 = uVar29 + 1;
              } while (bVar27 != 0);
              uVar36 = lVar30 + 4U & 0xfffffffffffffffc;
                    /* try { // try from 002c394a to 002c394e has its CatchHandler @ 002c4b58 */
              puVar15 = operator_new__(uVar36 + 0x17);
              LOCK();
              *puVar15 = 0;
              UNLOCK();
              *(ulong *)(puVar15 + 2) = uVar36;
              pbVar31 = (byte *)(puVar15 + 4);
              pbVar22 = pbVar31;
              if (0 < (int)uVar29) {
                uVar32 = (int)uVar29 + 2;
                pbVar24 = pbVar34;
                do {
                  while( true ) {
                    bVar27 = *pbVar24;
                    pbVar24 = pbVar24 + 1;
                    if (bVar27 == 0) goto LAB_002c39b0;
                    if ((char)bVar27 < '\0') break;
                    *pbVar22 = bVar27;
                    pbVar22 = pbVar22 + 1;
                    uVar32 = uVar32 - 1;
                    if (uVar32 < 3) goto LAB_002c39b0;
                  }
                  *pbVar22 = bVar27 >> 6 | 0xc0;
                  pbVar22[1] = bVar27 & 0x3f | 0x80;
                  pbVar22 = pbVar22 + 2;
                  uVar32 = uVar32 - 1;
                } while (2 < uVar32);
              }
LAB_002c39b0:
              *pbVar22 = 0;
            }
          }
          local_100 = pbVar34 + uVar38;
          pbVar34 = pbVar31 + -0x10;
          local_b8 = pbVar31;
          if (pbVar34 != (byte *)&emptyString) {
            LOCK();
            *(int *)pbVar34 = *(int *)pbVar34 + 1;
            UNLOCK();
            LOCK();
            iVar11 = *(int *)pbVar34;
            *(int *)pbVar34 = *(int *)pbVar34 + -1;
            UNLOCK();
            if (iVar11 == 0) {
              operator_delete__(pbVar34);
              uVar36 = uVar14 + 4;
              if (local_c0 < uVar36) goto LAB_002c39f2;
              goto LAB_002c37ce;
            }
          }
          uVar36 = uVar14 + 4;
          if (uVar36 <= local_c0) goto LAB_002c37ce;
LAB_002c39f2:
          uVar36 = uVar14;
          uVar32 = 0;
          if (bVar20 == 2) goto LAB_002c38a8;
LAB_002c3a0c:
          pbVar34 = local_b8;
          if (bVar20 == 1) {
            uVar14 = uVar36 + 4;
            if (local_c0 < uVar14) {
              uVar29 = 0;
              uVar14 = uVar36;
            }
            else {
              if (*local_f0 == '\x01') {
                pbVar31 = local_100 + 2;
                pbVar22 = local_100 + 1;
                pbVar24 = local_100;
                pbVar23 = local_100 + 3;
              }
              else {
                pbVar31 = local_100 + 1;
                pbVar22 = local_100 + 2;
                pbVar24 = local_100 + 3;
                pbVar23 = local_100;
              }
              uVar29 = (ulong)*pbVar24 << 0x18 |
                       (ulong)*pbVar22 << 0x10 | (ulong)*pbVar23 | (ulong)*pbVar31 << 8;
              local_100 = local_100 + 4;
            }
            uVar36 = uVar29 + 3 & 0xfffffffffffffffc;
            local_e8 = uVar36 + uVar14;
            if (local_c0 < local_e8) {
              pbVar31 = &DAT_0061ac58;
              local_e8 = uVar14;
            }
            else {
              pbVar31 = &DAT_0061ac58;
              if (uVar29 != 0) {
                bVar20 = *local_100;
                pbVar31 = &DAT_0061ac58;
                if (bVar20 != 0) {
                  lVar13 = 1;
                  uVar14 = 0;
                  do {
                    lVar30 = lVar13 + (ulong)(bVar20 >> 7);
                    lVar13 = lVar30 + 1;
                    if (uVar29 - 1 == uVar14) {
                      uVar14 = uVar29;
                      break;
                    }
                    bVar20 = local_100[uVar14 + 1];
                    uVar14 = uVar14 + 1;
                  } while (bVar20 != 0);
                  uVar29 = lVar30 + 4U & 0xfffffffffffffffc;
                    /* try { // try from 002c3d09 to 002c3d0d has its CatchHandler @ 002c4b33 */
                  puVar15 = operator_new__(uVar29 + 0x17);
                  LOCK();
                  *puVar15 = 0;
                  UNLOCK();
                  *(ulong *)(puVar15 + 2) = uVar29;
                  pbVar31 = (byte *)(puVar15 + 4);
                  pbVar22 = pbVar31;
                  if (0 < (int)uVar14) {
                    uVar21 = (int)uVar14 + 2;
                    pbVar24 = local_100;
                    do {
                      while( true ) {
                        bVar20 = *pbVar24;
                        pbVar24 = pbVar24 + 1;
                        if (bVar20 == 0) goto LAB_002c3d7e;
                        if ((char)bVar20 < '\0') break;
                        *pbVar22 = bVar20;
                        pbVar22 = pbVar22 + 1;
                        uVar21 = uVar21 - 1;
                        if (uVar21 < 3) goto LAB_002c3d7e;
                      }
                      *pbVar22 = bVar20 >> 6 | 0xc0;
                      pbVar22[1] = bVar20 & 0x3f | 0x80;
                      pbVar22 = pbVar22 + 2;
                      uVar21 = uVar21 - 1;
                    } while (2 < uVar21);
                  }
LAB_002c3d7e:
                  *pbVar22 = 0;
                }
              }
              local_100 = local_100 + uVar36;
              pbVar22 = pbVar31 + -0x10;
              if (pbVar22 != (byte *)&emptyString) {
                LOCK();
                *(int *)pbVar22 = *(int *)pbVar22 + 1;
                UNLOCK();
                LOCK();
                iVar11 = *(int *)pbVar22;
                *(int *)pbVar22 = *(int *)pbVar22 + -1;
                UNLOCK();
                if (iVar11 == 0) {
                  operator_delete__(pbVar22);
                }
              }
            }
            pbVar22 = pbVar34 + -0x10;
            if (pbVar22 != (byte *)&emptyString) {
              LOCK();
              *(int *)pbVar22 = *(int *)pbVar22 + 1;
              UNLOCK();
            }
            local_d8 = -0xffffffff;
            pbVar22 = pbVar31 + -0x10;
            local_d0 = pbVar31;
            if (pbVar22 == (byte *)&emptyString) {
              local_c8 = (ulong)local_c8._4_4_ << 0x20;
              iVar11 = *(int *)(this + 0x18);
              uVar36 = local_e8;
              local_e0 = pbVar34;
              goto joined_r0x002c3aa3;
            }
            LOCK();
            *(int *)pbVar22 = *(int *)pbVar22 + 1;
            UNLOCK();
            local_c8 = (ulong)local_c8._4_4_ << 0x20;
            LOCK();
            iVar11 = *(int *)pbVar22;
            *(int *)pbVar22 = *(int *)pbVar22 + -1;
            UNLOCK();
            local_e0 = pbVar34;
            if (iVar11 == 0) {
              operator_delete__(pbVar22);
            }
            uVar36 = local_e8;
            if (*(int *)(this + 0x18) < (int)uVar32) goto LAB_002c3e60;
          }
          else {
            if (bVar20 == 0) {
              uVar21 = 0;
              if (uVar36 + 4 <= local_c0) {
                if (*local_f0 == '\x01') {
                  pbVar31 = local_100 + 2;
                  pbVar22 = local_100 + 1;
                  pbVar24 = local_100;
                  pbVar23 = local_100 + 3;
                }
                else {
                  pbVar31 = local_100 + 1;
                  pbVar22 = local_100 + 2;
                  pbVar24 = local_100 + 3;
                  pbVar23 = local_100;
                }
                uVar21 = (uint)*pbVar24 << 0x18 |
                         (uint)*pbVar22 << 0x10 | (uint)*pbVar23 | (uint)*pbVar31 << 8;
                local_100 = local_100 + 4;
                uVar36 = uVar36 + 4;
              }
              if (local_b8 != &DAT_0061ac58) {
                LOCK();
                *(int *)(local_b8 + -0x10) = *(int *)(local_b8 + -0x10) + 1;
                UNLOCK();
              }
              local_d8 = (ulong)uVar21 << 0x20;
              local_d0 = &DAT_0061ac58;
              local_c8 = local_c8 & 0xffffffff00000000;
              iVar11 = *(int *)(this + 0x18);
              local_e0 = pbVar34;
            }
            else {
              local_c8 = 0;
              local_e0 = &DAT_0061ac58;
              local_d8 = -0xfffffffd;
              local_d0 = &DAT_0061ac58;
              iVar11 = *(int *)(this + 0x18);
            }
joined_r0x002c3aa3:
            if (iVar11 < (int)uVar32) goto LAB_002c3e60;
          }
        }
LAB_002c4a30:
        uVar14 = local_c0;
        pbVar31 = local_d0 + -0x10;
        if (pbVar31 != (byte *)&emptyString) {
          LOCK();
          iVar11 = *(int *)pbVar31;
          *(int *)pbVar31 = *(int *)pbVar31 + -1;
          UNLOCK();
          if (iVar11 == 0) {
            operator_delete__(pbVar31);
          }
        }
        pbVar31 = local_e0 + -0x10;
        if (pbVar31 != (byte *)&emptyString) {
          LOCK();
          iVar11 = *(int *)pbVar31;
          *(int *)pbVar31 = *(int *)pbVar31 + -1;
          UNLOCK();
          if (iVar11 == 0) {
            operator_delete__(pbVar31);
          }
        }
        pbVar34 = pbVar34 + -0x10;
        if (pbVar34 != (byte *)&emptyString) {
          LOCK();
          iVar11 = *(int *)pbVar34;
          *(int *)pbVar34 = *(int *)pbVar34 + -1;
          UNLOCK();
          if (iVar11 == 0) {
            operator_delete__(pbVar34);
          }
        }
        uVar32 = (int)local_50 + 1;
      } while (uVar36 < uVar14);
      uVar12 = local_a4;
    }
    *(undefined4 *)(this + 0x18) = uVar12;
  }
  if (local_90 == (char *)0x0) {
    return;
  }
LAB_002c4afb:
                    /* try { // try from 002c4afb to 002c4b0d has its CatchHandler @ 002c4b8c */
  lVar13 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar13 + 0x128))(local_90);
  return;
}


