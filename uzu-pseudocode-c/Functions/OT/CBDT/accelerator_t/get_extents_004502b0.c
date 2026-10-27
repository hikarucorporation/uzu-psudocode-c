// Function : get_extents
// Namespace: OT:CBDT:accelerator_t
// Entry    : 004502b0
// Prototype: undefined8 get_extents(accelerator_t * this, long param_1, uint param_2, int * param_3, char param_4)
// Body     : 004502b0 - 004507fd


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::CBDT::accelerator_t::get_extents(hb_font_t*, unsigned int, hb_glyph_extents_t*, bool) const
    */

undefined8 __thiscall
OT::CBDT::accelerator_t::get_extents
          (accelerator_t *this,long param_1,uint param_2,int *param_3,char param_4)

{
  byte bVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [13];
  ushort uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 extraout_RAX;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  ushort *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  uint *puVar21;
  ulong uVar22;
  float fVar23;
  float fVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float __x;
  
  puVar6 = *(undefined4 **)this;
  puVar19 = &_hb_NullPool;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = &_hb_NullPool;
  }
  puVar18 = &_hb_NullPool;
  if (7 < (uint)puVar6[6]) {
    puVar18 = *(undefined4 **)(puVar6 + 4);
  }
  uVar5 = puVar18[1];
  puVar21 = &_hb_NullPool;
  if (uVar5 != 0) {
    uVar9 = *(uint *)(param_1 + 0x68);
    if (*(uint *)(param_1 + 0x68) < *(uint *)(param_1 + 0x6c)) {
      uVar9 = *(uint *)(param_1 + 0x6c);
    }
    uVar11 = 0x40000000;
    if (uVar9 != 0) {
      uVar11 = uVar9;
    }
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    if (puVar18[1] == 0) {
      puVar6 = &_hb_NullPool;
    }
    else {
      puVar6 = puVar18 + 2;
    }
    uVar9 = 0;
    if (1 < uVar5) {
      pbVar20 = (byte *)((long)puVar6 + 0x2d);
      if (*(byte *)((long)puVar6 + 0x2d) <= *(byte *)(puVar18 + 0xd)) {
        pbVar20 = (byte *)(puVar18 + 0xd);
      }
      uVar14 = (uint)*pbVar20;
      puVar6 = puVar18 + 0xe;
      uVar15 = 0;
      uVar12 = 1;
      do {
        uVar9 = puVar18[1];
        uVar22 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                        uVar9 << 0x18);
        puVar13 = &_hb_NullPool;
        if (uVar12 < uVar22) {
          uVar9 = puVar18[1];
          uVar22 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18);
          puVar13 = puVar6;
        }
        pbVar20 = (byte *)(puVar13 + 0xb);
        puVar13 = &_hb_NullPool;
        if (uVar12 < uVar22) {
          puVar13 = puVar6;
        }
        if (*pbVar20 < *(byte *)((long)puVar13 + 0x2d)) {
          pbVar20 = (byte *)((long)puVar13 + 0x2d);
        }
        bVar1 = *pbVar20;
        if (((uVar11 <= bVar1) && (bVar1 < uVar14)) || ((uVar14 < uVar11 && (uVar14 < bVar1)))) {
          uVar15 = uVar12 & 0xffffffff;
          uVar14 = (uint)bVar1;
        }
        uVar9 = (uint)uVar15;
        uVar12 = uVar12 + 1;
        puVar6 = puVar6 + 0xc;
      } while (uVar5 != uVar12);
    }
    uVar5 = puVar18[1];
    if (uVar9 < (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18)) {
      puVar21 = puVar18 + (ulong)uVar9 * 0xc + 2;
    }
    else {
      puVar21 = &_hb_NullPool;
    }
  }
  puVar6 = *(undefined4 **)this;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = &_hb_NullPool;
  }
  if (7 < (uint)puVar6[6]) {
    puVar19 = *(undefined4 **)(puVar6 + 4);
  }
  uVar5 = puVar21[2];
  if (uVar5 != 0) {
    uVar9 = *puVar21;
    uVar12 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
                    );
    uVar15 = 0;
    do {
      uVar4 = *(ushort *)((long)puVar19 + uVar15 * 8 + uVar12);
      uVar9 = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
      if ((uVar9 <= param_2) &&
         (uVar4 = *(ushort *)((long)puVar19 + uVar15 * 8 + uVar12 + 2),
         param_2 <= (ushort)(uVar4 << 8 | uVar4 >> 8))) {
        if ((char)puVar21[0xb] == '\0') {
          return 0;
        }
        if (*(char *)((long)puVar21 + 0x2d) == '\0') {
          return 0;
        }
        uVar5 = *(uint *)((long)puVar19 + uVar15 * 8 + uVar12 + 4);
        if (uVar5 == 0) {
          puVar17 = (ushort *)&_hb_NullPool;
        }
        else {
          puVar17 = (ushort *)
                    ((long)puVar19 +
                    (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
                    ) + uVar12);
        }
        uVar9 = param_2 - uVar9;
        uVar4 = *puVar17 << 8 | *puVar17 >> 8;
        if (uVar4 == 3) {
          uVar7 = puVar17[(ulong)(uVar9 + 1) + 4] << 8 | puVar17[(ulong)(uVar9 + 1) + 4] >> 8;
          uVar4 = puVar17[(ulong)uVar9 + 4] << 8 | puVar17[(ulong)uVar9 + 4] >> 8;
          if (uVar7 <= uVar4) {
            return 0;
          }
          uVar5 = *(uint *)(puVar17 + 2);
          uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18)
                  + (uint)uVar4;
          uVar9 = (uint)uVar7 - (uint)uVar4;
        }
        else {
          if (uVar4 != 1) {
            return 0;
          }
          uVar5 = *(uint *)(puVar17 + (ulong)(uVar9 + 1) * 2 + 4);
          uVar11 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          uVar5 = *(uint *)(puVar17 + (ulong)uVar9 * 2 + 4);
          uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          uVar9 = uVar11 - uVar5;
          if (uVar11 < uVar5 || uVar9 == 0) {
            return 0;
          }
          uVar11 = *(uint *)(puVar17 + 2);
          uVar5 = (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                  uVar11 << 0x18) + uVar5;
        }
        puVar6 = *(undefined4 **)(this + 8);
        puVar19 = &_hb_NullPool;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = &_hb_NullPool;
        }
        uVar11 = puVar6[6];
        if (uVar11 < uVar5) {
          return 0;
        }
        if (uVar11 - uVar5 < uVar9) {
          return 0;
        }
        uVar4 = puVar17[1] << 8 | puVar17[1] >> 8;
        if (uVar4 == 0x12) {
          if (uVar9 < 0xc) {
            return 0;
          }
          if (uVar11 < 4) {
            puVar6 = &_hb_NullPool;
          }
          else {
            puVar6 = *(undefined4 **)(puVar6 + 4);
          }
          uVar12 = (ulong)uVar5;
          iVar8 = (int)*(char *)((long)puVar6 + uVar12 + 2);
          *param_3 = iVar8;
          iVar16 = (int)*(char *)((long)puVar6 + uVar12 + 3);
          param_3[1] = iVar16;
          bVar1 = *(byte *)((long)puVar6 + uVar12 + 1);
          param_3[2] = (uint)bVar1;
          iVar10 = -(uint)*(byte *)((long)puVar6 + uVar12);
          param_3[3] = iVar10;
        }
        else {
          if (uVar4 != 0x11) {
            return 0;
          }
          if (uVar9 < 9) {
            return 0;
          }
          if (3 < uVar11) {
            puVar19 = *(undefined4 **)(puVar6 + 4);
          }
          puVar6 = (undefined4 *)(ulong)uVar5;
          iVar8 = (int)*(char *)((long)puVar19 + 2 + (long)puVar6);
          *param_3 = iVar8;
          iVar16 = (int)*(char *)((long)puVar19 + 3 + (long)puVar6);
          param_3[1] = iVar16;
          bVar1 = *(byte *)((long)puVar19 + 1 + (long)puVar6);
          param_3[2] = (uint)bVar1;
          iVar10 = -(uint)*(byte *)((long)puVar19 + (long)puVar6);
          param_3[3] = iVar10;
        }
        if (param_4 == '\0') {
          return CONCAT71((int7)((ulong)puVar6 >> 8),1);
        }
        fVar31 = *(float *)(param_1 + 0x4c) * (float)(int)((uint)bVar1 + iVar8);
        __x = *(float *)(param_1 + 0x4c) * (float)iVar8;
        fVar29 = *(float *)(param_1 + 0x50) * (float)iVar16;
        fVar30 = *(float *)(param_1 + 0x50) * (float)(iVar10 + iVar16);
        fVar26 = *(float *)(param_1 + 0x48);
        if ((fVar26 != 0.0) || (NAN(fVar26))) {
          fVar23 = fVar26 * fVar29;
          fVar26 = fVar26 * fVar30;
          fVar31 = fVar31 + (float)(~-(uint)(fVar26 <= fVar23) & (uint)fVar26 |
                                   (uint)fVar23 & -(uint)(fVar26 <= fVar23));
          __x = __x + (float)(~-(uint)(fVar23 <= fVar26) & (uint)fVar26 |
                             (uint)fVar23 & -(uint)(fVar23 <= fVar26));
        }
        fVar26 = floorf(__x);
        *param_3 = (int)fVar26;
        fVar29 = floorf(fVar29);
        param_3[1] = (int)fVar29;
        fVar31 = ceilf(fVar31);
        param_3[2] = (int)(fVar31 - (float)(int)fVar26);
        fVar30 = ceilf(fVar30);
        param_3[3] = (int)(fVar30 - (float)(int)fVar29);
        iVar8 = *(int *)(param_1 + 0x3c);
        iVar10 = *(int *)(param_1 + 0x40);
        if (iVar8 != 0 || iVar10 != 0) {
          iVar16 = -iVar10;
          if (-1 < *(int *)(param_1 + 0x2c)) {
            iVar16 = iVar10;
          }
          param_3[1] = (int)fVar29 + iVar16;
          param_3[3] = (int)(fVar30 - (float)(int)fVar29) - iVar16;
          iVar10 = -iVar8;
          if (-1 < *(int *)(param_1 + 0x28)) {
            iVar10 = iVar8;
          }
          if (*(char *)(param_1 + 0x38) != '\0') {
            *param_3 = (int)fVar26 - iVar10 / 2;
          }
          param_3[2] = iVar10 + (int)(fVar31 - (float)(int)fVar26);
        }
        auVar24._0_4_ = (float)*(uint *)(this + 0x10);
        uVar4 = (ushort)puVar21[0xb];
        auVar25._10_6_ = 0;
        auVar25._0_10_ = SUB1610(ZEXT816(0),6);
        auVar3[0xc] = 0;
        auVar3._0_12_ = SUB1612(auVar25 << 0x30,4);
        auVar27[2] = (char)(puVar21[0xb] >> 8);
        auVar27._0_2_ = uVar4;
        auVar27._3_13_ = auVar3 << 8;
        auVar2._2_10_ = (unkuint10)0;
        auVar2._0_2_ = auVar27._2_2_;
        auVar28._0_8_ = CONCAT44((float)auVar2._0_4_,(float)(uVar4 & 0xff));
        auVar24._4_4_ = auVar24._0_4_;
        auVar24._8_4_ = auVar24._0_4_;
        auVar24._12_4_ = auVar24._0_4_;
        auVar28._8_8_ = auVar28._0_8_;
        auVar25 = divps(auVar24,auVar28);
        fVar30 = (float)*param_3 * auVar25._0_4_ + _DAT_0065b250;
        fVar31 = (float)param_3[1] * auVar25._4_4_ + _UNK_0065b254;
        fVar29 = (float)param_3[2] * auVar25._8_4_ + _UNK_0065b258;
        fVar26 = floorf((float)param_3[3] * auVar25._12_4_ + _UNK_0065b25c);
        fVar29 = floorf(fVar29);
        fVar30 = floorf(fVar30);
        fVar31 = floorf(fVar31);
        *param_3 = (int)fVar30;
        param_3[1] = (int)fVar31;
        param_3[2] = (int)fVar29;
        param_3[3] = (int)fVar26;
        return CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
      }
      uVar15 = uVar15 + 1;
    } while ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) !=
             uVar15);
  }
  return 0;
}


