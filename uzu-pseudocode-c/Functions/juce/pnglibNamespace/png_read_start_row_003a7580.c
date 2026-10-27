// Function : png_read_start_row
// Namespace: juce:pnglibNamespace
// Entry    : 003a7580
// Prototype: undefined png_read_start_row(pnglibNamespace * this)
// Body     : 003a7580 - 003a9e97


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::pnglibNamespace::png_read_start_row(juce::pnglibNamespace::png_struct_def*) */

void __thiscall juce::pnglibNamespace::png_read_start_row(pnglibNamespace *this)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  bool bVar6;
  undefined1 auVar7 [14];
  undefined8 uVar8;
  pnglibNamespace pVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  undefined8 *puVar14;
  void *pvVar15;
  void *pvVar16;
  byte bVar17;
  pnglibNamespace pVar18;
  byte bVar19;
  short sVar20;
  uint uVar21;
  byte *pbVar22;
  ushort uVar23;
  uint uVar24;
  uint uVar25;
  pnglibNamespace *ppVar26;
  ulong uVar27;
  pnglibNamespace pVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  int iVar34;
  ulong uVar35;
  pnglibNamespace pVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  byte *pbVar40;
  long lVar41;
  bool bVar42;
  uint uVar43;
  int iVar44;
  undefined2 uVar45;
  int iVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  uint local_60;
  
  iVar29 = *(int *)(this + 0x1c4);
  if (*(int *)(this + 0x398) == 0) {
    if (iVar29 == 0) {
      *(undefined4 *)(this + 0x398) = 100000;
      *(undefined4 *)(this + 0x1c4) = 100000;
      iVar29 = 100000;
    }
    else {
      dVar47 = floor(DAT_005de6f8 / (double)iVar29 + DAT_005db338);
      iVar34 = (int)dVar47;
      if (dVar47 < DAT_005de630) {
        iVar34 = 0;
      }
      if (DAT_0065a018 < dVar47) {
        iVar34 = 0;
      }
      *(int *)(this + 0x398) = iVar34;
    }
LAB_003a76e5:
    uVar11 = *(ushort *)(this + 0x3e2) | 1;
    *(ushort *)(this + 0x3e2) = uVar11;
LAB_003a76f8:
    uVar25 = *(uint *)(this + 0x54) & 0xffffdfff;
  }
  else {
    dVar47 = (double)*(int *)(this + 0x398);
    if (iVar29 == 0) {
      dVar47 = floor(DAT_005de6f8 / dVar47 + DAT_005db338);
      iVar29 = (int)dVar47;
      if (dVar47 < DAT_005de630) {
        iVar29 = 0;
      }
      if (DAT_0065a018 < dVar47) {
        iVar29 = 0;
      }
      *(int *)(this + 0x1c4) = iVar29;
      goto LAB_003a76e5;
    }
    dVar47 = floor((dVar47 * (double)iVar29) / DAT_005de6e8 + DAT_005db338);
    if ((dVar47 <= DAT_0065a018) && (DAT_005de630 <= dVar47)) {
      uVar11 = *(ushort *)(this + 0x3e2) | 1;
      *(ushort *)(this + 0x3e2) = uVar11;
      if (10000 < (int)dVar47 - 95000U) goto LAB_003a76bf;
      goto LAB_003a76f8;
    }
    uVar11 = *(ushort *)(this + 0x3e2) | 1;
    *(ushort *)(this + 0x3e2) = uVar11;
LAB_003a76bf:
    uVar25 = *(uint *)(this + 0x54) | 0x2000;
  }
  *(uint *)(this + 0x54) = uVar25;
  if ((uVar25 & 0x40080) == 0x40000) {
    uVar25 = uVar25 & 0xfd7ffeff;
    *(uint *)(this + 0x54) = uVar25;
    this[0x51] = (pnglibNamespace)((byte)this[0x51] & 0xdf);
    *(undefined2 *)(this + 0x180) = 0;
  }
  uVar21 = uVar25;
  if (iVar29 - 95000U < 0x2711) {
    *(uint *)(this + 0x54) = uVar25 & 0xff7fffff;
    this[0x51] = (pnglibNamespace)((byte)this[0x51] & 0xdf);
    uVar21 = uVar25 & 0xff7fffff;
  }
  if ((((uVar25 & 0x600000) != 0) && (this[0x2f1] == (pnglibNamespace)0x0)) && ((uVar11 & 2) != 0))
  {
    iVar29 = *(int *)(this + 0x3c0);
    iVar34 = *(int *)(this + 0x3cc);
    iVar44 = *(int *)(this + 0x3d8);
    iVar46 = iVar34 + iVar29 + iVar44;
    if ((iVar46 == 0 || SCARRY4(iVar34 + iVar29,iVar44) != iVar46 < 0) || (iVar29 < 0)) {
LAB_003a9e8f:
                    /* WARNING: Subroutine does not return */
      png_err(this);
    }
    dVar47 = (double)iVar46;
    if (iVar29 == 0) {
      uVar25 = 0;
    }
    else {
      dVar48 = floor(((double)iVar29 * DAT_0065db00) / dVar47 + DAT_005db338);
      uVar25 = (uint)dVar48;
      if (dVar48 < DAT_005de630 || DAT_0065a018 < dVar48) goto LAB_003a9e8f;
    }
    if ((((int)uVar25 < 0) || (0x8000 < (int)uVar25)) || (iVar34 < 0)) goto LAB_003a9e8f;
    if (iVar34 == 0) {
      uVar13 = 0;
    }
    else {
      dVar48 = floor(((double)iVar34 * DAT_0065db00) / dVar47 + DAT_005db338);
      uVar13 = (uint)dVar48;
      if (dVar48 < DAT_005de630 || DAT_0065a018 < dVar48) goto LAB_003a9e8f;
    }
    if ((((int)uVar13 < 0) || (0x8000 < (int)uVar13)) || (iVar44 < 0)) goto LAB_003a9e8f;
    if (iVar44 == 0) {
      uVar24 = 0;
      uVar30 = uVar25 + uVar13;
    }
    else {
      dVar47 = floor(((double)iVar44 * DAT_0065db00) / dVar47 + DAT_005db338);
      if (((DAT_0065a018 < dVar47) || (dVar47 < DAT_005de630)) ||
         (uVar24 = (uint)dVar47, 0x8000 < uVar24)) goto LAB_003a9e8f;
      uVar30 = uVar25 + uVar13 + uVar24;
    }
    if (0x8001 < uVar30) goto LAB_003a9e8f;
    iVar29 = -1;
    if ((uVar30 == 0x8001) || (iVar29 = 1, uVar30 < 0x8000)) {
      if ((uVar13 < uVar25) || (uVar13 < uVar24)) {
        if ((uVar25 < uVar13) || (uVar25 < uVar24)) {
          uVar24 = uVar24 + iVar29;
        }
        else {
          uVar25 = iVar29 + uVar25;
        }
      }
      else {
        uVar13 = iVar29 + uVar13;
      }
    }
    if (uVar24 + uVar13 + uVar25 != 0x8000) goto LAB_003a9e8f;
    *(short *)(this + 0x2f2) = (short)uVar25;
    *(short *)(this + 0x2f4) = (short)uVar13;
  }
  if ((uVar21 & 0x100) == 0) {
    if ((((~uVar21 & 0x4080) == 0) &&
        (sVar20 = *(short *)(this + 0x19e), sVar20 == *(short *)(this + 0x1a0))) &&
       (sVar20 == *(short *)(this + 0x1a2))) {
      this[0x4d] = (pnglibNamespace)((byte)this[0x4d] | 8);
      *(short *)(this + 0x1a4) = sVar20;
    }
  }
  else if (((byte)this[0x187] & 2) == 0) {
    this[0x4d] = (pnglibNamespace)((byte)this[0x4d] | 8);
  }
  pVar9 = this[0x187];
  uVar25 = uVar21;
  if (pVar9 == (pnglibNamespace)0x3) {
    uVar11 = *(ushort *)(this + 0x180);
    uVar31 = (ulong)uVar11;
    if (uVar31 == 0) {
      this[0x51] = (pnglibNamespace)((byte)this[0x51] & 0xdf);
LAB_003a7b2a:
      *(uint *)(this + 0x54) = uVar21 & 0xff7ffe7f;
      uVar25 = uVar21 & 0xff7ffe7f;
    }
    else {
      uVar35 = 0;
      bVar42 = true;
      bVar6 = false;
      do {
        while( true ) {
          uVar35 = uVar35 + 1;
          cVar1 = *(char *)(*(long *)(this + 0x208) + -1 + uVar35);
          if (cVar1 != -1) break;
LAB_003a7a30:
          if (uVar35 == uVar31) {
            if (bVar42) {
              *(uint *)(this + 0x54) = uVar21 & 0xff7fffff;
              this[0x51] = (pnglibNamespace)((byte)this[0x51] & 0xdf);
              uVar25 = uVar21 & 0xff7fffff;
              if (!bVar6) goto LAB_003a7b2a;
            }
            goto joined_r0x003a7b1e;
          }
        }
        if (cVar1 == '\0') {
          bVar6 = true;
          goto LAB_003a7a30;
        }
        bVar42 = false;
      } while (uVar35 != uVar31);
    }
joined_r0x003a7b1e:
    if ((~uVar25 & 0x1100) == 0) {
      lVar41 = *(long *)(this + 0x170);
      lVar32 = (ulong)(byte)this[0x19c] * 3;
      *(ushort *)(this + 0x19e) = (ushort)*(byte *)(lVar41 + lVar32);
      *(ushort *)(this + 0x1a0) = (ushort)*(byte *)(lVar41 + 1 + lVar32);
      *(ushort *)(this + 0x1a2) = (ushort)*(byte *)(lVar41 + 2 + lVar32);
      if (((uVar25 & 0x2080000) == 0x80000) && (uVar11 != 0)) {
        lVar41 = *(long *)(this + 0x208);
        if (uVar11 < 8) {
          uVar35 = 0;
LAB_003a94c0:
          do {
            *(byte *)(lVar41 + uVar35) = ~*(byte *)(lVar41 + uVar35);
            uVar27 = uVar35 + 1;
joined_r0x003a94ba:
            uVar35 = uVar27;
          } while (uVar35 != uVar31);
        }
        else {
          if (uVar11 < 0x20) {
            uVar35 = 0;
LAB_003a9493:
            uVar27 = (ulong)(uVar11 & 0xfffffff8);
            do {
              *(ulong *)(lVar41 + uVar35) = *(ulong *)(lVar41 + uVar35) ^ 0xffffffffffffffff;
              uVar35 = uVar35 + 8;
              if (uVar27 == uVar35) goto joined_r0x003a94ba;
            } while( true );
          }
          uVar35 = (ulong)(uVar11 & 0xffffffe0);
          uVar27 = (uVar35 - 0x20 >> 5) + 1;
          if (uVar35 - 0x20 == 0) {
            lVar32 = 0;
          }
          else {
            uVar39 = uVar27 & 0xfffffffffffffffe;
            lVar32 = 0;
            auVar51._8_4_ = 0xffffffff;
            auVar51._0_8_ = 0xffffffffffffffff;
            auVar51._12_4_ = 0xffffffff;
            do {
              *(undefined1 (*) [16])(lVar41 + lVar32) =
                   *(undefined1 (*) [16])(lVar41 + lVar32) ^ auVar51;
              *(undefined1 (*) [16])(lVar41 + 0x10 + lVar32) =
                   *(undefined1 (*) [16])(lVar41 + 0x10 + lVar32) ^ auVar51;
              *(undefined1 (*) [16])(lVar41 + 0x20 + lVar32) =
                   *(undefined1 (*) [16])(lVar41 + 0x20 + lVar32) ^ auVar51;
              *(undefined1 (*) [16])(lVar41 + 0x30 + lVar32) =
                   *(undefined1 (*) [16])(lVar41 + 0x30 + lVar32) ^ auVar51;
              lVar32 = lVar32 + 0x40;
              uVar39 = uVar39 - 2;
            } while (uVar39 != 0);
          }
          if ((uVar27 & 1) != 0) {
            auVar52._8_4_ = 0xffffffff;
            auVar52._0_8_ = 0xffffffffffffffff;
            auVar52._12_4_ = 0xffffffff;
            *(undefined1 (*) [16])(lVar41 + lVar32) =
                 *(undefined1 (*) [16])(lVar41 + lVar32) ^ auVar52;
            *(undefined1 (*) [16])(lVar41 + 0x10 + lVar32) =
                 *(undefined1 (*) [16])(lVar41 + 0x10 + lVar32) ^ auVar52;
          }
          if (uVar35 != uVar31) {
            if ((uVar11 & 0x18) != 0) goto LAB_003a9493;
            goto LAB_003a94c0;
          }
        }
        uVar25 = *(uint *)(this + 0x54);
      }
    }
  }
  else {
    if (((byte)pVar9 & 4) == 0) {
      this[0x51] = (pnglibNamespace)((byte)this[0x51] & 0xdf);
      uVar25 = uVar21 & 0xff7fffff;
      *(uint *)(this + 0x54) = uVar25;
      if (*(short *)(this + 0x180) == 0) {
        uVar25 = uVar21 & 0xff7ffe7f;
        *(uint *)(this + 0x54) = uVar25;
      }
    }
    if (((~uVar25 & 0x1100) == 0) && (((byte)pVar9 & 2) == 0)) {
      sVar20 = *(short *)(this + 0x1a4);
      sVar10 = *(short *)(this + 0x218);
      pVar9 = this[0x188];
      if (pVar9 == (pnglibNamespace)0x4) {
        sVar20 = sVar20 * 0x11;
        sVar10 = sVar10 * 0x11;
      }
      else if (pVar9 == (pnglibNamespace)0x2) {
        sVar20 = sVar20 * 0x55;
        sVar10 = sVar10 * 0x55;
      }
      else if (pVar9 == (pnglibNamespace)0x1) {
        sVar20 = sVar20 * 0xff;
        sVar10 = sVar10 * 0xff;
      }
      *(short *)(this + 0x1a2) = sVar20;
      *(short *)(this + 0x1a0) = sVar20;
      *(short *)(this + 0x19e) = sVar20;
      if ((uVar25 & 0x2000000) == 0) {
        *(short *)(this + 0x216) = sVar10;
        *(short *)(this + 0x214) = sVar10;
        *(short *)(this + 0x212) = sVar10;
      }
    }
  }
  if (((uVar25 & 0x380) == 0x280) && (this[0x188] != (pnglibNamespace)0x10)) {
    uVar31 = *(ulong *)(this + 0x19e);
    auVar4._8_4_ = 0;
    auVar4._0_8_ = uVar31;
    auVar4._12_2_ = (short)(uVar31 >> 0x30);
    auVar5._8_2_ = (short)(uVar31 >> 0x20);
    auVar5._0_8_ = uVar31;
    auVar5._10_4_ = auVar4._10_4_;
    auVar7._6_8_ = 0;
    auVar7._0_6_ = auVar5._8_6_;
    auVar50._0_4_ = (uint)(ushort)uVar31 * 0xff + _DAT_005ddbb0 >> 0x10;
    auVar50._4_4_ =
         (uint)((int)CONCAT82(SUB148(auVar7 << 0x40,6),(short)(uVar31 >> 0x10)) * 0xff +
               _UNK_005ddbb4) >> 0x10;
    auVar50._8_4_ = (uint)(auVar5._8_4_ * 0xff + _UNK_005ddbb8) >> 0x10;
    auVar50._12_4_ = (auVar4._10_4_ >> 0x10) * 0xff + _UNK_005ddbbc >> 0x10;
    auVar51 = packssdw(auVar50,auVar50);
    *(long *)(this + 0x19e) = auVar51._0_8_;
  }
  if (((((uVar25 & 0x4000400) != 0) && ((uVar25 & 0x80) != 0)) && ((uVar25 & 0x100) == 0)) &&
     (this[0x188] == (pnglibNamespace)0x10)) {
    *(short *)(this + 0x19e) = *(short *)(this + 0x19e) * 0x101;
    *(short *)(this + 0x1a0) = (short)*(undefined4 *)(this + 0x1a0) * 0x101;
    *(short *)(this + 0x1a2) = *(short *)(this + 0x1a2) * 0x101;
    *(short *)(this + 0x1a4) = (short)*(undefined4 *)(this + 0x1a4) * 0x101;
  }
  *(undefined2 *)(this + 0x1ae) = *(undefined2 *)(this + 0x1a4);
  *(undefined8 *)(this + 0x1a6) = *(undefined8 *)(this + 0x19c);
  if (((((uVar25 & 0x2000) == 0) &&
       (((uVar25 & 0x600000) == 0 ||
        ((*(int *)(this + 0x398) - 95000U < 0x2711 && (*(int *)(this + 0x1c4) - 95000U < 0x2711)))))
       ) && (((uVar25 & 0x80) == 0 ||
             (((*(int *)(this + 0x398) - 95000U < 0x2711 &&
               (*(int *)(this + 0x1c4) - 95000U < 0x2711)) &&
              ((this[0x194] != (pnglibNamespace)0x3 || (*(int *)(this + 0x198) - 95000U < 0x2711))))
             )))) && (((uVar25 & 0x800000) == 0 || (*(int *)(this + 0x1c4) - 95000U < 0x2711)))) {
    if (((uVar25 & 0x80) == 0) || (this[0x187] != (pnglibNamespace)0x3)) goto joined_r0x003a98d4;
    uVar11 = *(ushort *)(this + 0x180);
    if ((ulong)uVar11 != 0) {
      uVar12 = *(ushort *)(this + 0x19e);
      uVar2 = *(ushort *)(this + 0x1a0);
      uVar3 = *(ushort *)(this + 0x1a2);
      pbVar22 = (byte *)(*(long *)(this + 0x170) + 2);
      uVar31 = 0;
      do {
        lVar41 = *(long *)(this + 0x208);
        bVar19 = *(byte *)(lVar41 + uVar31);
        if (bVar19 != 0xff) {
          if (bVar19 == 0) {
            pbVar22[-2] = (byte)uVar12;
            pbVar22[-1] = (byte)uVar2;
            *pbVar22 = (byte)uVar3;
          }
          else {
            uVar23 = (ushort)(byte)~bVar19 * (uVar12 & 0xff) + (ushort)pbVar22[-2] * (ushort)bVar19
                     + 0x80;
            pbVar22[-2] = (byte)((uint)(uVar23 >> 8) + (uint)uVar23 >> 8);
            uVar23 = (ushort)pbVar22[-1] * (ushort)*(byte *)(lVar41 + uVar31) +
                     (*(byte *)(lVar41 + uVar31) ^ 0xff) * (uVar2 & 0xff) + 0x80;
            pbVar22[-1] = (byte)((uint)(uVar23 >> 8) + (uint)uVar23 >> 8);
            uVar25 = (uint)*pbVar22 * (uint)*(byte *)(lVar41 + uVar31) +
                     (*(byte *)(lVar41 + uVar31) ^ 0xff) * (uint)(uVar3 & 0xff) + 0x80 & 0xffff;
            *pbVar22 = (byte)((uVar25 >> 8) + uVar25 >> 8);
          }
        }
        uVar31 = uVar31 + 1;
        pbVar22 = pbVar22 + 3;
      } while (uVar11 != uVar31);
      uVar25 = *(uint *)(this + 0x54);
    }
    uVar25 = uVar25 & 0xffffff7f;
LAB_003a98c5:
    *(uint *)(this + 0x54) = uVar25;
  }
  else {
    pVar9 = this[0x188];
    if ((*(long *)(this + 0x1c8) != 0) || (*(long *)(this + 0x1d0) != 0)) {
      png_warning((long)this,"gamma table being rebuilt");
      png_destroy_gamma_table((long)this);
    }
    if ((byte)pVar9 < 9) {
      if (*(int *)(this + 0x1c4) < 1) {
        iVar29 = 100000;
        puVar14 = malloc(0x100);
      }
      else if (((*(int *)(this + 0x398) == 0) ||
               (dVar47 = floor((DAT_005de708 / (double)*(int *)(this + 0x398)) /
                               (double)*(int *)(this + 0x1c4) + DAT_005db338), DAT_0065a018 < dVar47
               )) || (dVar47 < DAT_005de630)) {
        iVar29 = 0;
        puVar14 = malloc(0x100);
      }
      else {
        iVar29 = (int)dVar47;
        puVar14 = malloc(0x100);
      }
      if (puVar14 == (undefined8 *)0x0) goto LAB_003a9e87;
      *(undefined8 **)(this + 0x1c8) = puVar14;
      uVar8 = _UNK_005dd428;
      if (iVar29 - 95000U < 0x2711) {
        *puVar14 = _DAT_005dd420;
        puVar14[1] = uVar8;
        uVar8 = _UNK_005dd438;
        puVar14[2] = _DAT_005dd430;
        puVar14[3] = uVar8;
        uVar8 = _UNK_005dd448;
        puVar14[4] = _DAT_005dd440;
        puVar14[5] = uVar8;
        uVar8 = _UNK_005dd458;
        puVar14[6] = _DAT_005dd450;
        puVar14[7] = uVar8;
        uVar8 = _UNK_005dd468;
        puVar14[8] = _DAT_005dd460;
        puVar14[9] = uVar8;
        uVar8 = _UNK_005dd478;
        puVar14[10] = _DAT_005dd470;
        puVar14[0xb] = uVar8;
        uVar8 = _UNK_005dd488;
        puVar14[0xc] = _DAT_005dd480;
        puVar14[0xd] = uVar8;
        uVar8 = _UNK_005dd498;
        puVar14[0xe] = _DAT_005dd490;
        puVar14[0xf] = uVar8;
        uVar8 = _UNK_005dd4a8;
        puVar14[0x10] = _DAT_005dd4a0;
        puVar14[0x11] = uVar8;
        uVar8 = _UNK_005dd4b8;
        puVar14[0x12] = _DAT_005dd4b0;
        puVar14[0x13] = uVar8;
        uVar8 = _UNK_005dd4c8;
        puVar14[0x14] = _DAT_005dd4c0;
        puVar14[0x15] = uVar8;
        uVar8 = _UNK_005dd4d8;
        puVar14[0x16] = _DAT_005dd4d0;
        puVar14[0x17] = uVar8;
        uVar8 = _UNK_005dd4e8;
        puVar14[0x18] = _DAT_005dd4e0;
        puVar14[0x19] = uVar8;
        uVar8 = _UNK_005dd4f8;
        puVar14[0x1a] = _DAT_005dd4f0;
        puVar14[0x1b] = uVar8;
        uVar8 = _UNK_005dd508;
        puVar14[0x1c] = _DAT_005dd500;
        puVar14[0x1d] = uVar8;
        uVar8 = _UNK_005dd518;
        puVar14[0x1e] = _DAT_005dd510;
        puVar14[0x1f] = uVar8;
      }
      else {
        dVar47 = (double)iVar29 * DAT_00652ba8;
        lVar41 = 0;
        do {
          while ((int)lVar41 - 1U < 0xfe) {
            dVar48 = pow((double)(int)lVar41 / DAT_005de5f8,dVar47);
            dVar48 = floor(dVar48 * DAT_005de5f8 + DAT_005db338);
            *(char *)((long)puVar14 + lVar41) = (char)(int)dVar48;
            lVar41 = lVar41 + 1;
            if (lVar41 == 0x100) goto LAB_003a8223;
          }
          *(char *)((long)puVar14 + lVar41) = (char)lVar41;
          lVar41 = lVar41 + 1;
        } while (lVar41 != 0x100);
      }
LAB_003a8223:
      if ((*(uint *)(this + 0x54) & 0x600080) != 0) {
        dVar47 = floor(DAT_005de6f8 / (double)*(int *)(this + 0x398) + DAT_005db338);
        iVar29 = (int)dVar47;
        if (dVar47 < DAT_005de630) {
          iVar29 = 0;
        }
        if (DAT_0065a018 < dVar47) {
          iVar29 = 0;
        }
        puVar14 = malloc(0x100);
        if (puVar14 == (undefined8 *)0x0) goto LAB_003a9e87;
        *(undefined8 **)(this + 0x1e0) = puVar14;
        uVar8 = _UNK_005dd428;
        if (iVar29 - 95000U < 0x2711) {
          *puVar14 = _DAT_005dd420;
          puVar14[1] = uVar8;
          uVar8 = _UNK_005dd438;
          puVar14[2] = _DAT_005dd430;
          puVar14[3] = uVar8;
          uVar8 = _UNK_005dd448;
          puVar14[4] = _DAT_005dd440;
          puVar14[5] = uVar8;
          uVar8 = _UNK_005dd458;
          puVar14[6] = _DAT_005dd450;
          puVar14[7] = uVar8;
          uVar8 = _UNK_005dd468;
          puVar14[8] = _DAT_005dd460;
          puVar14[9] = uVar8;
          uVar8 = _UNK_005dd478;
          puVar14[10] = _DAT_005dd470;
          puVar14[0xb] = uVar8;
          uVar8 = _UNK_005dd488;
          puVar14[0xc] = _DAT_005dd480;
          puVar14[0xd] = uVar8;
          uVar8 = _UNK_005dd498;
          puVar14[0xe] = _DAT_005dd490;
          puVar14[0xf] = uVar8;
          uVar8 = _UNK_005dd4a8;
          puVar14[0x10] = _DAT_005dd4a0;
          puVar14[0x11] = uVar8;
          uVar8 = _UNK_005dd4b8;
          puVar14[0x12] = _DAT_005dd4b0;
          puVar14[0x13] = uVar8;
          uVar8 = _UNK_005dd4c8;
          puVar14[0x14] = _DAT_005dd4c0;
          puVar14[0x15] = uVar8;
          uVar8 = _UNK_005dd4d8;
          puVar14[0x16] = _DAT_005dd4d0;
          puVar14[0x17] = uVar8;
          uVar8 = _UNK_005dd4e8;
          puVar14[0x18] = _DAT_005dd4e0;
          puVar14[0x19] = uVar8;
          uVar8 = _UNK_005dd4f8;
          puVar14[0x1a] = _DAT_005dd4f0;
          puVar14[0x1b] = uVar8;
          uVar8 = _UNK_005dd508;
          puVar14[0x1c] = _DAT_005dd500;
          puVar14[0x1d] = uVar8;
          uVar8 = _UNK_005dd518;
          puVar14[0x1e] = _DAT_005dd510;
          puVar14[0x1f] = uVar8;
        }
        else {
          dVar47 = (double)iVar29 * DAT_00652ba8;
          lVar41 = 0;
          do {
            while ((int)lVar41 - 1U < 0xfe) {
              dVar48 = pow((double)(int)lVar41 / DAT_005de5f8,dVar47);
              dVar48 = floor(dVar48 * DAT_005de5f8 + DAT_005db338);
              *(char *)((long)puVar14 + lVar41) = (char)(int)dVar48;
              lVar41 = lVar41 + 1;
              if (lVar41 == 0x100) goto LAB_003a8463;
            }
            *(char *)((long)puVar14 + lVar41) = (char)lVar41;
            lVar41 = lVar41 + 1;
          } while (lVar41 != 0x100);
        }
LAB_003a8463:
        if (*(int *)(this + 0x1c4) < 1) {
          iVar29 = *(int *)(this + 0x398);
          puVar14 = malloc(0x100);
        }
        else {
          dVar47 = floor(DAT_005de6f8 / (double)*(int *)(this + 0x1c4) + DAT_005db338);
          iVar29 = (int)dVar47;
          if (dVar47 < DAT_005de630) {
            iVar29 = 0;
          }
          if (DAT_0065a018 < dVar47) {
            iVar29 = 0;
          }
          puVar14 = malloc(0x100);
        }
        if (puVar14 == (undefined8 *)0x0) goto LAB_003a9e87;
        *(undefined8 **)(this + 0x1d8) = puVar14;
        uVar8 = _UNK_005dd428;
        if (iVar29 - 95000U < 0x2711) {
          *puVar14 = _DAT_005dd420;
          puVar14[1] = uVar8;
          uVar8 = _UNK_005dd438;
          puVar14[2] = _DAT_005dd430;
          puVar14[3] = uVar8;
          uVar8 = _UNK_005dd448;
          puVar14[4] = _DAT_005dd440;
          puVar14[5] = uVar8;
          uVar8 = _UNK_005dd458;
          puVar14[6] = _DAT_005dd450;
          puVar14[7] = uVar8;
          uVar8 = _UNK_005dd468;
          puVar14[8] = _DAT_005dd460;
          puVar14[9] = uVar8;
          uVar8 = _UNK_005dd478;
          puVar14[10] = _DAT_005dd470;
          puVar14[0xb] = uVar8;
          uVar8 = _UNK_005dd488;
          puVar14[0xc] = _DAT_005dd480;
          puVar14[0xd] = uVar8;
          uVar8 = _UNK_005dd498;
          puVar14[0xe] = _DAT_005dd490;
          puVar14[0xf] = uVar8;
          uVar8 = _UNK_005dd4a8;
          puVar14[0x10] = _DAT_005dd4a0;
          puVar14[0x11] = uVar8;
          uVar8 = _UNK_005dd4b8;
          puVar14[0x12] = _DAT_005dd4b0;
          puVar14[0x13] = uVar8;
          uVar8 = _UNK_005dd4c8;
          puVar14[0x14] = _DAT_005dd4c0;
          puVar14[0x15] = uVar8;
          uVar8 = _UNK_005dd4d8;
          puVar14[0x16] = _DAT_005dd4d0;
          puVar14[0x17] = uVar8;
          uVar8 = _UNK_005dd4e8;
          puVar14[0x18] = _DAT_005dd4e0;
          puVar14[0x19] = uVar8;
          uVar8 = _UNK_005dd4f8;
          puVar14[0x1a] = _DAT_005dd4f0;
          puVar14[0x1b] = uVar8;
          uVar8 = _UNK_005dd508;
          puVar14[0x1c] = _DAT_005dd500;
          puVar14[0x1d] = uVar8;
          uVar8 = _UNK_005dd518;
          puVar14[0x1e] = _DAT_005dd510;
          puVar14[0x1f] = uVar8;
        }
        else {
          dVar47 = (double)iVar29 * DAT_00652ba8;
          lVar41 = 0;
          do {
            while ((int)lVar41 - 1U < 0xfe) {
              dVar48 = pow((double)(int)lVar41 / DAT_005de5f8,dVar47);
              dVar48 = floor(dVar48 * DAT_005de5f8 + DAT_005db338);
              *(char *)((long)puVar14 + lVar41) = (char)(int)dVar48;
              lVar41 = lVar41 + 1;
              if (lVar41 == 0x100) goto LAB_003a8a0a;
            }
            *(char *)((long)puVar14 + lVar41) = (char)lVar41;
            lVar41 = lVar41 + 1;
          } while (lVar41 != 0x100);
        }
      }
    }
    else {
      if (((byte)this[0x187] & 2) == 0) {
        pVar9 = this[0x1fb];
      }
      else {
        pVar9 = SUB41(*(undefined4 *)(this + 0x1f8),0);
        if ((byte)SUB41(*(undefined4 *)(this + 0x1f8),0) < (byte)this[0x1f9]) {
          pVar9 = this[0x1f9];
        }
        if ((byte)pVar9 < (byte)this[0x1fa]) {
          pVar9 = this[0x1fa];
        }
      }
      bVar19 = 0x10 - (char)pVar9;
      if (0xe < (byte)((char)pVar9 - 1U)) {
        bVar19 = 0;
      }
      bVar17 = 5;
      if (5 < bVar19) {
        bVar17 = bVar19;
      }
      if ((*(uint *)(this + 0x54) & 0x4000400) == 0) {
        bVar17 = bVar19;
      }
      bVar19 = 8;
      if (bVar17 < 8) {
        bVar19 = bVar17;
      }
      uVar25 = (uint)bVar19;
      *(uint *)(this + 0x1c0) = uVar25;
      iVar29 = *(int *)(this + 0x1c4);
      if ((*(uint *)(this + 0x54) & 0x4000400) == 0) {
        if (iVar29 < 1) {
          iVar29 = 100000;
        }
        else if (((*(int *)(this + 0x398) == 0) ||
                 (dVar47 = floor((DAT_005de708 / (double)*(int *)(this + 0x398)) / (double)iVar29 +
                                 DAT_005db338), DAT_0065a018 < dVar47)) || (dVar47 < DAT_005de630))
        {
          iVar29 = 0;
        }
        else {
          iVar29 = (int)dVar47;
        }
        png_build_16bit_table(this,(undefined8 *)(this + 0x1d0),uVar25,iVar29);
      }
      else {
        if (iVar29 < 1) {
          dVar47 = _DAT_005d9000;
        }
        else {
          dVar47 = floor((double)iVar29 * (double)*(int *)(this + 0x398) * DAT_00652ba8 +
                         DAT_005db338);
          dVar47 = (double)(-(ulong)(dVar47 <= DAT_0065a018) &
                           -(ulong)(DAT_005de630 <= dVar47) &
                           (ulong)((double)(int)dVar47 * DAT_00652ba8));
        }
        bVar17 = 8 - bVar19;
        uVar21 = 1 << (bVar17 & 0x1f);
        pvVar15 = calloc(1,(ulong)uVar21 * 8);
        if (pvVar15 == (void *)0x0) goto LAB_003a9e87;
        *(void **)(this + 0x1d0) = pvVar15;
        uVar31 = 0;
        do {
          pvVar16 = malloc(0x200);
          if (pvVar16 == (void *)0x0) goto LAB_003a9e87;
          *(void **)((long)pvVar15 + uVar31 * 8) = pvVar16;
          uVar31 = uVar31 + 1;
        } while (uVar21 != uVar31);
        uVar30 = 0xff >> (bVar19 & 0x1f);
        iVar29 = 0;
        uVar13 = 0;
        do {
          while( true ) {
            dVar48 = pow((double)((iVar29 * 0x101 & 0xffffU) + 0x80) / DAT_005de700,dVar47);
            dVar48 = floor(dVar48 * DAT_005de700 + DAT_005db338);
            uVar24 = (((int)dVar48 & 0xffffU) * ~(-1 << (0x10 - bVar19 & 0x1f)) + 0x8000) / 0xffff;
            uVar33 = uVar24 - uVar13;
            if (uVar24 < uVar13) break;
            uVar43 = uVar24 + 1;
            uVar45 = (undefined2)(iVar29 * 0x101);
            for (uVar37 = uVar43 - uVar13 & 3; uVar37 != 0; uVar37 = uVar37 - 1) {
              *(undefined2 *)
               (*(long *)((long)pvVar15 + (ulong)(uVar13 & uVar30) * 8) +
               (ulong)(uVar13 >> (bVar17 & 0x1f)) * 2) = uVar45;
              uVar13 = uVar13 + 1;
            }
            if (2 < uVar33) {
              do {
                *(undefined2 *)
                 (*(long *)((long)pvVar15 + (ulong)(uVar13 & uVar30) * 8) +
                 (ulong)(uVar13 >> (bVar17 & 0x1f)) * 2) = uVar45;
                *(undefined2 *)
                 (*(long *)((long)pvVar15 + (ulong)(uVar13 + 1 & uVar30) * 8) +
                 (ulong)(uVar13 + 1 >> (bVar17 & 0x1f)) * 2) = uVar45;
                *(undefined2 *)
                 (*(long *)((long)pvVar15 + (ulong)(uVar13 + 2 & uVar30) * 8) +
                 (ulong)(uVar13 + 2 >> (bVar17 & 0x1f)) * 2) = uVar45;
                uVar33 = uVar13 + 3;
                *(undefined2 *)
                 (*(long *)((long)pvVar15 + (ulong)(uVar33 & uVar30) * 8) +
                 (ulong)(uVar33 >> (bVar17 & 0x1f)) * 2) = uVar45;
                uVar13 = uVar13 + 4;
              } while (uVar33 != uVar24);
            }
            iVar29 = iVar29 + 1;
            uVar13 = uVar43;
            if (iVar29 == 0xff) goto LAB_003a86ba;
          }
          iVar29 = iVar29 + 1;
        } while (iVar29 != 0xff);
LAB_003a86ba:
        uVar21 = uVar21 * 0x100;
        if (uVar13 < uVar21) {
          uVar33 = ~uVar13;
          for (uVar24 = -uVar13 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
            *(undefined2 *)
             (*(long *)((long)pvVar15 + (ulong)(uVar13 & uVar30) * 8) +
             (ulong)(uVar13 >> (bVar17 & 0x1f)) * 2) = 0xffff;
            uVar13 = uVar13 + 1;
          }
          if (2 < uVar33 + uVar21) {
            do {
              *(undefined2 *)
               (*(long *)((long)pvVar15 + (ulong)(uVar13 & uVar30) * 8) +
               (ulong)(uVar13 >> (bVar17 & 0x1f)) * 2) = 0xffff;
              *(undefined2 *)
               (*(long *)((long)pvVar15 + (ulong)(uVar13 + 1 & uVar30) * 8) +
               (ulong)(uVar13 + 1 >> (bVar17 & 0x1f)) * 2) = 0xffff;
              *(undefined2 *)
               (*(long *)((long)pvVar15 + (ulong)(uVar13 + 2 & uVar30) * 8) +
               (ulong)(uVar13 + 2 >> (bVar17 & 0x1f)) * 2) = 0xffff;
              *(undefined2 *)
               (*(long *)((long)pvVar15 + (ulong)(uVar13 + 3 & uVar30) * 8) +
               (ulong)(uVar13 + 3 >> (bVar17 & 0x1f)) * 2) = 0xffff;
              uVar13 = uVar13 + 4;
            } while (uVar13 != uVar21);
          }
        }
      }
      if ((*(uint *)(this + 0x54) & 0x600080) != 0) {
        dVar47 = floor(DAT_005de6f8 / (double)*(int *)(this + 0x398) + DAT_005db338);
        iVar29 = (int)dVar47;
        if (dVar47 < DAT_005de630) {
          iVar29 = 0;
        }
        if (DAT_0065a018 < dVar47) {
          iVar29 = 0;
        }
        png_build_16bit_table(this,(undefined8 *)(this + 0x1f0),uVar25,iVar29);
        if (*(int *)(this + 0x1c4) < 1) {
          iVar29 = *(int *)(this + 0x398);
        }
        else {
          dVar47 = floor(DAT_005de6f8 / (double)*(int *)(this + 0x1c4) + DAT_005db338);
          iVar29 = (int)dVar47;
          if (dVar47 < DAT_005de630) {
            iVar29 = 0;
          }
          if (DAT_0065a018 < dVar47) {
            iVar29 = 0;
          }
        }
        png_build_16bit_table(this,(undefined8 *)(this + 0x1e8),uVar25,iVar29);
      }
    }
LAB_003a8a0a:
    uVar25 = *(uint *)(this + 0x54);
    if ((uVar25 & 0x80) == 0) {
      if ((this[0x187] == (pnglibNamespace)0x3) &&
         (((uVar25 & 0x1000) == 0 || ((uVar25 & 0x600000) == 0)))) {
        uVar11 = *(ushort *)(this + 0x178);
        if ((ulong)uVar11 != 0) {
          lVar41 = *(long *)(this + 0x170);
          lVar32 = *(long *)(this + 0x1c8);
          lVar38 = 0;
          do {
            *(undefined1 *)(lVar41 + lVar38) =
                 *(undefined1 *)(lVar32 + (ulong)*(byte *)(lVar41 + lVar38));
            *(undefined1 *)(lVar41 + 1 + lVar38) =
                 *(undefined1 *)(lVar32 + (ulong)*(byte *)(lVar41 + 1 + lVar38));
            *(undefined1 *)(lVar41 + 2 + lVar38) =
                 *(undefined1 *)(lVar32 + (ulong)*(byte *)(lVar41 + 2 + lVar38));
            lVar38 = lVar38 + 3;
          } while ((ulong)uVar11 * 3 != lVar38);
        }
        uVar25 = uVar25 & 0xffffdfff;
        goto LAB_003a98c5;
      }
    }
    else {
      if ((uVar25 & 0x600000) != 0) {
        png_warning((long)this,"libpng does not support gamma+background+rgb_to_gray");
      }
      if (this[0x187] == (pnglibNamespace)0x3) {
        lVar41 = *(long *)(this + 0x170);
        uVar31 = (ulong)*(ushort *)(this + 0x178);
        pVar9 = this[0x194];
        if (pVar9 == (pnglibNamespace)0x1) {
          iVar29 = *(int *)(this + 0x1c4);
LAB_003a8ca5:
          pVar9 = this[0x19e];
          pVar36 = this[0x1a0];
          pVar28 = this[0x1a2];
LAB_003a95fe:
          uVar11 = *(ushort *)(this + 0x19e);
          local_60 = (uint)uVar11;
          if (iVar29 - 95000U < 0x2711) {
            uVar25 = (uint)(byte)this[0x1a0];
            uVar21 = (uint)(byte)this[0x1a2];
          }
          else {
            dVar47 = (double)iVar29;
            if (uVar11 - 1 < 0xfe) {
              dVar48 = pow((double)uVar11 / DAT_005de5f8,DAT_00652ba8 * dVar47);
              dVar48 = floor(dVar48 * DAT_005de5f8 + DAT_005db338);
              local_60 = (uint)dVar48;
            }
            uVar11 = *(ushort *)(this + 0x1a0);
            uVar25 = (uint)uVar11;
            if (uVar11 - 1 < 0xfe) {
              dVar48 = pow((double)uVar11 / DAT_005de5f8,DAT_00652ba8 * dVar47);
              dVar48 = floor(dVar48 * DAT_005de5f8 + DAT_005db338);
              uVar25 = (uint)dVar48;
            }
            uVar11 = *(ushort *)(this + 0x1a2);
            uVar21 = (uint)uVar11;
            if (uVar11 - 1 < 0xfe) {
              dVar47 = pow((double)uVar11 / DAT_005de5f8,dVar47 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de5f8 + DAT_005db338);
              uVar21 = (uint)dVar47;
            }
          }
        }
        else {
          if (pVar9 == (pnglibNamespace)0x3) {
            iVar34 = *(int *)(this + 0x198);
            iVar44 = *(int *)(this + 0x1c4);
            dVar48 = (double)iVar34;
            dVar47 = floor(DAT_005de6f8 / dVar48 + DAT_005db338);
            iVar29 = (int)dVar47;
            if (dVar47 < DAT_005de630) {
              iVar29 = 0;
            }
            if (DAT_0065a018 < dVar47) {
              iVar29 = 0;
            }
            if ((iVar34 == 0) || (iVar44 == 0)) {
              iVar34 = 0;
            }
            else {
              dVar47 = floor((DAT_005de708 / dVar48) / (double)iVar44 + DAT_005db338);
              iVar34 = 0;
              if (((dVar47 <= DAT_0065a018) && (DAT_005de630 <= dVar47)) &&
                 (iVar34 = (int)dVar47, iVar34 - 95000U < 0x2711)) goto LAB_003a8ca5;
            }
            uVar11 = *(ushort *)(this + 0x19e);
            pVar9 = SUB21(uVar11,0);
            if (uVar11 - 1 < 0xfe) {
              dVar47 = pow((double)uVar11 / DAT_005de5f8,(double)iVar34 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de5f8 + DAT_005db338);
              pVar9 = SUB41((int)dVar47,0);
            }
            uVar11 = *(ushort *)(this + 0x1a0);
            pVar36 = SUB21(uVar11,0);
            if (uVar11 - 1 < 0xfe) {
              dVar47 = pow((double)uVar11 / DAT_005de5f8,(double)iVar34 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de5f8 + DAT_005db338);
              pVar36 = SUB41((int)dVar47,0);
            }
            uVar11 = *(ushort *)(this + 0x1a2);
            pVar28 = SUB21(uVar11,0);
            if (uVar11 - 1 < 0xfe) {
              dVar47 = pow((double)uVar11 / DAT_005de5f8,(double)iVar34 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de5f8 + DAT_005db338);
              pVar28 = SUB41((int)dVar47,0);
            }
            goto LAB_003a95fe;
          }
          iVar29 = 100000;
          if (pVar9 != (pnglibNamespace)0x2) goto LAB_003a8ca5;
          lVar32 = *(long *)(this + 0x1c8);
          lVar38 = *(long *)(this + 0x1e0);
          pVar9 = *(pnglibNamespace *)(lVar32 + (ulong)*(ushort *)(this + 0x19e));
          pVar36 = *(pnglibNamespace *)(lVar32 + (ulong)*(ushort *)(this + 0x1a0));
          pVar28 = *(pnglibNamespace *)(lVar32 + (ulong)*(ushort *)(this + 0x1a2));
          local_60 = (uint)*(byte *)(lVar38 + (ulong)*(ushort *)(this + 0x19e));
          uVar25 = (uint)*(byte *)(lVar38 + (ulong)*(ushort *)(this + 0x1a0));
          uVar21 = (uint)*(byte *)(lVar38 + (ulong)*(ushort *)(this + 0x1a2));
        }
        if (uVar31 != 0) {
          ppVar26 = (pnglibNamespace *)(lVar41 + 2);
          uVar35 = 0;
          local_60 = local_60 & 0xff;
LAB_003a9780:
          do {
            if (uVar35 < *(ushort *)(this + 0x180)) {
              lVar41 = *(long *)(this + 0x208);
              bVar19 = *(byte *)(lVar41 + uVar35);
              if (bVar19 == 0xff) goto LAB_003a9880;
              if (bVar19 == 0) {
                ppVar26[-2] = pVar9;
                ppVar26[-1] = pVar36;
                *ppVar26 = pVar28;
                uVar35 = uVar35 + 1;
                ppVar26 = ppVar26 + 3;
                if (uVar31 == uVar35) break;
                goto LAB_003a9780;
              }
              lVar32 = *(long *)(this + 0x1d8);
              lVar38 = *(long *)(this + 0x1e0);
              iVar29 = (uint)*(byte *)(lVar38 + (ulong)(byte)ppVar26[-2]) * (uint)bVar19;
              ppVar26[-2] = *(pnglibNamespace *)
                             (lVar32 + (ulong)(((byte)~bVar19 * local_60 + iVar29 + 0x80 >> 8 & 0xff
                                               ) + 0x80 + (byte)~bVar19 * local_60 + iVar29 >> 8 &
                                              0xff));
              iVar29 = (uint)*(byte *)(lVar38 + (ulong)(byte)ppVar26[-1]) *
                       (uint)*(byte *)(lVar41 + uVar35);
              iVar34 = (*(byte *)(lVar41 + uVar35) ^ 0xff) * (uVar25 & 0xff);
              ppVar26[-1] = *(pnglibNamespace *)
                             (lVar32 + (ulong)((iVar29 + iVar34 + 0x80U >> 8 & 0xff) + 0x80 +
                                               iVar34 + iVar29 >> 8 & 0xff));
              iVar34 = (uint)*(byte *)(lVar38 + (ulong)(byte)*ppVar26) *
                       (uint)*(byte *)(lVar41 + uVar35);
              iVar29 = (*(byte *)(lVar41 + uVar35) ^ 0xff) * (uVar21 & 0xff);
              pVar18 = *(pnglibNamespace *)
                        (lVar32 + (ulong)((iVar29 + iVar34 + 0x80U >> 8 & 0xff) + 0x80 +
                                          iVar29 + iVar34 >> 8 & 0xff));
            }
            else {
LAB_003a9880:
              lVar41 = *(long *)(this + 0x1c8);
              ppVar26[-2] = *(pnglibNamespace *)(lVar41 + (ulong)(byte)ppVar26[-2]);
              ppVar26[-1] = *(pnglibNamespace *)(lVar41 + (ulong)(byte)ppVar26[-1]);
              pVar18 = *(pnglibNamespace *)(lVar41 + (ulong)(byte)*ppVar26);
            }
            *ppVar26 = pVar18;
            uVar35 = uVar35 + 1;
            ppVar26 = ppVar26 + 3;
          } while (uVar31 != uVar35);
        }
        uVar25 = *(uint *)(this + 0x54) & 0xffffdf7f;
        goto LAB_003a98c5;
      }
      pVar9 = this[0x194];
      if (pVar9 == (pnglibNamespace)0x3) {
        iVar34 = *(int *)(this + 0x198);
        iVar29 = *(int *)(this + 0x1c4);
LAB_003a8b81:
        dVar47 = floor(DAT_005de6f8 / (double)iVar34 + DAT_005db338);
        iVar46 = 0;
        iVar44 = (int)dVar47;
        if (dVar47 < DAT_005de630) {
          iVar44 = 0;
        }
        if (DAT_0065a018 < dVar47) {
          iVar44 = 0;
        }
        if ((((iVar34 != 0) && (iVar29 != 0)) &&
            (dVar47 = floor((DAT_005de708 / (double)iVar34) / (double)iVar29 + DAT_005db338),
            dVar47 <= DAT_0065a018)) && (DAT_005de630 <= dVar47)) {
          iVar46 = (int)dVar47;
        }
      }
      else {
        if (pVar9 == (pnglibNamespace)0x2) {
          iVar29 = *(int *)(this + 0x1c4);
          iVar34 = *(int *)(this + 0x398);
          goto LAB_003a8b81;
        }
        if (pVar9 != (pnglibNamespace)0x1) goto LAB_003a9e87;
        iVar44 = *(int *)(this + 0x1c4);
        iVar46 = 100000;
      }
      if (10000 < iVar44 - 95000U) {
        uVar11 = *(ushort *)(this + 0x1a4);
        if (this[0x188] == (pnglibNamespace)0x8) {
          if (uVar11 - 1 < 0xfe) {
            dVar47 = pow((double)uVar11 / DAT_005de5f8,(double)iVar44 * DAT_00652ba8);
            dVar47 = floor(dVar47 * DAT_005de5f8 + DAT_005db338);
            uVar11 = (ushort)(int)dVar47;
          }
          uVar11 = uVar11 & 0xff;
        }
        else if (uVar11 - 1 < 0xfffe) {
          dVar47 = pow((double)uVar11 / DAT_005de700,(double)iVar44 * DAT_00652ba8);
          dVar47 = floor(dVar47 * DAT_005de700 + DAT_005db338);
          uVar11 = (ushort)(int)dVar47;
        }
        *(ushort *)(this + 0x1ae) = uVar11;
      }
      if (10000 < iVar46 - 95000U) {
        uVar11 = *(ushort *)(this + 0x1a4);
        if (this[0x188] == (pnglibNamespace)0x8) {
          if (uVar11 - 1 < 0xfe) {
            dVar47 = pow((double)uVar11 / DAT_005de5f8,(double)iVar46 * DAT_00652ba8);
            dVar47 = floor(dVar47 * DAT_005de5f8 + DAT_005db338);
            uVar11 = (ushort)(int)dVar47;
          }
          uVar11 = uVar11 & 0xff;
        }
        else if (uVar11 - 1 < 0xfffe) {
          dVar47 = pow((double)uVar11 / DAT_005de700,(double)iVar46 * DAT_00652ba8);
          dVar47 = floor(dVar47 * DAT_005de700 + DAT_005db338);
          uVar11 = (ushort)(int)dVar47;
        }
        *(ushort *)(this + 0x1a4) = uVar11;
      }
      uVar11 = *(ushort *)(this + 0x19e);
      uVar12 = *(ushort *)(this + 0x1a0);
      if (((uVar11 == uVar12) && (uVar11 == *(ushort *)(this + 0x1a2))) &&
         (uVar11 == *(ushort *)(this + 0x1a4))) {
        uVar45 = *(undefined2 *)(this + 0x1ae);
        *(undefined2 *)(this + 0x1ac) = uVar45;
        *(undefined2 *)(this + 0x1aa) = uVar45;
        *(undefined2 *)(this + 0x1a8) = uVar45;
        *(ushort *)(this + 0x1a2) = uVar11;
        *(ushort *)(this + 0x1a0) = uVar11;
        *(ushort *)(this + 0x19e) = uVar11;
      }
      else {
        if (10000 < iVar44 - 95000U) {
          if (this[0x188] == (pnglibNamespace)0x8) {
            if (uVar11 - 1 < 0xfe) {
              dVar47 = pow((double)uVar11 / DAT_005de5f8,(double)iVar44 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de5f8 + DAT_005db338);
              uVar11 = (ushort)(int)dVar47;
            }
            uVar11 = uVar11 & 0xff;
LAB_003a8fc4:
            *(ushort *)(this + 0x1a8) = uVar11;
            uVar12 = *(ushort *)(this + 0x1a0);
            uVar25 = uVar12 - 1;
            if (this[0x188] != (pnglibNamespace)0x8) goto LAB_003a90da;
            if (uVar25 < 0xfe) {
              dVar47 = pow((double)uVar12 / DAT_005de5f8,(double)iVar44 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de5f8 + DAT_005db338);
              uVar12 = (ushort)(int)dVar47;
            }
            uVar12 = uVar12 & 0xff;
          }
          else {
            if (uVar11 - 1 < 0xfffe) {
              dVar47 = pow((double)uVar11 / DAT_005de700,(double)iVar44 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de700 + DAT_005db338);
              uVar11 = (ushort)(int)dVar47;
              goto LAB_003a8fc4;
            }
            *(ushort *)(this + 0x1a8) = uVar11;
            uVar25 = uVar12 - 1;
LAB_003a90da:
            if (uVar25 < 0xfffe) {
              dVar47 = pow((double)uVar12 / DAT_005de700,(double)iVar44 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de700 + DAT_005db338);
              uVar12 = (ushort)(int)dVar47;
            }
          }
          *(ushort *)(this + 0x1aa) = uVar12;
          uVar11 = *(ushort *)(this + 0x1a2);
          if (this[0x188] == (pnglibNamespace)0x8) {
            if (uVar11 - 1 < 0xfe) {
              dVar47 = pow((double)uVar11 / DAT_005de5f8,(double)iVar44 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de5f8 + DAT_005db338);
              uVar11 = (ushort)(int)dVar47;
            }
            uVar11 = uVar11 & 0xff;
          }
          else if (uVar11 - 1 < 0xfffe) {
            dVar47 = pow((double)uVar11 / DAT_005de700,(double)iVar44 * DAT_00652ba8);
            dVar47 = floor(dVar47 * DAT_005de700 + DAT_005db338);
            uVar11 = (ushort)(int)dVar47;
          }
          *(ushort *)(this + 0x1ac) = uVar11;
        }
        if (10000 < iVar46 - 95000U) {
          uVar11 = *(ushort *)(this + 0x19e);
          if (this[0x188] == (pnglibNamespace)0x8) {
            if (uVar11 - 1 < 0xfe) {
              dVar47 = pow((double)uVar11 / DAT_005de5f8,(double)iVar46 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de5f8 + DAT_005db338);
              uVar11 = (ushort)(int)dVar47;
            }
            uVar11 = uVar11 & 0xff;
LAB_003a929e:
            *(ushort *)(this + 0x19e) = uVar11;
            uVar11 = *(ushort *)(this + 0x1a0);
            uVar21 = (uint)uVar11;
            uVar25 = uVar11 - 1;
            if (this[0x188] != (pnglibNamespace)0x8) goto LAB_003a931f;
            if (uVar25 < 0xfe) {
              dVar47 = pow((double)uVar11 / DAT_005de5f8,(double)iVar46 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de5f8 + DAT_005db338);
              uVar11 = (ushort)(int)dVar47;
            }
            uVar11 = uVar11 & 0xff;
          }
          else {
            if (uVar11 - 1 < 0xfffe) {
              dVar47 = pow((double)uVar11 / DAT_005de700,(double)iVar46 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de700 + DAT_005db338);
              uVar11 = (ushort)(int)dVar47;
              goto LAB_003a929e;
            }
            uVar21 = (uint)*(ushort *)(this + 0x1a0);
            uVar25 = uVar21 - 1;
LAB_003a931f:
            uVar11 = (ushort)uVar21;
            if (uVar25 < 0xfffe) {
              dVar47 = pow((double)uVar21 / DAT_005de700,(double)iVar46 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de700 + DAT_005db338);
              uVar11 = (ushort)(int)dVar47;
            }
          }
          *(ushort *)(this + 0x1a0) = uVar11;
          uVar11 = *(ushort *)(this + 0x1a2);
          if (this[0x188] == (pnglibNamespace)0x8) {
            if (uVar11 - 1 < 0xfe) {
              dVar47 = pow((double)uVar11 / DAT_005de5f8,(double)iVar46 * DAT_00652ba8);
              dVar47 = floor(dVar47 * DAT_005de5f8 + DAT_005db338);
              uVar11 = (ushort)(int)dVar47;
            }
            uVar11 = uVar11 & 0xff;
          }
          else if (uVar11 - 1 < 0xfffe) {
            dVar47 = pow((double)uVar11 / DAT_005de700,(double)iVar46 * DAT_00652ba8);
            dVar47 = floor(dVar47 * DAT_005de700 + DAT_005db338);
            uVar11 = (ushort)(int)dVar47;
          }
          *(ushort *)(this + 0x1a2) = uVar11;
        }
      }
      this[0x194] = (pnglibNamespace)0x1;
      uVar25 = *(uint *)(this + 0x54);
    }
  }
joined_r0x003a98d4:
  if (((uVar25 & 0x1008) == 8) && (this[0x187] == (pnglibNamespace)0x3)) {
    uVar11 = *(ushort *)(this + 0x178);
    uVar31 = (ulong)uVar11;
    uVar25 = uVar25 & 0xfffffff7;
    *(uint *)(this + 0x54) = uVar25;
    if (((byte)((char)this[0x1f8] - 1U) < 7) && (uVar11 != 0)) {
      bVar19 = 8 - (char)this[0x1f8];
      pbVar22 = *(byte **)(this + 0x170);
      uVar35 = (ulong)(uVar11 & 3);
      if (uVar31 - 1 < 3) {
        uVar27 = 0;
      }
      else {
        uVar27 = 0;
        pbVar40 = pbVar22;
        do {
          *pbVar40 = *pbVar40 >> (bVar19 & 0x1f);
          pbVar40[3] = pbVar40[3] >> (bVar19 & 0x1f);
          pbVar40[6] = pbVar40[6] >> (bVar19 & 0x1f);
          pbVar40[9] = pbVar40[9] >> (bVar19 & 0x1f);
          uVar27 = uVar27 + 4;
          pbVar40 = pbVar40 + 0xc;
        } while ((uVar11 & 0xfffffffc) != uVar27);
      }
      if (uVar35 != 0) {
        lVar41 = 0;
        do {
          pbVar22[lVar41 + uVar27 * 3] = pbVar22[lVar41 + uVar27 * 3] >> (bVar19 & 0x1f);
          lVar41 = lVar41 + 3;
        } while (uVar35 * 3 != lVar41);
      }
    }
    uVar21 = (uint)uVar11;
    if (((byte)((char)this[0x1f9] - 1U) < 7) && (uVar11 != 0)) {
      bVar19 = 8 - (char)this[0x1f9];
      lVar41 = *(long *)(this + 0x170);
      if (uVar31 - 1 < 3) {
        uVar35 = 0;
      }
      else {
        pbVar22 = (byte *)(lVar41 + 10);
        uVar35 = 0;
        do {
          pbVar22[-9] = pbVar22[-9] >> (bVar19 & 0x1f);
          pbVar22[-6] = pbVar22[-6] >> (bVar19 & 0x1f);
          pbVar22[-3] = pbVar22[-3] >> (bVar19 & 0x1f);
          *pbVar22 = *pbVar22 >> (bVar19 & 0x1f);
          uVar35 = uVar35 + 4;
          pbVar22 = pbVar22 + 0xc;
        } while ((uVar21 & 0xfffffffc) != uVar35);
      }
      if ((ulong)(uVar21 & 3) != 0) {
        lVar41 = lVar41 + uVar35 * 3 + 1;
        lVar32 = 0;
        do {
          *(byte *)(lVar41 + lVar32) = *(byte *)(lVar41 + lVar32) >> (bVar19 & 0x1f);
          lVar32 = lVar32 + 3;
        } while ((ulong)(uVar21 & 3) * 3 != lVar32);
      }
    }
    if (((byte)((char)this[0x1fa] - 1U) < 7) && (uVar11 != 0)) {
      bVar19 = 8 - (char)this[0x1fa];
      lVar41 = *(long *)(this + 0x170);
      if (uVar31 - 1 < 3) {
        uVar31 = 0;
      }
      else {
        pbVar22 = (byte *)(lVar41 + 0xb);
        uVar31 = 0;
        do {
          pbVar22[-9] = pbVar22[-9] >> (bVar19 & 0x1f);
          pbVar22[-6] = pbVar22[-6] >> (bVar19 & 0x1f);
          pbVar22[-3] = pbVar22[-3] >> (bVar19 & 0x1f);
          *pbVar22 = *pbVar22 >> (bVar19 & 0x1f);
          uVar31 = uVar31 + 4;
          pbVar22 = pbVar22 + 0xc;
        } while ((uVar21 & 0xfffffffc) != uVar31);
      }
      if ((ulong)(uVar21 & 3) != 0) {
        lVar41 = lVar41 + uVar31 * 3 + 2;
        lVar32 = 0;
        do {
          *(byte *)(lVar41 + lVar32) = *(byte *)(lVar41 + lVar32) >> (bVar19 & 0x1f);
          lVar32 = lVar32 + 3;
        } while ((ulong)(uVar21 & 3) * 3 != lVar32);
      }
    }
  }
  if (this[0x184] == (pnglibNamespace)0x0) {
    uVar21 = *(uint *)(this + 0x118);
    uVar13 = *(uint *)(this + 0x11c);
    uVar30 = uVar21;
  }
  else {
    uVar21 = *(uint *)(this + 0x118);
    uVar13 = *(uint *)(this + 0x11c) + 7 >> 3;
    if ((uVar25 & 2) != 0) {
      uVar13 = *(uint *)(this + 0x11c);
    }
    uVar30 = (uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                    ::png_pass_inc + (ulong)(byte)this[0x185]);
    uVar30 = (~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                      ::png_pass_start + (ulong)(byte)this[0x185]) + uVar21 + uVar30
             ) / uVar30;
  }
  *(uint *)(this + 0x120) = uVar13;
  *(uint *)(this + 0x130) = uVar30;
  pVar9 = this[0x18a];
  if (((uVar25 & 4) != 0) && (pVar9 = (pnglibNamespace)0x8, 7 < (byte)this[0x188])) {
    pVar9 = this[0x18a];
  }
  uVar13 = (uint)(byte)pVar9;
  if ((uVar25 & 0x1000) == 0) {
    if ((uVar25 & 0x200) != 0) {
      uVar25 = uVar25 & 0xfffffdff;
      *(uint *)(this + 0x54) = uVar25;
    }
  }
  else {
    pVar36 = this[0x187];
    if (pVar36 == (pnglibNamespace)0x0) {
      uVar30 = 8;
      if (8 < (byte)pVar9) {
        uVar30 = uVar13;
      }
      uVar13 = uVar30 << (*(short *)(this + 0x180) != 0);
    }
    else if (pVar36 == (pnglibNamespace)0x2) {
      if (*(short *)(this + 0x180) != 0) {
        uVar13 = uVar13 * 0x2aaac >> 0x11;
      }
    }
    else if (pVar36 == (pnglibNamespace)0x3) {
      uVar13 = (uint)(*(short *)(this + 0x180) != 0) * 8 + 0x18;
    }
    if ((uVar25 & 0x200) != 0) {
      uVar13 = uVar13 << ((byte)this[0x188] < 0x10);
    }
  }
  if ((uVar25 & 0x8000) != 0) {
    if ((byte)((char)this[0x187] - 2U) < 2) {
      uVar13 = (uint)(0x20 < uVar13) * 0x20 + 0x20;
    }
    else if (this[0x187] == (pnglibNamespace)0x0) {
      uVar13 = (uint)(8 < uVar13) * 0x10 + 0x10;
    }
  }
  if ((uVar25 & 0x4000) != 0) {
    if ((((*(short *)(this + 0x180) != 0 & (byte)(uVar25 >> 0xc) & 1) == 0) &&
        ((uVar25 & 0x8000) == 0)) && (pVar9 = this[0x187], pVar9 != (pnglibNamespace)0x4)) {
      if (uVar13 < 9) {
        uVar13 = (uint)(pVar9 == (pnglibNamespace)0x6) * 8 + 0x18;
      }
      else {
        uVar13 = (uint)(pVar9 == (pnglibNamespace)0x6) * 0x10 + 0x30;
      }
    }
    else {
      uVar13 = (uint)(0x10 < uVar13) * 0x20 + 0x20;
    }
  }
  if ((uVar25 & 0x100000) != 0) {
    uVar25 = (uint)(byte)this[0x49] * (uint)(byte)this[0x48];
    if ((uint)(byte)this[0x49] * (uint)(byte)this[0x48] <= uVar13) {
      uVar25 = uVar13;
    }
    uVar13 = uVar25;
  }
  this[0x18e] = SUB41(uVar13,0);
  this[399] = (pnglibNamespace)0x0;
  uVar35 = (ulong)(uVar21 + 7 & 0xfffffff8);
  uVar31 = uVar13 * uVar35 >> 3;
  if (7 < uVar13) {
    uVar31 = (uVar13 >> 3) * uVar35;
  }
  uVar31 = (uVar13 + 7 >> 3) + uVar31 + 0x31;
  if (*(ulong *)(this + 0x350) < uVar31) {
    if (*(void **)(this + 0x2f8) != (void *)0x0) {
      free(*(void **)(this + 0x2f8));
    }
    if (*(void **)(this + 0x370) != (void *)0x0) {
      free(*(void **)(this + 0x370));
    }
    if (this[0x184] == (pnglibNamespace)0x0) {
      pvVar15 = malloc(uVar31);
    }
    else {
      pvVar15 = calloc(1,uVar31);
    }
    if (pvVar15 == (void *)0x0) goto LAB_003a9e87;
    *(void **)(this + 0x2f8) = pvVar15;
    pvVar16 = malloc(uVar31);
    if (pvVar16 == (void *)0x0) goto LAB_003a9e87;
    *(void **)(this + 0x370) = pvVar16;
    uVar35 = (long)pvVar15 + 0x20U & _UNK_005ddbc8;
    auVar49._8_4_ = 0xffffffff;
    auVar49._0_8_ = 0xffffffffffffffff;
    auVar49._12_4_ = 0xffffffff;
    *(ulong *)(this + 0x140) = ((long)pvVar16 + 0x20U & _DAT_005ddbc0) - 1;
    *(ulong *)(this + 0x148) = auVar49._8_8_ + uVar35;
    *(ulong *)(this + 0x350) = uVar31;
  }
  if (*(long *)(this + 0x128) != -1) {
    memset(*(void **)(this + 0x140),0,*(long *)(this + 0x128) + 1);
    pvVar15 = *(void **)(this + 0x358);
    if (pvVar15 != (void *)0x0) {
      *(undefined8 *)(this + 0x358) = 0;
      *(undefined8 *)(this + 0x360) = 0;
      free(pvVar15);
    }
    uVar31 = png_inflate_claim((long)this,0x49444154);
    if ((int)uVar31 == 0) {
      this[0x50] = (pnglibNamespace)((byte)this[0x50] | 0x40);
      return;
    }
  }
LAB_003a9e87:
                    /* WARNING: Subroutine does not return */
  png_err(this);
}


