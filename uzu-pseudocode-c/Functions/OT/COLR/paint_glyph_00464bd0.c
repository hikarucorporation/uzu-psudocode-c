// Function : paint_glyph
// Namespace: OT:COLR
// Entry    : 00464bd0
// Prototype: ulong paint_glyph(COLR * this, long param_1, uint param_2, long param_3, undefined8 param_4, uint param_5, uint param_6, char param_7)
// Body     : 00464bd0 - 00465604


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::COLR::paint_glyph(hb_font_t*, unsigned int, hb_paint_funcs_t*, void*, unsigned int, unsigned
   int, bool) const */

ulong __thiscall
OT::COLR::paint_glyph
          (COLR *this,long param_1,uint param_2,long param_3,undefined8 param_4,uint param_5,
          uint param_6,char param_7)

{
  short sVar1;
  long lVar2;
  int *piVar3;
  ushort uVar4;
  COLR *pCVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  ClipList *this_00;
  int iVar20;
  long lVar21;
  COLR *pCVar22;
  Paint *this_01;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  undefined1 auVar26 [16];
  float extraout_XMM0_Dd;
  undefined1 auVar28 [16];
  uint local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  COLR *local_178;
  COLR *pCStack_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  void *pvStack_150;
  undefined4 local_148 [2];
  COLR *local_140;
  long local_138;
  undefined8 local_130;
  long local_128;
  uint local_120;
  uint local_11c;
  COLR **local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_fe;
  undefined8 uStack_f6;
  undefined2 local_ee;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_ce;
  undefined8 uStack_c6;
  undefined2 local_be;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  COLR *local_90;
  COLR *pCStack_88;
  undefined8 local_80;
  ulong uStack_78;
  ulong local_70;
  undefined1 local_68 [16];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  
  if (*(short *)this == 0) {
    local_90 = (COLR *)&_hb_NullPool;
    pCStack_88 = (COLR *)&_hb_NullPool;
  }
  else {
    pCStack_88 = (COLR *)&_hb_NullPool;
    local_90 = (COLR *)&_hb_NullPool;
    if (*(int *)(this + 0x1e) == 0) {
LAB_00464c21:
      sVar1 = *(short *)this;
    }
    else {
      uVar10 = *(uint *)(this + 0x1e);
      if (uVar10 != 0) {
        local_90 = this + (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                          uVar10 << 0x18);
        goto LAB_00464c21;
      }
      local_90 = (COLR *)&_hb_NullPool;
      sVar1 = *(short *)this;
    }
    if ((sVar1 != 0) && (*(int *)(this + 0x1a) != 0)) {
      uVar10 = *(uint *)(this + 0x1a);
      if (uVar10 == 0) {
        pCStack_88 = (COLR *)&_hb_NullPool;
      }
      else {
        pCStack_88 = this + (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                            uVar10 << 0x18);
      }
    }
  }
  local_80 = *(undefined8 *)(param_1 + 0x80);
  uStack_78 = (ulong)*(uint *)(param_1 + 0x78);
  local_70 = 0;
  local_148[0] = 0;
  local_11c = param_6;
  local_118 = &local_90;
  local_110 = 1;
  local_10c = 1;
  local_108 = 0;
  local_100 = 1;
  local_e8 = 0;
  local_fe = 0;
  uStack_f6 = 0;
  local_ee = 0;
  local_e0 = 1;
  local_dc = 1;
  local_d8 = 0;
  local_d0 = 1;
  local_b8 = 0;
  local_ce = 0;
  uStack_c6 = 0;
  local_be = 0;
  local_b0 = 0x80000000040;
  local_18c = param_2;
  local_140 = this;
  local_138 = param_3;
  local_130 = param_4;
  local_128 = param_1;
  local_120 = param_5;
  hb_hashmap_t<unsigned_int,unsigned_int,true>::
  set_with_hash<unsigned_int_const&,unsigned_int_const&>
            ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_110,(int *)&local_18c,
             param_2 * -0x61c8864f);
  if (*(short *)this != 0) {
    uVar10 = *(uint *)(this + 0xe);
    pCVar22 = this + (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18);
    pCVar5 = (COLR *)&_hb_NullPool;
    if (uVar10 == 0) {
      pCVar22 = (COLR *)&_hb_NullPool;
    }
    uVar10 = *(uint *)pCVar22;
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    if (0 < (int)uVar10) {
      iVar11 = uVar10 - 1;
      iVar17 = 0;
      do {
        while( true ) {
          uVar16 = (uint)(iVar11 + iVar17) >> 1;
          uVar10 = (uint)(ushort)(*(ushort *)(pCVar22 + (ulong)uVar16 * 6 + 4) << 8 |
                                 *(ushort *)(pCVar22 + (ulong)uVar16 * 6 + 4) >> 8);
          if (param_2 < uVar10) break;
          if (param_2 <= uVar10) {
            pCVar5 = pCVar22 + (ulong)uVar16 * 6 + 4;
            goto LAB_00464de8;
          }
          iVar17 = uVar16 + 1;
          if (iVar11 < iVar17) goto LAB_00464de8;
        }
        iVar11 = uVar16 - 1;
      } while (iVar17 <= iVar11);
    }
LAB_00464de8:
    if ((ushort)(*(ushort *)pCVar5 << 8 | *(ushort *)pCVar5 >> 8) == param_2) {
      uVar10 = *(uint *)(pCVar5 + 2);
      this_01 = (Paint *)(pCVar22 +
                         (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                         uVar10 << 0x18));
      this_00 = (ClipList *)&_hb_NullPool;
      if (uVar10 == 0) {
        this_01 = (Paint *)&_hb_NullPool;
      }
      bVar23 = true;
      if (param_7 != '\0') {
        local_158 = local_70;
        local_168._8_8_ = uStack_78;
        local_168._0_8_ = local_80;
        local_178 = local_90;
        pCStack_170 = pCStack_88;
        if ((*(short *)this != 0) && (*(int *)(this + 0x16) != 0)) {
          uVar10 = *(uint *)(this + 0x16);
          if (uVar10 == 0) {
            this_00 = (ClipList *)&_hb_NullPool;
          }
          else {
            this_00 = (ClipList *)
                      (this + (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                              uVar10 << 0x18));
          }
        }
                    /* try { // try from 00464e6b to 00464e7b has its CatchHandler @ 00465618 */
        uVar6 = ClipList::get_extents(this_00,param_2,&local_188,(long *)&local_178);
        if ((char)uVar6 == '\0') {
          while (piVar8 = static_paint_extents_funcs, static_paint_extents_funcs = piVar8,
                piVar8 == (int *)0x0) {
                    /* try { // try from 00465583 to 004655b2 has its CatchHandler @ 00465605 */
            piVar8 = hb_paint_extents_funcs_lazy_loader_t::create();
            piVar3 = static_paint_extents_funcs;
            if (piVar8 == (int *)0x0) {
              piVar8 = (int *)&_hb_Null_hb_paint_funcs_t;
              LOCK();
              if (static_paint_extents_funcs == (int *)0x0) {
                static_paint_extents_funcs = (int *)&_hb_Null_hb_paint_funcs_t;
              }
              UNLOCK();
            }
            else {
              LOCK();
              if (static_paint_extents_funcs == (int *)0x0) {
                static_paint_extents_funcs = piVar8;
              }
              UNLOCK();
            }
            if (piVar3 == (int *)0x0) break;
            if ((piVar8 != (int *)0x0) && (piVar8 != (int *)&_hb_Null_hb_paint_funcs_t)) {
              hb_paint_funcs_destroy(piVar8);
            }
          }
          hb_paint_extents_context_t::hb_paint_extents_context_t
                    ((hb_paint_extents_context_t *)&local_178);
                    /* try { // try from 0046526d to 0046528e has its CatchHandler @ 00465609 */
          paint_glyph(this,param_1,local_18c,(long)piVar8,(hb_paint_extents_context_t *)&local_178,
                      param_5,param_6,'\0');
          if (local_158._4_4_ == 0) {
            _hb_CrapPool = 0;
            _DAT_0071cd88 = 0;
            DAT_0071cd90._0_4_ = 0;
            bVar23 = false;
          }
          else {
            bVar23 = *(int *)((long)pvStack_150 + (ulong)(local_158._4_4_ - 1) * 0x14) != 0;
          }
          if (*(long *)(local_138 + 0x80) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(local_138 + 0x80) + 0x20);
          }
                    /* try { // try from 00465335 to 00465336 has its CatchHandler @ 00465607 */
          (**(code **)(local_138 + 0x30))(local_138,local_130,uVar6);
          if ((int)local_158 != 0) {
            local_158 = local_158 & 0xffffffff;
            free(pvStack_150);
          }
          local_158 = 0;
          pvStack_150 = (void *)0x0;
          if (local_168._0_4_ != 0) {
            local_168._4_4_ = 0;
            free((void *)local_168._8_8_);
          }
          local_168 = ZEXT816(0);
          if ((uint)local_178 != 0) {
            local_178 = (COLR *)((ulong)local_178 & 0xffffffff);
            free(pCStack_170);
          }
        }
        else {
          fStack_9c = *(float *)(param_1 + 0x4c);
          local_a8 = fStack_9c * (float)((local_188 + local_180) * 0x10000 >> 0x10);
          fStack_a4 = fStack_9c * (float)(int)(short)local_188;
          fStack_a0 = fStack_9c * 0.0;
          fStack_9c = fStack_9c * 0.0;
          fVar25 = *(float *)(param_1 + 0x50);
          local_68._0_4_ = fVar25 * (float)(int)(short)local_184;
          local_68._4_4_ = fVar25 * (float)((local_184 + local_17c) * 0x10000 >> 0x10);
          local_68._8_4_ = fVar25 * 0.0;
          local_68._12_4_ = fVar25 * 0.0;
          fVar25 = *(float *)(param_1 + 0x48);
          if ((fVar25 != 0.0) || (NAN(fVar25))) {
            fVar24 = fVar25 * (float)local_68._0_4_;
            fVar27 = fVar25 * (float)local_68._4_4_;
            uVar10 = -(uint)(fVar27 <= fVar25 * local_68._8_4_);
            uVar16 = -(uint)(fVar27 <= fVar25 * local_68._12_4_);
            auVar26._0_4_ = (uint)fVar24 & -(uint)(fVar27 <= fVar24);
            auVar26._4_4_ = (uint)fVar24 & -(uint)(fVar24 <= fVar27);
            auVar26._8_4_ = (uint)fVar24 & uVar10;
            auVar26._12_4_ = (uint)fVar24 & uVar16;
            auVar28._0_4_ = ~-(uint)(fVar27 <= fVar24) & (uint)fVar27;
            auVar28._4_4_ = ~-(uint)(fVar24 <= fVar27) & (uint)fVar27;
            auVar28._8_4_ = ~uVar10 & (uint)fVar27;
            auVar28._12_4_ = ~uVar16 & (uint)fVar27;
            auVar28 = auVar28 | auVar26;
            local_a8 = local_a8 + auVar28._0_4_;
            fStack_a4 = fStack_a4 + auVar28._4_4_;
            fStack_a0 = fStack_a0 + auVar28._8_4_;
            fStack_9c = fStack_9c + auVar28._12_4_;
          }
          local_58 = floorf(fStack_a4);
          iVar20 = (int)local_58;
          fStack_54 = extraout_XMM0_Db;
          fStack_50 = extraout_XMM0_Dc;
          fStack_4c = extraout_XMM0_Dd;
          local_48 = floorf((float)local_68._0_4_);
          iVar14 = (int)local_48;
          ceilf(local_a8);
          local_a8 = (float)(int)local_58;
          fStack_a4 = (float)(int)fStack_54;
          fStack_a0 = (float)(int)fStack_50;
          fStack_9c = (float)(int)fStack_4c;
          fVar25 = ceilf((float)local_68._4_4_);
          iVar11 = *(int *)(param_1 + 0x3c);
          iVar17 = *(int *)(param_1 + 0x40);
          if (iVar11 != 0 || iVar17 != 0) {
            local_17c = -iVar17;
            if (-1 < *(int *)(param_1 + 0x2c)) {
              local_17c = iVar17;
            }
            local_184 = iVar14 + local_17c;
            local_17c = (int)(fVar25 - (float)(int)local_48) - local_17c;
            iVar17 = -iVar11;
            if (-1 < *(int *)(param_1 + 0x28)) {
              iVar17 = iVar11;
            }
            if (*(char *)(param_1 + 0x38) != '\0') {
              local_188 = iVar20 - iVar17 / 2;
            }
          }
          if (*(long *)(local_138 + 0x80) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(local_138 + 0x80) + 0x20);
          }
          bVar23 = true;
                    /* try { // try from 004653e3 to 004653e4 has its CatchHandler @ 00465618 */
          (**(code **)(local_138 + 0x30))(local_138,local_130,uVar6);
        }
      }
      uVar6 = local_130;
      lVar21 = local_138;
      lVar2 = *(long *)(param_1 + 0x20);
      uVar10 = *(uint *)(lVar2 + 0x14);
      if (uVar10 == 0) {
        puVar7 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                 ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                        *)(lVar2 + 0x70));
        uVar4 = *(ushort *)((long)puVar7 + 0x12) << 8 | *(ushort *)((long)puVar7 + 0x12) >> 8;
        uVar10 = 1000;
        if (uVar4 - 0x10 < 0x3ff1) {
          uVar10 = (uint)uVar4;
        }
        *(uint *)(lVar2 + 0x14) = uVar10;
      }
      if (*(undefined8 **)(lVar21 + 0x80) == (undefined8 *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = **(undefined8 **)(lVar21 + 0x80);
      }
                    /* try { // try from 0046544c to 0046553d has its CatchHandler @ 0046561a */
      (**(code **)(lVar21 + 0x10))
                ((float)*(int *)(param_1 + 0x28) / (float)uVar10,lVar21,uVar6,uVar13);
      if (bVar23) {
        if ((0 < (int)local_b0) && (0 < local_b0._4_4_)) {
          local_b0._0_4_ = (int)local_b0 + -1;
          local_b0._4_4_ = local_b0._4_4_ + -1;
          Paint::dispatch<OT::hb_paint_context_t>(this_01,(hb_paint_context_t *)local_148);
          local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
        }
      }
      if (*(long *)(local_138 + 0x80) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(*(long *)(local_138 + 0x80) + 8);
      }
      (**(code **)(local_138 + 0x18))(local_138,local_130,uVar6);
      uVar15 = CONCAT71((int7)((ulong)lVar2 >> 8),1);
      if (param_7 != '\0') {
        if (*(long *)(local_138 + 0x80) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(local_138 + 0x80) + 0x28);
        }
        (**(code **)(local_138 + 0x38))(local_138,local_130,uVar6);
      }
      goto LAB_004654ff;
    }
  }
  uVar4 = *(ushort *)(this + 2);
  uVar15 = 0;
  if (uVar4 != 0) {
    uVar10 = *(uint *)(this + 4);
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    iVar11 = (ushort)(uVar4 << 8 | uVar4 >> 8) - 1;
    do {
      while( true ) {
        uVar16 = (uint)(iVar11 + (int)uVar15) >> 1;
        uVar19 = (ulong)uVar16;
        uVar18 = (uint)(ushort)(*(ushort *)(this + uVar19 * 6 + (ulong)uVar10) << 8 |
                               *(ushort *)(this + uVar19 * 6 + (ulong)uVar10) >> 8);
        if (param_2 < uVar18) break;
        if (param_2 <= uVar18) {
          uVar15 = 0;
          if ((this + uVar19 * 6 + (ulong)uVar10 != (COLR *)&_hb_NullPool) && (uVar18 == param_2)) {
            uVar4 = *(ushort *)(this + uVar19 * 6 + (ulong)uVar10 + 2) << 8 |
                    *(ushort *)(this + uVar19 * 6 + (ulong)uVar10 + 2) >> 8;
            uVar18 = (uint)(ushort)(*(ushort *)(this + 0xc) << 8 | *(ushort *)(this + 0xc) >> 8);
            uVar16 = uVar18 - uVar4;
            if (uVar18 < uVar4) {
              uVar16 = 0;
            }
            uVar10 = (uint)(ushort)(*(ushort *)(this + uVar19 * 6 + (ulong)uVar10 + 4) << 8 |
                                   *(ushort *)(this + uVar19 * 6 + (ulong)uVar10 + 4) >> 8);
            if (uVar10 < uVar16) {
              uVar16 = uVar10;
            }
            uVar15 = 1;
            if (uVar16 != 0) {
              uVar10 = *(uint *)(this + 8);
              lVar2 = (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                             uVar10 << 0x18) + (ulong)uVar4 * 4;
              lVar21 = 0;
              do {
                uVar4 = *(ushort *)(this + lVar21 + lVar2 + 2);
                local_178 = (COLR *)CONCAT44(local_178._4_4_,local_11c);
                if (uVar4 == 0xffff) {
                  uVar6 = 1;
                  uVar10 = local_11c;
                }
                else {
                  uVar4 = uVar4 << 8 | uVar4 >> 8;
                  if (*(long *)(local_138 + 0x80) == 0) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = *(undefined8 *)(*(long *)(local_138 + 0x80) + 0x68);
                  }
                    /* try { // try from 004650eb to 00465239 has its CatchHandler @ 0046561c */
                  iVar11 = (**(code **)(local_138 + 0x78))
                                     (local_138,local_130,(ulong)uVar4,&local_178,uVar6);
                  uVar10 = local_120;
                  if (iVar11 == 0) {
                    uVar19 = (ulong)local_120;
                    puVar7 = hb_lazy_loader_t<OT::CPAL,hb_table_lazy_loader_t<OT::CPAL,36u,true>,hb_face_t,36u,hb_blob_t>
                             ::get((hb_lazy_loader_t<OT::CPAL,hb_table_lazy_loader_t<OT::CPAL,36u,true>,hb_face_t,36u,hb_blob_t>
                                    *)(*(long *)(local_128 + 0x20) + 0x188));
                    if (uVar10 < (ushort)(*(ushort *)(puVar7 + 1) << 8 |
                                         *(ushort *)(puVar7 + 1) >> 8)) {
                      uVar9 = *(ushort *)((long)puVar7 + uVar19 * 2 + 0xc);
                      uVar9 = uVar9 << 8 | uVar9 >> 8;
                      uVar12 = *(ushort *)((long)puVar7 + 2) << 8 |
                               *(ushort *)((long)puVar7 + 2) >> 8;
                      uVar18 = (uint)(ushort)(*(ushort *)((long)puVar7 + 6) << 8 |
                                             *(ushort *)((long)puVar7 + 6) >> 8);
                      uVar10 = uVar18 - uVar9;
                      if (uVar18 < uVar9) {
                        uVar10 = 0;
                      }
                      if (uVar12 < uVar10) {
                        uVar10 = (uint)uVar12;
                      }
                      if (uVar4 <= uVar10 && uVar10 != uVar4) {
                        uVar10 = puVar7[2];
                        uVar10 = *(uint *)((long)puVar7 +
                                          (ulong)uVar4 * 4 +
                                          (ulong)uVar9 * 4 +
                                          (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 |
                                                  (uVar10 & 0xff00) << 8 | uVar10 << 0x18));
                        local_178 = (COLR *)CONCAT44(local_178._4_4_,
                                                     uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 |
                                                     (uVar10 & 0xff00) << 8 | uVar10 << 0x18);
                      }
                    }
                  }
                  uVar6 = 0;
                  uVar10 = (uint)local_178;
                }
                (**(code **)(local_138 + 0x28))
                          (local_138,local_130,
                           *(ushort *)(this + lVar21 + lVar2) << 8 |
                           *(ushort *)(this + lVar21 + lVar2) >> 8,local_128);
                (**(code **)(local_138 + 0x40))
                          (local_138,local_130,uVar6,
                           (uint)(long)(float)(uVar10 & 0xff) & 0xff | uVar10 & 0xffffff00);
                if (*(long *)(local_138 + 0x80) == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = *(undefined8 *)(*(long *)(local_138 + 0x80) + 0x28);
                }
                (**(code **)(local_138 + 0x38))(local_138,local_130,uVar6);
                lVar21 = lVar21 + 4;
              } while ((ulong)uVar16 * 4 != lVar21);
            }
          }
          goto LAB_004654ff;
        }
        uVar15 = (ulong)(uVar16 + 1);
        if (iVar11 < (int)(uVar16 + 1)) goto LAB_0046501c;
      }
      iVar11 = uVar16 - 1;
    } while ((int)uVar15 <= iVar11);
LAB_0046501c:
    uVar15 = 0;
  }
LAB_004654ff:
  hb_paint_context_t::~hb_paint_context_t((hb_paint_context_t *)local_148);
  return uVar15 & 0xffffffff;
}


