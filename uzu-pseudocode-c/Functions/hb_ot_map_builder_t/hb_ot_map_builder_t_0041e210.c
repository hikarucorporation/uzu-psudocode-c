// Function : hb_ot_map_builder_t
// Namespace: hb_ot_map_builder_t
// Entry    : 0041e210
// Prototype: undefined hb_ot_map_builder_t(hb_ot_map_builder_t * this, long param_1, undefined8 * param_2, undefined8 param_3)
// Body     : 0041e210 - 00420da7


/* WARNING: Removing unreachable block (ram,0x0041f4c9) */
/* hb_ot_map_builder_t::hb_ot_map_builder_t(hb_face_t*, hb_segment_properties_t const&) */

void __thiscall
hb_ot_map_builder_t::hb_ot_map_builder_t
          (hb_ot_map_builder_t *this,long param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  size_t sVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  undefined7 uVar17;
  byte bVar18;
  int iVar19;
  ulong uVar20;
  byte bVar21;
  long lVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  char *pcVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  uint uVar32;
  ulong uVar33;
  byte bVar34;
  char cVar35;
  bool bVar36;
  bool bVar37;
  byte *local_80;
  undefined8 local_74;
  int local_6c;
  byte *local_68;
  uint local_60;
  undefined4 local_5c;
  long local_58;
  long local_50;
  ulong local_48;
  uint local_3c [3];
  
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(long *)this = param_1;
  uVar10 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)(this + 8) = *param_2;
  *(undefined8 *)(this + 0x10) = uVar10;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined8 *)(this + 0x20) = uVar4;
  uVar2 = *(uint *)(this + 0xc);
  local_80 = *(byte **)(this + 0x10);
  if (local_80 == (byte *)0x0) {
    local_60 = 3;
    uVar23 = 0;
    goto LAB_0041f56e;
  }
  bVar29 = *local_80;
  uVar23 = (uint)(char)bVar29;
  local_48 = (ulong)uVar23;
  local_68 = local_80 + 1;
  bVar34 = local_80[1];
  uVar17 = (undefined7)((ulong)param_3 >> 8);
  if ((uVar23 == 0x78) && (bVar34 == 0x2d)) {
    pbVar9 = (byte *)0x0;
    pbVar13 = local_80;
    if (local_80 != (byte *)0x0) goto LAB_0041e2ac;
LAB_0041eb2d:
    bVar34 = 1;
    local_60 = 3;
  }
  else {
    if (bVar34 != 0) {
      pbVar9 = local_80 + 2;
      pbVar13 = (byte *)0x0;
      pbVar8 = (byte *)0x0;
      do {
        if ((bVar29 == 0x2d) && (*pbVar9 == 0x2d)) {
          if (pbVar8 == (byte *)0x0) {
            pbVar8 = pbVar9 + -2;
          }
          if (bVar34 == 0x78) {
            pbVar13 = pbVar9 + -1;
            pbVar9 = pbVar13;
            goto LAB_0041eb13;
          }
        }
        bVar34 = *pbVar9;
        uVar17 = 0;
        if (bVar34 == 0) goto LAB_0041eb13;
        bVar29 = pbVar9[-1];
        pbVar9 = pbVar9 + 1;
      } while( true );
    }
    pbVar8 = (byte *)0x0;
    pbVar13 = (byte *)0x0;
    pbVar9 = local_68;
LAB_0041eb13:
    if (pbVar8 != (byte *)0x0) {
      pbVar9 = pbVar8;
    }
    if (pbVar13 == (byte *)0x0) goto LAB_0041eb2d;
LAB_0041e2ac:
    pcVar26 = "-hbsc";
    pbVar8 = pbVar13;
    pcVar7 = strstr((char *)pbVar13,"-hbsc");
    uVar23 = local_5c;
    if (pcVar7 == (char *)0x0) {
      local_60 = 3;
      uVar24 = 0;
    }
    else {
      bVar34 = pcVar7[5];
      if (bVar34 == 0x2d) {
        cVar1 = pcVar7[6];
        uVar10 = CONCAT71(uVar17,cVar1);
        bVar34 = cVar1 - 0x30;
        if (9 < bVar34) {
          local_60 = 3;
          uVar24 = 0;
          uVar23 = (int)uVar10 - 0x41;
          bVar34 = (byte)uVar23;
          if ((0x25 < bVar34) ||
             (pbVar8 = (byte *)0x0, (0x3f0000003fU >> ((ulong)(uVar23 & 0xff) & 0x3f) & 1) == 0))
          goto LAB_0041e73d;
          uVar23 = (int)uVar10 + 0x20;
          pcVar26 = (char *)(ulong)uVar23;
          uVar10 = 0;
          cVar35 = (char)uVar23;
          if (0x19 < bVar34) {
            cVar35 = cVar1;
          }
          bVar34 = cVar35 + 0xa9;
        }
        cVar1 = pcVar7[7];
        uVar10 = CONCAT71((int7)((ulong)uVar10 >> 8),cVar1);
        bVar29 = cVar1 - 0x30;
        if (9 < bVar29) {
          local_60 = 3;
          uVar24 = 0;
          uVar23 = (int)uVar10 - 0x41;
          bVar29 = (byte)uVar23;
          if ((0x25 < bVar29) ||
             (pbVar8 = (byte *)0x0, (0x3f0000003fU >> ((ulong)(uVar23 & 0xff) & 0x3f) & 1) == 0))
          goto LAB_0041e73d;
          uVar23 = (int)uVar10 + 0x20;
          pcVar26 = (char *)(ulong)uVar23;
          uVar10 = 0;
          cVar35 = (char)uVar23;
          if (0x19 < bVar29) {
            cVar35 = cVar1;
          }
          bVar29 = cVar35 + 0xa9;
        }
        cVar1 = pcVar7[8];
        uVar10 = CONCAT71((int7)((ulong)uVar10 >> 8),cVar1);
        bVar30 = cVar1 - 0x30;
        if (9 < bVar30) {
          local_60 = 3;
          uVar24 = 0;
          uVar23 = (int)uVar10 - 0x41;
          bVar30 = (byte)uVar23;
          if ((0x25 < bVar30) ||
             (pbVar8 = (byte *)0x0, (0x3f0000003fU >> ((ulong)(uVar23 & 0xff) & 0x3f) & 1) == 0))
          goto LAB_0041e73d;
          uVar23 = (int)uVar10 + 0x20;
          pcVar26 = (char *)(ulong)uVar23;
          uVar10 = 0;
          cVar35 = (char)uVar23;
          if (0x19 < bVar30) {
            cVar35 = cVar1;
          }
          bVar30 = cVar35 + 0xa9;
        }
        cVar1 = pcVar7[9];
        uVar10 = CONCAT71((int7)((ulong)uVar10 >> 8),cVar1);
        bVar31 = cVar1 - 0x30;
        if (9 < bVar31) {
          local_60 = 3;
          uVar24 = 0;
          uVar23 = (int)uVar10 - 0x41;
          bVar31 = (byte)uVar23;
          if ((0x25 < bVar31) ||
             (pbVar8 = (byte *)0x0, (0x3f0000003fU >> ((ulong)(uVar23 & 0xff) & 0x3f) & 1) == 0))
          goto LAB_0041e73d;
          uVar23 = (int)uVar10 + 0x20;
          pcVar26 = (char *)(ulong)uVar23;
          uVar10 = 0;
          cVar35 = (char)uVar23;
          if (0x19 < bVar31) {
            cVar35 = cVar1;
          }
          bVar31 = cVar35 + 0xa9;
        }
        cVar1 = pcVar7[10];
        uVar10 = CONCAT71((int7)((ulong)uVar10 >> 8),cVar1);
        bVar18 = cVar1 - 0x30;
        if (9 < bVar18) {
          local_60 = 3;
          uVar24 = 0;
          uVar23 = (int)uVar10 - 0x41;
          bVar18 = (byte)uVar23;
          if ((0x25 < bVar18) ||
             (pbVar8 = (byte *)0x0, (0x3f0000003fU >> ((ulong)(uVar23 & 0xff) & 0x3f) & 1) == 0))
          goto LAB_0041e73d;
          uVar23 = (int)uVar10 + 0x20;
          pcVar26 = (char *)(ulong)uVar23;
          uVar10 = 0;
          cVar35 = (char)uVar23;
          if (0x19 < bVar18) {
            cVar35 = cVar1;
          }
          bVar18 = cVar35 + 0xa9;
        }
        cVar1 = pcVar7[0xb];
        bVar21 = cVar1 - 0x30;
        if (9 < bVar21) {
          local_60 = 3;
          uVar24 = 0;
          iVar19 = (int)CONCAT71((int7)((ulong)uVar10 >> 8),cVar1);
          uVar23 = iVar19 - 0x41;
          pbVar8 = (byte *)(ulong)uVar23;
          if ((0x25 < (byte)uVar23) || ((0x3f0000003fU >> ((ulong)(uVar23 & 0xff) & 0x3f) & 1) == 0)
             ) goto LAB_0041e73d;
          uVar25 = iVar19 + 0x20;
          pcVar26 = (char *)(ulong)uVar25;
          cVar35 = (char)uVar25;
          if (0x19 < (byte)uVar23) {
            cVar35 = cVar1;
          }
          bVar21 = cVar35 + 0xa9;
        }
        cVar1 = pcVar7[0xc];
        bVar14 = cVar1 - 0x30;
        if (9 < bVar14) {
          local_60 = 3;
          uVar24 = 0;
          iVar19 = (int)CONCAT71((int7)((ulong)pbVar8 >> 8),cVar1);
          uVar23 = iVar19 - 0x41;
          bVar14 = (byte)uVar23;
          if ((0x25 < bVar14) ||
             (uVar24 = 0, (0x3f0000003fU >> ((ulong)(uVar23 & 0xff) & 0x3f) & 1) == 0))
          goto LAB_0041e73d;
          uVar23 = iVar19 + 0x20;
          pcVar26 = (char *)(ulong)uVar23;
          cVar35 = (char)uVar23;
          if (0x19 < bVar14) {
            cVar35 = cVar1;
          }
          bVar14 = cVar35 + 0xa9;
        }
        bVar15 = pcVar7[0xd];
        bVar27 = bVar15 - 0x30;
        if (bVar27 < 10) {
LAB_0041e566:
          uVar25 = (uint)(byte)(bVar31 + bVar30 * '\x10');
          bVar29 = bVar29 + bVar34 * '\x10';
          bVar30 = bVar21 + bVar18 * '\x10';
          bVar31 = bVar14 * '\x10' + bVar27;
          goto LAB_0041e6fa;
        }
        local_60 = 3;
        uVar24 = 0;
        bVar28 = (byte)(bVar15 - 0x41);
        if (bVar28 < 0x26) {
          pcVar26 = (char *)0x0;
          uVar24 = 0;
          if ((0x3f0000003fU >> ((ulong)(bVar15 - 0x41 & 0xff) & 0x3f) & 1) != 0) {
            bVar27 = bVar15 + 0x20;
            if (0x19 < bVar28) {
              bVar27 = bVar15;
            }
            bVar27 = bVar27 + 0xa9;
            goto LAB_0041e566;
          }
        }
      }
      else if (((byte)(bVar34 - 0x30) < 10) || ((byte)((bVar34 & 0xdf) + 0xbf) < 0x1a)) {
        bVar29 = bVar34 + 0x20;
        if (0x19 < (byte)(bVar34 + 0xbf)) {
          bVar29 = bVar34;
        }
        local_5c = CONCAT31(local_5c._1_3_,bVar29);
        bVar34 = pcVar7[6];
        if (((byte)(bVar34 - 0x30) < 10) ||
           (pcVar26 = (char *)0x1, (byte)((bVar34 & 0xdf) + 0xbf) < 0x1a)) {
          bVar30 = bVar34 + 0x20;
          if (0x19 < (byte)(bVar34 + 0xbf)) {
            bVar30 = bVar34;
          }
          uVar25 = (uint)bVar30;
          local_5c._2_2_ = SUB42(uVar23,2);
          local_5c._0_2_ = CONCAT11(bVar30,bVar29);
          bVar34 = pcVar7[7];
          if (((byte)(bVar34 - 0x30) < 10) ||
             (pcVar26 = (char *)0x2, (byte)((bVar34 & 0xdf) + 0xbf) < 0x1a)) {
            pcVar26 = (char *)(ulong)(bVar34 + 0x20);
            bVar30 = (byte)(bVar34 + 0x20);
            if (0x19 < (byte)(bVar34 + 0xbf)) {
              bVar30 = bVar34;
            }
            local_5c._3_1_ = SUB41(uVar23,3);
            local_5c._0_3_ = CONCAT12(bVar30,(undefined2)local_5c);
            bVar34 = pcVar7[8];
            if (((byte)(bVar34 - 0x30) < 10) ||
               (pcVar26 = (char *)0x3, (byte)((bVar34 & 0xdf) + 0xbf) < 0x1a)) {
              bVar31 = bVar34 + 0x20;
              if (0x19 < (byte)(bVar34 + 0xbf)) {
                bVar31 = bVar34;
              }
              goto LAB_0041e6fa;
            }
          }
        }
        iVar19 = (int)pcVar26;
        pcVar7 = pcVar26 + -0x20;
        pcVar26 = (char *)0x0;
        memset((char *)((long)local_3c + (long)pcVar7),0x20,(ulong)(4 - iVar19));
        uVar25 = local_5c >> 8 & 0xff;
        bVar29 = (byte)local_5c;
        bVar30 = local_5c._2_1_;
        bVar31 = local_5c._3_1_;
LAB_0041e6fa:
        uVar23 = (uint)bVar31 | (uint)bVar30 << 8 | uVar25 << 0x10 | (uint)bVar29 << 0x18;
        local_3c[0] = uVar23 ^ 0x20202020;
        if ((uVar23 & 0xdfdfdfdf) != 0x44464c54) {
          local_3c[0] = uVar23;
        }
        uVar24 = (undefined4)CONCAT71((int7)((ulong)pcVar26 >> 8),1);
        local_60 = 1;
      }
      else {
        uVar24 = 0;
        local_60 = 3;
      }
    }
LAB_0041e73d:
    local_50 = CONCAT44(local_50._4_4_,uVar24);
    bVar34 = (byte)uVar24 ^ 1;
    pcVar26 = strstr((char *)pbVar13,"-hbot");
    uVar23 = local_5c;
    if (pcVar26 != (char *)0x0) {
      bVar29 = pcVar26[5];
      if (bVar29 == 0x2d) {
        bVar29 = pcVar26[6];
        bVar30 = bVar29 - 0x30;
        if (9 < bVar30) {
          bVar31 = (byte)(bVar29 - 0x41);
          if ((0x25 < bVar31) ||
             ((0x3f0000003fU >> ((ulong)(bVar29 - 0x41 & 0xff) & 0x3f) & 1) == 0))
          goto LAB_0041e9d7;
          bVar30 = bVar29 + 0x20;
          if (0x19 < bVar31) {
            bVar30 = bVar29;
          }
          bVar30 = bVar30 + 0xa9;
        }
        cVar1 = pcVar26[7];
        bVar29 = cVar1 - 0x30;
        if (9 < bVar29) {
          bVar29 = cVar1 + 0xbf;
          if ((0x25 < bVar29) || ((0x3f0000003fU >> ((ulong)bVar29 & 0x3f) & 1) == 0))
          goto LAB_0041e9d7;
          cVar35 = cVar1 + ' ';
          if (0x19 < bVar29) {
            cVar35 = cVar1;
          }
          bVar29 = cVar35 + 0xa9;
        }
        cVar1 = pcVar26[8];
        bVar31 = cVar1 - 0x30;
        if (9 < bVar31) {
          bVar31 = cVar1 + 0xbf;
          if ((0x25 < bVar31) || ((0x3f0000003fU >> ((ulong)bVar31 & 0x3f) & 1) == 0))
          goto LAB_0041e9d7;
          cVar35 = cVar1 + ' ';
          if (0x19 < bVar31) {
            cVar35 = cVar1;
          }
          bVar31 = cVar35 + 0xa9;
        }
        cVar1 = pcVar26[9];
        bVar18 = cVar1 - 0x30;
        if (9 < bVar18) {
          bVar18 = cVar1 + 0xbf;
          if ((0x25 < bVar18) || ((0x3f0000003fU >> ((ulong)bVar18 & 0x3f) & 1) == 0))
          goto LAB_0041e9d7;
          cVar35 = cVar1 + ' ';
          if (0x19 < bVar18) {
            cVar35 = cVar1;
          }
          bVar18 = cVar35 + 0xa9;
        }
        cVar1 = pcVar26[10];
        bVar21 = cVar1 - 0x30;
        if (9 < bVar21) {
          bVar21 = cVar1 + 0xbf;
          if ((0x25 < bVar21) || ((0x3f0000003fU >> ((ulong)bVar21 & 0x3f) & 1) == 0))
          goto LAB_0041e9d7;
          cVar35 = cVar1 + ' ';
          if (0x19 < bVar21) {
            cVar35 = cVar1;
          }
          bVar21 = cVar35 + 0xa9;
        }
        cVar1 = pcVar26[0xb];
        bVar14 = cVar1 - 0x30;
        if (9 < bVar14) {
          bVar14 = cVar1 + 0xbf;
          if ((0x25 < bVar14) || ((0x3f0000003fU >> ((ulong)bVar14 & 0x3f) & 1) == 0))
          goto LAB_0041e9d7;
          cVar35 = cVar1 + ' ';
          if (0x19 < bVar14) {
            cVar35 = cVar1;
          }
          bVar14 = cVar35 + 0xa9;
        }
        cVar1 = pcVar26[0xc];
        bVar15 = cVar1 - 0x30;
        if (9 < bVar15) {
          bVar15 = cVar1 + 0xbf;
          if ((0x25 < bVar15) || ((0x3f0000003fU >> ((ulong)bVar15 & 0x3f) & 1) == 0))
          goto LAB_0041e9d7;
          cVar35 = cVar1 + ' ';
          if (0x19 < bVar15) {
            cVar35 = cVar1;
          }
          bVar15 = cVar35 + 0xa9;
        }
        cVar1 = pcVar26[0xd];
        bVar27 = cVar1 - 0x30;
        if (9 < bVar27) {
          bVar27 = cVar1 + 0xbf;
          if ((0x25 < bVar27) || ((0x3f0000003fU >> ((ulong)bVar27 & 0x3f) & 1) == 0))
          goto LAB_0041e9d7;
          cVar35 = cVar1 + ' ';
          if (0x19 < bVar27) {
            cVar35 = cVar1;
          }
          bVar27 = cVar35 + 0xa9;
        }
        bVar34 = bVar29 + bVar30 * '\x10';
        bVar30 = bVar18 + bVar31 * '\x10';
        bVar31 = bVar14 + bVar21 * '\x10';
        bVar18 = bVar15 * '\x10' + bVar27;
      }
      else {
        if ((9 < (byte)(bVar29 - 0x30)) && (0x19 < (byte)((bVar29 & 0xdf) + 0xbf)))
        goto LAB_0041e9d7;
        bVar34 = bVar29 - 0x20;
        if (0x19 < (byte)(bVar29 + 0x9f)) {
          bVar34 = bVar29;
        }
        local_5c = CONCAT31(local_5c._1_3_,bVar34);
        bVar29 = pcVar26[6];
        if (((byte)(bVar29 - 0x30) < 10) || (lVar22 = 1, (byte)((bVar29 & 0xdf) + 0xbf) < 0x1a)) {
          bVar30 = bVar29 - 0x20;
          if (0x19 < (byte)(bVar29 + 0x9f)) {
            bVar30 = bVar29;
          }
          local_5c._2_2_ = SUB42(uVar23,2);
          local_5c._0_2_ = CONCAT11(bVar30,bVar34);
          bVar29 = pcVar26[7];
          if (((byte)(bVar29 - 0x30) < 10) || (lVar22 = 2, (byte)((bVar29 & 0xdf) + 0xbf) < 0x1a)) {
            bVar31 = bVar29 - 0x20;
            if (0x19 < (byte)(bVar29 + 0x9f)) {
              bVar31 = bVar29;
            }
            local_5c._3_1_ = SUB41(uVar23,3);
            local_5c._0_3_ = CONCAT12(bVar31,(undefined2)local_5c);
            bVar29 = pcVar26[8];
            if (((byte)(bVar29 - 0x30) < 10) || (lVar22 = 3, (byte)((bVar29 & 0xdf) + 0xbf) < 0x1a))
            {
              bVar18 = bVar29 - 0x20;
              if (0x19 < (byte)(bVar29 + 0x9f)) {
                bVar18 = bVar29;
              }
              goto LAB_0041eabb;
            }
          }
        }
        memset((void *)((long)local_3c + lVar22 + -0x20),0x20,(ulong)(4 - (int)lVar22));
        bVar34 = (byte)local_5c;
        bVar30 = local_5c._1_1_;
        bVar31 = local_5c._2_1_;
        bVar18 = local_5c._3_1_;
      }
LAB_0041eabb:
      uVar25 = (uint)bVar18 | (uint)bVar31 << 8 | (uint)bVar30 << 0x10 | (uint)bVar34 << 0x18;
      uVar23 = uVar25 ^ 0x20202020;
      if ((uVar25 & 0xdfdfdfdf) != 0x44464c54) {
        uVar23 = uVar25;
      }
      local_74 = CONCAT44(local_74._4_4_,uVar23);
      uVar23 = 1;
      if ((char)local_50 != '\0') goto LAB_0041f6da;
      goto LAB_0041f56e;
    }
LAB_0041e9d7:
    uVar23 = (uint)local_48;
  }
  local_50 = (long)pbVar9 - (long)local_80;
  if (6 < local_50) {
    pbVar8 = (byte *)strchr((char *)local_80,0x2d);
    uVar23 = (uint)local_48;
    if (((pbVar8 != (byte *)0x0) && (pbVar8 < pbVar9)) &&
       (uVar33 = (long)pbVar9 - (long)pbVar8, 4 < (long)uVar33)) {
      if ((uVar33 & 0xfffffff8) == 0) {
LAB_0041eb8a:
        if (6 < (uint)uVar33) {
          pbVar13 = pbVar8;
          do {
            pbVar12 = (byte *)strstr((char *)pbVar13,"-fonipa");
            uVar23 = (uint)local_48;
            if ((pbVar12 == (byte *)0x0) || (pbVar9 <= pbVar12)) goto LAB_0041eb93;
            pbVar13 = pbVar12 + 7;
          } while (((byte)(pbVar12[7] - 0x30) < 10) || ((byte)((pbVar12[7] & 0xdf) + 0xbf) < 0x1a));
          local_74 = CONCAT44(local_74._4_4_,0x49505048);
          goto LAB_0041f31b;
        }
LAB_0041eb93:
        if ((uint)uVar33 < 5) goto LAB_0041eb9c;
        pbVar13 = pbVar8;
        local_58 = param_1;
        do {
          pbVar12 = (byte *)strstr((char *)pbVar13,"-geok");
          if ((pbVar12 == (byte *)0x0) || (pbVar9 <= pbVar12)) {
            pbVar13 = pbVar8;
            goto LAB_0041fbcb;
          }
          pbVar13 = pbVar12 + 5;
        } while (((byte)(pbVar12[5] - 0x30) < 10) || ((byte)((pbVar12[5] & 0xdf) + 0xbf) < 0x1a));
        local_74 = CONCAT44(local_74._4_4_,0x4b474520);
      }
      else {
        pbVar13 = pbVar8;
        local_58 = param_1;
        do {
          pbVar12 = (byte *)strstr((char *)pbVar13,"-fonnapa");
          if ((pbVar12 == (byte *)0x0) || (pbVar9 <= pbVar12)) {
            pbVar13 = pbVar8;
            goto LAB_0041fb7c;
          }
          pbVar13 = pbVar12 + 8;
        } while (((byte)(pbVar12[8] - 0x30) < 10) || ((byte)((pbVar12[8] & 0xdf) + 0xbf) < 0x1a));
        local_74 = CONCAT44(local_74._4_4_,0x41505048);
      }
      goto LAB_004204c8;
    }
  }
LAB_0041eb9c:
  pbVar8 = local_68;
  iVar19 = (int)pbVar9;
  iVar16 = (int)local_68;
  switch(uVar23) {
  case 0x61:
    iVar16 = strcmp((char *)local_68,"rt-lojban");
    if (iVar16 == 0) {
      local_74 = CONCAT44(local_74._4_4_,0x4a424f20);
      goto LAB_0041f31b;
    }
    break;
  case 99:
    if ((uint)(iVar19 - iVar16) < 10) {
      if ((uint)(iVar19 - iVar16) < 7) {
LAB_0041ebfd:
        iVar16 = strncmp((char *)pbVar8,"do-",3);
        if (iVar16 != 0) {
LAB_0041ec22:
          iVar16 = strncmp((char *)pbVar8,"jy-",3);
          if (iVar16 != 0) {
LAB_0041ec3e:
            iVar16 = strncmp((char *)pbVar8,"mn-",3);
            if (iVar16 == 0) {
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-hk");
              if (bVar36) goto LAB_0041f8d8;
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-mo");
              if (bVar36) goto LAB_0041f93e;
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-tw");
              pbVar8 = local_68;
              if (bVar36) goto LAB_0041f9d2;
            }
            iVar16 = strncmp((char *)pbVar8,"np-",3);
            if (iVar16 == 0) {
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-hk");
              if (bVar36) goto LAB_0041f8d8;
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-mo");
              if (bVar36) goto LAB_0041f93e;
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-tw");
              pbVar8 = local_68;
              if (bVar36) goto LAB_0041f9d2;
            }
            iVar16 = strncmp((char *)pbVar8,"px-",3);
            if (iVar16 == 0) {
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-hk");
              if (bVar36) goto LAB_0041f8d8;
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-mo");
              if (bVar36) goto LAB_0041f93e;
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-tw");
              pbVar8 = local_68;
              if (bVar36) goto LAB_0041f9d2;
            }
            iVar16 = strncmp((char *)pbVar8,"sp-",3);
            if (iVar16 == 0) {
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-hk");
              if (bVar36) goto LAB_0041f8d8;
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-mo");
              if (bVar36) goto LAB_0041f93e;
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-tw");
              pbVar8 = local_68;
              if (bVar36) goto LAB_0041f9d2;
            }
            iVar16 = strncmp((char *)pbVar8,"zh-",3);
            if (iVar16 != 0) {
LAB_0041ecca:
              pcVar26 = "zo-";
              sVar11 = 3;
              goto LAB_0041f0c4;
            }
            bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-hk");
            if (bVar36) {
              local_74 = CONCAT44(local_74._4_4_,0x5a484820);
              uVar23 = 1;
            }
            else {
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-mo");
              if (!bVar36) {
                bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-tw");
                pbVar8 = local_68;
                if (bVar36) goto LAB_0041f9d2;
                goto LAB_0041ecca;
              }
              local_74 = 0x5a4848205a48544d;
              uVar23 = 2;
            }
            goto joined_r0x0041f32f;
          }
          bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-hk");
          if (!bVar36) {
            bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-mo");
            if (!bVar36) {
              bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-tw");
              pbVar8 = local_68;
              if (bVar36) goto LAB_0041f9d2;
              goto LAB_0041ec3e;
            }
LAB_0041f93e:
            local_74 = 0x5a4848205a48544d;
            uVar23 = 2;
            goto joined_r0x0041f32f;
          }
LAB_0041f8d8:
          local_74 = CONCAT44(local_74._4_4_,0x5a484820);
          goto LAB_0041f9da;
        }
        if (2 < (uint)local_50) {
          pbVar8 = local_80;
          do {
            pbVar13 = (byte *)strstr((char *)pbVar8,"-hk");
            if ((pbVar13 == (byte *)0x0) || (pbVar9 <= pbVar13)) goto LAB_0041f217;
            pbVar8 = pbVar13 + 3;
          } while (((byte)(pbVar13[3] - 0x30) < 10) || ((byte)((pbVar13[3] & 0xdf) + 0xbf) < 0x1a));
          goto LAB_0041f0f3;
        }
LAB_0041f217:
        bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-mo");
        if (bVar36) goto LAB_0041f2e0;
        bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-tw");
        pbVar8 = local_68;
        if (!bVar36) goto LAB_0041ec22;
LAB_0041f9d2:
        local_74 = CONCAT44(local_74._4_4_,0x5a485420);
        goto LAB_0041f9da;
      }
LAB_0041fdfe:
      iVar16 = strncmp((char *)pbVar8,"do-hans",7);
      if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) {
        iVar16 = strncmp((char *)local_68,"do-hant",7);
        if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) {
          iVar16 = strncmp((char *)local_68,"jy-hans",7);
          if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) {
            iVar16 = strncmp((char *)local_68,"jy-hant",7);
            if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0)))) goto LAB_00420d3a;
            iVar16 = strncmp((char *)local_68,"mn-hans",7);
            if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) {
              iVar16 = strncmp((char *)local_68,"mn-hant",7);
              if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0)))) goto LAB_00420d3a;
              iVar16 = strncmp((char *)local_68,"np-hans",7);
              if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) {
                iVar16 = strncmp((char *)local_68,"np-hant",7);
                if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0))))
                goto LAB_00420d3a;
                iVar16 = strncmp((char *)local_68,"px-hans",7);
                if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) {
                  iVar16 = strncmp((char *)local_68,"px-hant",7);
                  if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0))))
                  goto LAB_00420d3a;
                  iVar16 = strncmp((char *)local_68,"sp-hans",7);
                  if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) {
                    iVar16 = strncmp((char *)local_68,"sp-hant",7);
                    if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0))))
                    goto LAB_00420d3a;
                    iVar16 = strncmp((char *)local_68,"zh-hans",7);
                    if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) {
                      iVar16 = strncmp((char *)local_68,"zh-hant",7);
                      if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0))))
                      goto LAB_00420d3a;
                      iVar16 = strncmp((char *)local_68,"zo-hans",7);
                      pbVar8 = local_68;
                      if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) {
                        iVar16 = strncmp((char *)local_68,"zo-hant",7);
                        if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0))))
                        goto LAB_0041ebfd;
                        goto LAB_0041f313;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_00420d76;
        }
LAB_00420d3a:
        local_74 = CONCAT44(local_74._4_4_,0x5a485420);
        goto LAB_00420d7e;
      }
LAB_00420d76:
      local_74 = CONCAT44(local_74._4_4_,0x5a485320);
LAB_00420d7e:
      uVar23 = 1;
    }
    else {
      iVar16 = strncmp((char *)local_68,"do-hant-hk",10);
      if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0)))) {
LAB_00420d58:
        local_74 = CONCAT44(local_74._4_4_,0x5a484820);
        goto LAB_00420d7e;
      }
      iVar16 = strncmp((char *)local_68,"do-hant-mo",10);
      if ((iVar16 != 0) || ((local_80[0xb] != 0x2d && (local_80[0xb] != 0)))) {
        iVar16 = strncmp((char *)local_68,"jy-hant-hk",10);
        if ((iVar16 != 0) || ((local_80[0xb] != 0x2d && (local_80[0xb] != 0)))) {
          iVar16 = strncmp((char *)local_68,"jy-hant-mo",10);
          if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0)))) goto LAB_00420d0a;
          iVar16 = strncmp((char *)local_68,"mn-hant-hk",10);
          if ((iVar16 != 0) || ((local_80[0xb] != 0x2d && (local_80[0xb] != 0)))) {
            iVar16 = strncmp((char *)local_68,"mn-hant-mo",10);
            if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0))))
            goto LAB_00420d0a;
            iVar16 = strncmp((char *)local_68,"np-hant-hk",10);
            if ((iVar16 != 0) || ((local_80[0xb] != 0x2d && (local_80[0xb] != 0)))) {
              iVar16 = strncmp((char *)local_68,"np-hant-mo",10);
              if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0))))
              goto LAB_00420d0a;
              iVar16 = strncmp((char *)local_68,"px-hant-hk",10);
              if ((iVar16 != 0) || ((local_80[0xb] != 0x2d && (local_80[0xb] != 0)))) {
                iVar16 = strncmp((char *)local_68,"px-hant-mo",10);
                if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0))))
                goto LAB_00420d0a;
                iVar16 = strncmp((char *)local_68,"sp-hant-hk",10);
                if ((iVar16 != 0) || ((local_80[0xb] != 0x2d && (local_80[0xb] != 0)))) {
                  iVar16 = strncmp((char *)local_68,"sp-hant-mo",10);
                  if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0))))
                  goto LAB_00420d0a;
                  iVar16 = strncmp((char *)local_68,"zh-hant-hk",10);
                  if ((iVar16 != 0) || ((local_80[0xb] != 0x2d && (local_80[0xb] != 0)))) {
                    iVar16 = strncmp((char *)local_68,"zh-hant-mo",10);
                    if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0))))
                    goto LAB_00420d0a;
                    iVar16 = strncmp((char *)local_68,"zo-hant-hk",10);
                    pbVar8 = local_68;
                    if ((iVar16 != 0) || ((local_80[0xb] != 0x2d && (local_80[0xb] != 0)))) {
                      iVar16 = strncmp((char *)local_68,"zo-hant-mo",10);
                      if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0))))
                      goto LAB_0041f2e0;
                      goto LAB_0041fdfe;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_00420d58;
      }
LAB_00420d0a:
      local_74 = 0x5a4848205a48544d;
      uVar23 = 2;
    }
    goto joined_r0x0041f32f;
  case 0x67:
    uVar23 = iVar19 - iVar16;
    if (uVar23 < 10) {
      if (6 < uVar23) {
LAB_0042004a:
        iVar16 = strncmp((char *)pbVar8,"an-hans",7);
        pbVar8 = local_68;
        if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0)))) goto LAB_00420d76;
        iVar16 = strncmp((char *)local_68,"an-hant",7);
        if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) goto LAB_0042008d;
        goto LAB_0041f313;
      }
      if (uVar23 == 6) {
LAB_0042008d:
        iVar16 = strncmp((char *)pbVar8,"a-latg",6);
        if ((iVar16 == 0) && ((local_80[7] == 0x2d || (local_80[7] == 0)))) {
          local_74 = CONCAT44(local_74._4_4_,0x49525420);
          goto LAB_0041f31b;
        }
      }
      iVar16 = strncmp((char *)pbVar8,"an-",3);
      if (iVar16 != 0) break;
      if (2 < (uint)local_50) {
        pbVar8 = local_80;
        do {
          pbVar13 = (byte *)strstr((char *)pbVar8,"-hk");
          if ((pbVar13 == (byte *)0x0) || (pbVar9 <= pbVar13)) goto LAB_0041f006;
          pbVar8 = pbVar13 + 3;
        } while (((byte)(pbVar13[3] - 0x30) < 10) || ((byte)((pbVar13[3] & 0xdf) + 0xbf) < 0x1a));
        goto LAB_0041f0f3;
      }
LAB_0041f006:
      bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-mo");
      if (!bVar36) goto LAB_0041f2fa;
    }
    else {
      iVar16 = strncmp((char *)local_68,"an-hant-hk",10);
      pbVar8 = local_68;
      if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0)))) goto LAB_00420d58;
      iVar16 = strncmp((char *)local_68,"an-hant-mo",10);
      if ((iVar16 != 0) || ((local_80[0xb] != 0x2d && (local_80[0xb] != 0)))) goto LAB_0042004a;
    }
LAB_0041f2e0:
    local_74 = 0x5a4848205a48544d;
    goto LAB_0041f2ea;
  case 0x68:
    if (9 < (uint)(iVar19 - iVar16)) {
      iVar16 = strncmp((char *)local_68,"ak-hant-hk",10);
      if ((iVar16 != 0) || ((local_80[0xb] != 0x2d && (local_80[0xb] != 0)))) {
        iVar16 = strncmp((char *)local_68,"ak-hant-mo",10);
        if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0)))) goto LAB_00420d0a;
        iVar16 = strncmp((char *)local_68,"sn-hant-hk",10);
        pbVar8 = local_68;
        if ((iVar16 != 0) || ((local_80[0xb] != 0x2d && (local_80[0xb] != 0)))) {
          iVar16 = strncmp((char *)local_68,"sn-hant-mo",10);
          if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0)))) goto LAB_0041f2e0;
          goto LAB_00420149;
        }
      }
      goto LAB_00420d58;
    }
    if (6 < (uint)(iVar19 - iVar16)) {
LAB_00420149:
      iVar16 = strncmp((char *)pbVar8,"ak-hans",7);
      if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) {
        iVar16 = strncmp((char *)local_68,"ak-hant",7);
        if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0)))) goto LAB_00420d3a;
        iVar16 = strncmp((char *)local_68,"sn-hans",7);
        pbVar8 = local_68;
        if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) {
          iVar16 = strncmp((char *)local_68,"sn-hant",7);
          if ((iVar16 != 0) || ((local_80[8] != 0x2d && (local_80[8] != 0)))) goto LAB_0041ed8d;
          goto LAB_0041f313;
        }
      }
      goto LAB_00420d76;
    }
LAB_0041ed8d:
    iVar16 = strncmp((char *)pbVar8,"ak-",3);
    if (iVar16 == 0) {
      if (2 < (uint)local_50) {
        pbVar8 = local_80;
        do {
          pbVar13 = (byte *)strstr((char *)pbVar8,"-hk");
          if ((pbVar13 == (byte *)0x0) || (pbVar9 <= pbVar13)) goto LAB_0041f1c9;
          pbVar8 = pbVar13 + 3;
        } while (((byte)(pbVar13[3] - 0x30) < 10) || ((byte)((pbVar13[3] & 0xdf) + 0xbf) < 0x1a));
        goto LAB_0041f0f3;
      }
LAB_0041f1c9:
      bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-mo");
      if (bVar36) goto LAB_0041f2e0;
      bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-tw");
      pbVar8 = local_68;
      if (bVar36) goto LAB_0041f313;
    }
    iVar16 = strncmp((char *)pbVar8,"sn-",3);
    if (iVar16 != 0) break;
LAB_0041f0d9:
    bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-hk");
    if (bVar36) {
LAB_0041f0f3:
      local_74 = CONCAT44(local_74._4_4_,0x5a484820);
    }
    else {
      bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-mo");
      if (bVar36) goto LAB_0041f2e0;
LAB_0041f2fa:
      bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-tw");
      if (!bVar36) break;
LAB_0041f313:
      local_74 = CONCAT44(local_74._4_4_,0x5a485420);
    }
    goto LAB_0041f31b;
  case 0x69:
    iVar16 = strcmp((char *)local_68,"-navajo");
    if (iVar16 != 0) {
      iVar16 = strcmp((char *)pbVar8,"-hak");
      if (iVar16 != 0) {
        iVar16 = strcmp((char *)pbVar8,"-lux");
        if (iVar16 == 0) {
          local_74 = CONCAT44(local_74._4_4_,0x4c545a20);
          goto LAB_0041f31b;
        }
        break;
      }
LAB_0041f063:
      local_74 = CONCAT44(local_74._4_4_,0x5a485320);
      goto LAB_0041f31b;
    }
    local_74 = 0x415448204e415620;
LAB_0041f2ea:
    uVar23 = 2;
    goto joined_r0x0041f32f;
  case 0x6c:
    if (6 < (uint)(iVar19 - iVar16)) {
      pcVar26 = "zh-hans";
LAB_0041f03a:
      iVar16 = strncmp((char *)local_68,pcVar26,7);
      if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0)))) goto LAB_0041f063;
    }
    break;
  case 0x6d:
    if ((uint)(iVar19 - iVar16) < 10) {
      if (6 < (uint)(iVar19 - iVar16)) goto LAB_00420228;
    }
    else {
      iVar16 = strncmp((char *)local_68,"np-hant-hk",10);
      pbVar8 = local_68;
      if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0)))) goto LAB_00420d58;
      iVar16 = strncmp((char *)local_68,"np-hant-mo",10);
      if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0)))) goto LAB_0041f2e0;
LAB_00420228:
      iVar16 = strncmp((char *)pbVar8,"np-hans",7);
      pbVar8 = local_68;
      if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0)))) goto LAB_00420d76;
      iVar16 = strncmp((char *)local_68,"np-hant",7);
      if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0)))) goto LAB_0041f313;
    }
    iVar16 = strncmp((char *)pbVar8,"np-",3);
    if (iVar16 == 0) {
      if (2 < (uint)local_50) {
        pbVar8 = local_80;
        do {
          pbVar13 = (byte *)strstr((char *)pbVar8,"-hk");
          if ((pbVar13 == (byte *)0x0) || (pbVar9 <= pbVar13)) goto LAB_0041f127;
          pbVar8 = pbVar13 + 3;
        } while (((byte)(pbVar13[3] - 0x30) < 10) || ((byte)((pbVar13[3] & 0xdf) + 0xbf) < 0x1a));
        goto LAB_0041f0f3;
      }
LAB_0041f127:
      bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-mo");
      if (bVar36) goto LAB_0041f2e0;
      bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-tw");
      pbVar8 = local_68;
      if (bVar36) goto LAB_0041f313;
    }
    iVar16 = strncmp((char *)pbVar8,"nw-",3);
    if ((iVar16 == 0) && (bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-th"), bVar36)) {
      local_74 = CONCAT44(local_74._4_4_,0x4d4f4e54);
      goto LAB_0041f31b;
    }
    break;
  case 0x6e:
    if ((uint)(iVar19 - iVar16) < 10) {
      if (6 < (uint)(iVar19 - iVar16)) goto LAB_004202cb;
    }
    else {
      iVar16 = strncmp((char *)local_68,"an-hant-hk",10);
      pbVar8 = local_68;
      if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0)))) goto LAB_00420d58;
      iVar16 = strncmp((char *)local_68,"an-hant-mo",10);
      if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0)))) goto LAB_0041f2e0;
LAB_004202cb:
      iVar16 = strncmp((char *)pbVar8,"an-hans",7);
      pbVar8 = local_68;
      if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0)))) goto LAB_00420d76;
      iVar16 = strncmp((char *)local_68,"an-hant",7);
      if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0)))) goto LAB_0041f313;
    }
    iVar16 = strncmp((char *)pbVar8,"an-",3);
    if (iVar16 == 0) {
      if (2 < (uint)local_50) {
        pbVar8 = local_80;
        do {
          pbVar13 = (byte *)strstr((char *)pbVar8,"-hk");
          if ((pbVar13 == (byte *)0x0) || (pbVar9 <= pbVar13)) goto LAB_0041f175;
          pbVar8 = pbVar13 + 3;
        } while (((byte)(pbVar13[3] - 0x30) < 10) || ((byte)((pbVar13[3] & 0xdf) + 0xbf) < 0x1a));
        goto LAB_0041f0f3;
      }
LAB_0041f175:
      bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-mo");
      if (bVar36) goto LAB_0041f2e0;
      bVar36 = subtag_matches((char *)local_80,(char *)pbVar9,"-tw");
      pbVar8 = local_68;
      if (bVar36) goto LAB_0041f9d2;
    }
    iVar16 = strcmp((char *)pbVar8,"o-bok");
    if (iVar16 == 0) {
      local_74 = CONCAT44(local_74._4_4_,0x4e4f5220);
      goto LAB_0041f9da;
    }
    iVar16 = strcmp((char *)pbVar8,"o-nyn");
    if (iVar16 == 0) {
      local_74 = CONCAT44(local_74._4_4_,0x4e594e20);
      goto LAB_0041f31b;
    }
    break;
  case 0x72:
    iVar16 = strncmp((char *)local_68,"o-",2);
    if ((2 < (uint)local_50) && (iVar16 == 0)) {
      pbVar8 = local_80;
      do {
        pbVar13 = (byte *)strstr((char *)pbVar8,"-md");
        if ((pbVar13 == (byte *)0x0) || (pbVar9 <= pbVar13)) goto switchD_0041ebbb_caseD_62;
        pbVar8 = pbVar13 + 3;
      } while (((byte)(pbVar13[3] - 0x30) < 10) || ((byte)((pbVar13[3] & 0xdf) + 0xbf) < 0x1a));
      local_74 = 0x524f4d204d4f4c20;
      goto LAB_0041f2ea;
    }
    break;
  case 0x77:
    if ((uint)(iVar19 - iVar16) < 10) {
      if (6 < (uint)(iVar19 - iVar16)) goto LAB_0042036e;
    }
    else {
      iVar16 = strncmp((char *)local_68,"uu-hant-hk",10);
      pbVar8 = local_68;
      if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0)))) goto LAB_00420d58;
      iVar16 = strncmp((char *)local_68,"uu-hant-mo",10);
      if ((iVar16 == 0) && ((local_80[0xb] == 0x2d || (local_80[0xb] == 0)))) goto LAB_0041f2e0;
LAB_0042036e:
      iVar16 = strncmp((char *)pbVar8,"uu-hans",7);
      pbVar8 = local_68;
      if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0)))) goto LAB_00420d76;
      iVar16 = strncmp((char *)local_68,"uu-hant",7);
      if ((iVar16 == 0) && ((local_80[8] == 0x2d || (local_80[8] == 0)))) goto LAB_0041f313;
    }
    iVar16 = strncmp((char *)pbVar8,"uu-",3);
    if (iVar16 == 0) {
      if ((uint)local_50 < 3) goto LAB_0041f006;
      pbVar8 = local_80;
      do {
        pbVar13 = (byte *)strstr((char *)pbVar8,"-hk");
        if ((pbVar13 == (byte *)0x0) || (pbVar9 <= pbVar13)) goto LAB_0041f006;
        pbVar8 = pbVar13 + 3;
      } while (((byte)(pbVar13[3] - 0x30) < 10) || ((byte)((pbVar13[3] & 0xdf) + 0xbf) < 0x1a));
      goto LAB_0041f0f3;
    }
    break;
  case 0x79:
    if (6 < (uint)(iVar19 - iVar16)) {
      pcVar26 = "ue-hans";
      goto LAB_0041f03a;
    }
    break;
  case 0x7a:
    if (8 < (uint)(iVar19 - iVar16)) {
      iVar5 = strncmp((char *)local_68,"h-hant-hk",9);
      pbVar8 = local_68;
      if ((iVar5 == 0) && ((local_80[10] == 0x2d || (local_80[10] == 0)))) {
        local_74 = CONCAT44(local_74._4_4_,0x5a484820);
        uVar23 = 1;
        goto joined_r0x0041f32f;
      }
      iVar5 = strncmp((char *)local_68,"h-hant-mo",9);
      if ((iVar5 == 0) && ((local_80[10] == 0x2d || (local_80[10] == 0)))) goto LAB_0041f2e0;
    }
    iVar5 = strcmp((char *)pbVar8,"h-min-nan");
    if (iVar5 != 0) {
      if (5 < (uint)(iVar19 - iVar16)) {
        iVar16 = strncmp((char *)local_68,"h-hans",6);
        if ((iVar16 == 0) && ((local_80[7] == 0x2d || (local_80[7] == 0)))) goto LAB_00420d76;
        iVar16 = strncmp((char *)local_68,"h-hant",6);
        if ((iVar16 == 0) && ((local_80[7] == 0x2d || (local_80[7] == 0)))) goto LAB_0041f9d2;
      }
      pbVar8 = local_68;
      iVar16 = strcmp((char *)local_68,"h-min");
      if (iVar16 != 0) {
        pcVar26 = "h-";
        sVar11 = 2;
LAB_0041f0c4:
        iVar16 = strncmp((char *)pbVar8,pcVar26,sVar11);
        if (iVar16 == 0) goto LAB_0041f0d9;
        break;
      }
    }
    local_74 = CONCAT44(local_74._4_4_,0x5a485320);
LAB_0041f9da:
    uVar23 = 1;
    goto joined_r0x0041f32f;
  }
switchD_0041ebbb_caseD_62:
  pbVar9 = (byte *)strchr((char *)local_80,0x2d);
  if ((5 < local_50) && (pbVar9 != (byte *)0x0)) {
    pbVar8 = pbVar9 + 1;
    pcVar26 = strchr((char *)pbVar8,0x2d);
    if (pcVar26 == (char *)0x0) {
      pcVar26 = (char *)strlen((char *)pbVar8);
    }
    else {
      pcVar26 = pcVar26 + ~(ulong)pbVar9;
    }
    if ((pcVar26 == (char *)0x3) && ((byte)((*pbVar8 & 0xdf) + 0xbf) < 0x1a)) {
      local_80 = pbVar8;
    }
  }
  pcVar26 = strchr((char *)local_80,0x2d);
  if (pcVar26 != (char *)0x0) {
    iVar19 = (int)pcVar26;
  }
  uVar23 = iVar19 - (int)local_80;
  if (uVar23 == 3) {
    pcVar26 = " eaa IQS oaa ARA taa IQS aba";
    uVar32 = 0x4c9;
    uVar25 = 0x4c9;
joined_r0x0041f3f1:
    bVar36 = false;
  }
  else {
    if (uVar23 == 2) {
      pcVar26 = 
      "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ eaa IQS oaa ARA taa IQS aba"
      ;
      uVar32 = 0xcc;
      uVar25 = 0xcc;
      goto joined_r0x0041f3f1;
    }
    pcVar26 = (char *)0x0;
    bVar36 = true;
    uVar32 = 0;
    uVar25 = 0;
  }
  uVar6 = 0;
  if (local_80 != (byte *)0x0) {
    uVar6 = 0;
    uVar25 = uVar32;
    if ((uVar23 != 0) && (bVar29 = *local_80, bVar29 != 0)) {
      uVar33 = 4;
      if (uVar23 < 4) {
        uVar33 = (ulong)uVar23;
      }
      uVar20 = 0;
      do {
        *(byte *)((long)local_3c + (uVar20 - 0x20)) = bVar29;
        if (uVar33 - 1 == uVar20) goto LAB_0041f438;
        bVar29 = local_80[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (bVar29 != 0);
      uVar33 = uVar20 & 0xffffffff;
LAB_0041f438:
      if ((uint)uVar33 < 4) {
        memset((void *)((long)local_3c + (uVar33 - 0x20)),0x20,(ulong)(3 - (uint)uVar33) + 1);
      }
      uVar6 = local_5c >> 0x18 | (local_5c & 0xff0000) >> 8 | (local_5c & 0xff00) << 8 |
              local_5c << 0x18;
    }
  }
  uVar33 = (ulong)_ZZL24hb_ot_tags_from_languagePKcS0_PjS1_E12last_tag_idx_0;
  if ((_ZZL24hb_ot_tags_from_languagePKcS0_PjS1_E12last_tag_idx_0 < uVar25) &&
     (*(uint *)(pcVar26 + uVar33 * 8) == uVar6)) {
LAB_0041f485:
    _ZZL24hb_ot_tags_from_languagePKcS0_PjS1_E12last_tag_idx_0 = (uint)uVar33;
    do {
      uVar32 = (uint)uVar33;
      if (uVar32 == 0) {
        uVar32 = 0;
        uVar23 = uVar25;
        if (uVar25 != 0) goto LAB_0041f4d3;
        goto joined_r0x0041f32f;
      }
      lVar22 = uVar33 * 8;
      uVar33 = (ulong)(uVar32 - 1);
    } while (*(int *)(pcVar26 + lVar22) == *(int *)(pcVar26 + (ulong)(uVar32 - 1) * 8));
    bVar36 = uVar32 <= uVar25;
    uVar25 = uVar25 - uVar32;
    bVar37 = uVar25 != 0;
    if (!bVar36) {
      uVar25 = 0;
    }
    uVar23 = uVar25;
    if (bVar36 && bVar37) {
LAB_0041f4d3:
      uVar33 = (ulong)uVar32;
      iVar19 = *(int *)(pcVar26 + uVar33 * 8 + 4);
      if (iVar19 == 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        if (*(int *)(pcVar26 + uVar33 * 8) == *(int *)(pcVar26 + uVar33 * 8)) {
          local_74 = CONCAT44(local_74._4_4_,iVar19);
          uVar23 = uVar25;
          if (uVar25 != 1) {
            if (*(int *)(pcVar26 + (ulong)(uVar32 + 1) * 8 + 4) == 0) {
              uVar23 = 1;
            }
            else {
              uVar23 = 1;
              if (*(int *)(pcVar26 + (ulong)(uVar32 + 1) * 8) == *(int *)(pcVar26 + uVar33 * 8)) {
                local_74 = CONCAT44(*(int *)(pcVar26 + (ulong)(uVar32 + 1) * 8 + 4),iVar19);
                uVar23 = uVar25;
                if (uVar25 != 2) {
                  if (*(int *)(pcVar26 + (ulong)(uVar32 + 2) * 8 + 4) == 0) {
                    uVar23 = 2;
                  }
                  else {
                    uVar23 = 2;
                    if (*(int *)(pcVar26 + (ulong)(uVar32 + 2) * 8) ==
                        *(int *)(pcVar26 + uVar33 * 8)) {
                      uVar23 = 3;
                      local_6c = *(int *)(pcVar26 + (ulong)(uVar32 + 2) * 8 + 4);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (!bVar36) {
      iVar19 = uVar25 - 1;
      iVar16 = 0;
      do {
        while( true ) {
          uVar23 = (uint)(iVar19 + iVar16) >> 1;
          uVar33 = (ulong)uVar23;
          if (uVar6 < *(uint *)(pcVar26 + uVar33 * 8)) break;
          if (uVar6 <= *(uint *)(pcVar26 + uVar33 * 8)) goto LAB_0041f485;
          iVar16 = uVar23 + 1;
          if (iVar19 < iVar16) goto LAB_0041fa27;
        }
        iVar19 = uVar23 - 1;
      } while (iVar16 <= iVar19);
    }
LAB_0041fa27:
    if (pbVar9 == (byte *)0x0) {
      sVar11 = strlen((char *)local_80);
      pbVar9 = local_80 + sVar11;
    }
    uVar23 = 0;
    if ((long)pbVar9 - (long)local_80 == 3) {
      uVar23 = hb_tag_from_string((char *)local_80);
      local_74 = CONCAT44(local_74._4_4_,uVar23) & 0xffffffffdfdfdfff;
      uVar23 = 1;
    }
  }
  goto joined_r0x0041f32f;
  while( true ) {
    pbVar13 = pbVar12 + 8;
    if ((9 < (byte)(pbVar12[8] - 0x30)) && (0x19 < (byte)((pbVar12[8] & 0xdf) + 0xbf))) break;
LAB_0041fb7c:
    pbVar12 = (byte *)strstr((char *)pbVar13,"-polyton");
    if ((pbVar12 == (byte *)0x0) || (pbVar9 <= pbVar12)) {
      pbVar13 = pbVar8;
      goto LAB_00420435;
    }
  }
  local_74 = CONCAT44(local_74._4_4_,0x50475220);
  goto LAB_004204c8;
  while( true ) {
    pbVar13 = pbVar12 + 8;
    if ((9 < (byte)(pbVar12[8] - 0x30)) && (0x19 < (byte)((pbVar12[8] & 0xdf) + 0xbf))) break;
LAB_00420435:
    pbVar12 = (byte *)strstr((char *)pbVar13,"-arevmda");
    param_1 = local_58;
    if ((pbVar12 == (byte *)0x0) || (pbVar9 <= pbVar12)) {
      pbVar13 = pbVar8;
      goto LAB_004205fd;
    }
  }
  local_74 = CONCAT44(local_74._4_4_,0x48594520);
  goto LAB_004204c8;
  while( true ) {
    pbVar13 = pbVar12 + 8;
    if ((9 < (byte)(pbVar12[8] - 0x30)) && (0x19 < (byte)((pbVar12[8] & 0xdf) + 0xbf))) break;
LAB_004205fd:
    pbVar12 = (byte *)strstr((char *)pbVar13,"-provenc");
    uVar23 = (uint)local_48;
    if ((pbVar12 == (byte *)0x0) || (pbVar9 <= pbVar12)) goto LAB_0041eb8a;
  }
  local_74 = CONCAT44(local_74._4_4_,0x50524f20);
  goto LAB_0041f31b;
  while( true ) {
    pbVar13 = pbVar12 + 5;
    if ((9 < (byte)(pbVar12[5] - 0x30)) && (0x19 < (byte)((pbVar12[5] & 0xdf) + 0xbf))) break;
LAB_0041fbcb:
    pbVar12 = (byte *)strstr((char *)pbVar13,"-syre");
    if ((pbVar12 == (byte *)0x0) || (pbVar9 <= pbVar12)) {
      pbVar13 = pbVar8;
      goto LAB_00420481;
    }
  }
  local_74 = CONCAT44(local_74._4_4_,0x53595245);
  goto LAB_004204c8;
  while( true ) {
    pbVar8 = pbVar13 + 5;
    if ((9 < (byte)(pbVar13[5] - 0x30)) && (0x19 < (byte)((pbVar13[5] & 0xdf) + 0xbf))) break;
LAB_0042065d:
    pbVar13 = (byte *)strstr((char *)pbVar8,"-syrn");
    uVar23 = (uint)local_48;
    if ((pbVar13 == (byte *)0x0) || (pbVar9 <= pbVar13)) goto LAB_0041eb9c;
  }
  local_74 = CONCAT44(local_74._4_4_,0x5359524e);
LAB_0041f31b:
  uVar23 = 1;
  goto joined_r0x0041f32f;
  while( true ) {
    pbVar13 = pbVar12 + 5;
    if ((9 < (byte)(pbVar12[5] - 0x30)) && (0x19 < (byte)((pbVar12[5] & 0xdf) + 0xbf))) break;
LAB_00420481:
    pbVar12 = (byte *)strstr((char *)pbVar13,"-syrj");
    param_1 = local_58;
    if ((pbVar12 == (byte *)0x0) || (pbVar9 <= pbVar12)) goto LAB_0042065d;
  }
  local_74 = CONCAT44(local_74._4_4_,0x5359524a);
LAB_004204c8:
  param_1 = local_58;
  uVar23 = 1;
joined_r0x0041f32f:
  if (bVar34 == 0) goto LAB_0041f6da;
LAB_0041f56e:
  uVar33 = 0;
  if ((int)uVar2 < 0x4d6c796d) {
    if ((int)uVar2 < 0x47756a72) {
      uVar25 = 0x626e6732;
      if (uVar2 != 0x42656e67) {
        if (uVar2 != 0x44657661) goto LAB_0041f64c;
        uVar25 = 0x64657632;
      }
    }
    else if (uVar2 == 0x47756a72) {
      uVar25 = 0x676a7232;
    }
    else if (uVar2 == 0x47757275) {
      uVar25 = 0x67757232;
    }
    else {
      if (uVar2 != 0x4b6e6461) goto LAB_0041f64c;
      uVar25 = 0x6b6e6432;
    }
LAB_0041f620:
    local_3c[0] = uVar25 | 0x33;
    uVar33 = 1;
    if (local_60 < 2) {
      local_60 = 1;
      goto LAB_0041f6da;
    }
LAB_0041f636:
    uVar32 = (int)uVar33 + 1;
    local_3c[uVar33] = uVar25;
    uVar33 = (ulong)uVar32;
    if (uVar32 < local_60) goto LAB_0041f64c;
  }
  else {
    if (0x4f727960 < (int)uVar2) {
      if (uVar2 == 0x4f727961) {
        uVar25 = 0x6f727932;
      }
      else if (uVar2 == 0x54616d6c) {
        uVar25 = 0x746d6c32;
      }
      else {
        if (uVar2 != 0x54656c75) goto LAB_0041f64c;
        uVar25 = 0x74656c32;
      }
      goto LAB_0041f620;
    }
    if (uVar2 == 0x4d6c796d) {
      uVar25 = 0x6d6c6d32;
      goto LAB_0041f620;
    }
    uVar25 = 0x6d796d32;
    if (uVar2 == 0x4d796d72) goto LAB_0041f636;
LAB_0041f64c:
    uVar32 = (uint)uVar33;
    if ((int)uVar2 < 0x4e6b6f6f) {
      if (uVar2 == 0) goto LAB_0041f6d5;
      if (uVar2 == 0x48697261) {
        uVar25 = 0x6b616e61;
      }
      else {
        if (uVar2 != 0x4c616f6f) goto LAB_0041f6ad;
        uVar25 = 0x6c616f20;
      }
    }
    else if ((int)uVar2 < 0x59696969) {
      if (uVar2 == 0x4e6b6f6f) {
        uVar25 = 0x6e6b6f20;
      }
      else {
        if (uVar2 != 0x56616969) goto LAB_0041f6ad;
        uVar25 = 0x76616920;
      }
    }
    else if (uVar2 == 0x59696969) {
      uVar25 = 0x79692020;
    }
    else {
      uVar25 = 0x6d617468;
      if (uVar2 != 0x5a6d7468) {
LAB_0041f6ad:
        uVar25 = uVar2 | 0x20000000;
      }
    }
    uVar32 = uVar32 + 1;
    local_3c[uVar33] = uVar25;
  }
LAB_0041f6d5:
  local_60 = uVar32;
LAB_0041f6da:
  uVar2 = local_60;
                    /* try { // try from 0041f6e6 to 0041f761 has its CatchHandler @ 00420da8 */
  uVar10 = hb_ot_layout_table_select_script
                     (param_1,0x47535542,local_60,(long)local_3c,(uint *)(this + 0x38),
                      (undefined4 *)(this + 0x2c));
  this[0x34] = (hb_ot_map_builder_t)((int)uVar10 != 0);
  hb_ot_layout_script_select_language2
            (*(long *)this,0x47535542,*(uint *)(this + 0x38),uVar23,(long)&local_74,
             (uint *)(this + 0x40));
  uVar10 = hb_ot_layout_table_select_script
                     (*(long *)this,0x47504f53,uVar2,(long)local_3c,(uint *)(this + 0x3c),
                      (undefined4 *)(this + 0x30));
  this[0x35] = (hb_ot_map_builder_t)((int)uVar10 != 0);
  hb_ot_layout_script_select_language2
            (*(long *)this,0x47504f53,*(uint *)(this + 0x3c),uVar23,(long)&local_74,
             (uint *)(this + 0x44));
  return;
}


