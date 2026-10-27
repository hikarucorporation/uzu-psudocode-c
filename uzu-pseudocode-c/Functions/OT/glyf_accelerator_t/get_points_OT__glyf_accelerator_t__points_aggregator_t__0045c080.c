// Function : get_points<OT::glyf_accelerator_t::points_aggregator_t>
// Namespace: OT:glyf_accelerator_t
// Entry    : 0045c080
// Prototype: ulong get_points<OT::glyf_accelerator_t::points_aggregator_t>(ushort * param_1, long param_2, uint param_3)
// Body     : 0045c080 - 0045c55d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool OT::glyf_accelerator_t::get_points<OT::glyf_accelerator_t::points_aggregator_t>(hb_font_t*,
   unsigned int, OT::glyf_accelerator_t::points_aggregator_t, hb_array_t<int const>) const */

ulong __cdecl
OT::glyf_accelerator_t::get_points<OT::glyf_accelerator_t::points_aggregator_t>
          (ushort *param_1,long param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float extraout_XMM0_Db;
  float fVar16;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  int iVar17;
  long in_stack_00000008;
  int *in_stack_00000010;
  undefined8 *in_stack_00000018;
  char in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_0000002c;
  float in_stack_00000030;
  undefined8 local_b8;
  void *pvStack_b0;
  int local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  ushort *local_58;
  ulong uStack_50;
  ushort *local_48;
  uint local_40;
  int local_3c;
  
  if (*(uint *)(param_1 + 0xe) <= param_3) {
    return 0;
  }
  local_b8 = 0;
  pvStack_b0 = (void *)0x0;
  puVar11 = *(undefined4 **)(param_1 + 0x10);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = &_hb_NullPool;
  }
  uVar4 = (ulong)param_3;
  if ((char)param_1[0xc] == '\0') {
    uVar8 = *(uint *)(*(long *)(puVar11 + 4) + uVar4 * 4);
    uVar7 = *(uint *)(*(long *)(puVar11 + 4) + 4 + uVar4 * 4);
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar10 = uVar7 - uVar8;
    if (uVar8 <= uVar7) goto LAB_0045c122;
LAB_0045c51c:
    local_58 = (ushort *)0x0;
    uStack_50 = 0;
    local_48 = (ushort *)&_hb_NullPool;
    local_3c = 0;
    param_3 = 0xffffffff;
  }
  else {
    uVar1 = *(ushort *)(*(long *)(puVar11 + 4) + uVar4 * 2);
    uVar2 = *(ushort *)(*(long *)(puVar11 + 4) + 2 + uVar4 * 2);
    uVar10 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
    uVar8 = uVar10 * 2;
    uVar7 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8) * 2;
    uVar10 = uVar7 + uVar10 * -2;
    if (uVar7 < uVar8) goto LAB_0045c51c;
LAB_0045c122:
    uStack_50 = (ulong)uVar10;
    puVar11 = *(undefined4 **)(param_1 + 0x14);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = &_hb_NullPool;
    }
    if ((uint)puVar11[6] < uVar7) goto LAB_0045c51c;
    local_58 = (ushort *)((ulong)uVar8 + *(long *)(puVar11 + 4));
    local_48 = (ushort *)&_hb_NullPool;
    if (9 < uVar10) {
      local_48 = local_58;
    }
    uVar1 = *local_48;
    if (uVar1 == 0) {
      local_3c = 0;
    }
    else {
      local_3c = 2 - (uint)(0 < (short)(uVar1 << 8 | uVar1 >> 8));
    }
  }
                    /* try { // try from 0045c191 to 0045c1b4 has its CatchHandler @ 0045c55e */
  local_40 = param_3;
  uVar4 = glyf_impl::Glyph::get_points<OT::glyf_accelerator_t>
                    ((ushort *)&local_58,param_2,param_1,(float *)&local_b8,
                     in_stack_00000010 == (int *)0x0,*(long *)(param_2 + 0x80),
                     *(uint *)(param_2 + 0x78),0,(hb_hashmap_t<unsigned_int,unsigned_int,true> *)0x0
                     ,0,(uint *)0x0);
  if ((char)uVar4 == '\0') goto LAB_0045c4f6;
  uVar7 = local_b8._4_4_;
  uVar8 = local_b8._4_4_ - 4;
  if (in_stack_00000010 != (int *)0x0) {
    uVar10 = local_b8._4_4_;
    if (uVar8 < local_b8._4_4_) {
      uVar10 = uVar8;
    }
    if (uVar10 != 0) {
      lVar6 = 0;
      do {
        fVar14 = *(float *)((long)pvStack_b0 + lVar6);
        fVar15 = ((float *)((long)pvStack_b0 + lVar6))[1];
        in_stack_00000024 =
             (float)(~-(uint)(in_stack_00000024 <= fVar14) & (uint)fVar14 |
                    (uint)in_stack_00000024 & -(uint)(in_stack_00000024 <= fVar14));
        in_stack_00000028 =
             (float)(~-(uint)(in_stack_00000028 <= fVar15) & (uint)fVar15 |
                    (uint)in_stack_00000028 & -(uint)(in_stack_00000028 <= fVar15));
        in_stack_0000002c =
             (float)(~-(uint)(fVar14 <= in_stack_0000002c) & (uint)fVar14 |
                    (uint)in_stack_0000002c & -(uint)(fVar14 <= in_stack_0000002c));
        in_stack_00000030 =
             (float)(~-(uint)(fVar15 <= in_stack_00000030) & (uint)fVar15 |
                    (uint)in_stack_00000030 & -(uint)(fVar15 <= in_stack_00000030));
        lVar6 = lVar6 + 0xc;
      } while ((ulong)uVar10 * 0xc != lVar6);
    }
    if (in_stack_00000024 < in_stack_0000002c) {
      local_88 = in_stack_00000030;
      fStack_84 = in_stack_00000030;
      fStack_80 = in_stack_00000030;
      fStack_7c = in_stack_00000030;
      local_78 = in_stack_00000028;
      fStack_74 = in_stack_00000028;
      fStack_70 = in_stack_00000028;
      fStack_6c = in_stack_00000028;
      if (in_stack_00000028 < in_stack_00000030) {
        local_98 = in_stack_0000002c;
        fStack_94 = in_stack_00000030;
        fStack_90 = in_stack_0000002c;
        fStack_8c = in_stack_00000030;
        local_68 = floorf(in_stack_00000024 + DAT_005d9044);
        local_98 = floorf((local_98 - (float)(int)local_68) + DAT_005d9044);
        local_88 = floorf(local_88 + DAT_005d9044);
        fStack_84 = extraout_XMM0_Db;
        fStack_80 = extraout_XMM0_Dc;
        fStack_7c = extraout_XMM0_Dd;
        fVar14 = floorf((local_78 - (float)(int)local_88) + DAT_005d9044);
        iVar5 = (int)local_68;
        *in_stack_00000010 = iVar5;
        in_stack_00000010[2] = (int)local_98;
        iVar3 = (int)local_88;
        in_stack_00000010[1] = iVar3;
        in_stack_00000010[3] = (int)fVar14;
        if (in_stack_00000020 != '\0') {
          fStack_8c = *(float *)(in_stack_00000008 + 0x4c);
          local_98 = fStack_8c * (float)(((int)local_98 + iVar5) * 0x10000 >> 0x10);
          fStack_94 = fStack_8c * (float)(int)(short)iVar5;
          fStack_90 = fStack_8c * 0.0;
          fStack_8c = fStack_8c * 0.0;
          fStack_6c = *(float *)(in_stack_00000008 + 0x50);
          local_78 = fStack_6c * (float)(int)(short)iVar3;
          fStack_74 = fStack_6c * (float)(((int)fVar14 + iVar3) * 0x10000 >> 0x10);
          fStack_70 = fStack_6c * 0.0;
          fStack_6c = fStack_6c * 0.0;
          fVar14 = *(float *)(in_stack_00000008 + 0x48);
          if ((fVar14 != 0.0) || (NAN(fVar14))) {
            fVar15 = fVar14 * local_78;
            fVar16 = fVar14 * fStack_74;
            uVar10 = -(uint)(fVar16 <= fVar14 * fStack_70);
            uVar13 = -(uint)(fVar16 <= fVar14 * fStack_6c);
            local_98 = local_98 +
                       (float)(~-(uint)(fVar16 <= fVar15) & (uint)fVar16 |
                              (uint)fVar15 & -(uint)(fVar16 <= fVar15));
            fStack_94 = fStack_94 +
                        (float)(~-(uint)(fVar15 <= fVar16) & (uint)fVar16 |
                               (uint)fVar15 & -(uint)(fVar15 <= fVar16));
            fStack_90 = fStack_90 + (float)(~uVar10 & (uint)fVar16 | (uint)fVar15 & uVar10);
            fStack_8c = fStack_8c + (float)(~uVar13 & (uint)fVar16 | (uint)fVar15 & uVar13);
          }
          local_68 = floorf(fStack_94);
          local_9c = (int)local_68;
          *in_stack_00000010 = local_9c;
          local_88 = floorf(local_78);
          iVar12 = (int)local_88;
          in_stack_00000010[1] = iVar12;
          fStack_84 = extraout_XMM0_Db_00;
          fStack_80 = extraout_XMM0_Dc_00;
          fStack_7c = extraout_XMM0_Dd_00;
          fVar14 = ceilf(local_98);
          iVar17 = (int)local_68;
          in_stack_00000010[2] = (int)(fVar14 - (float)iVar17);
          fVar15 = ceilf(fStack_74);
          in_stack_00000010[3] = (int)(fVar15 - (float)(int)local_88);
          iVar3 = *(int *)(in_stack_00000008 + 0x3c);
          iVar5 = *(int *)(in_stack_00000008 + 0x40);
          if (iVar3 != 0 || iVar5 != 0) {
            iVar9 = -iVar5;
            if (-1 < *(int *)(in_stack_00000008 + 0x2c)) {
              iVar9 = iVar5;
            }
            in_stack_00000010[1] = iVar12 + iVar9;
            in_stack_00000010[3] = (int)(fVar15 - (float)(int)local_88) - iVar9;
            iVar5 = -iVar3;
            if (-1 < *(int *)(in_stack_00000008 + 0x28)) {
              iVar5 = iVar3;
            }
            if (*(char *)(in_stack_00000008 + 0x38) != '\0') {
              *in_stack_00000010 = local_9c - iVar5 / 2;
            }
            in_stack_00000010[2] = iVar5 + (int)(fVar14 - (float)iVar17);
          }
        }
        goto joined_r0x0045c492;
      }
    }
    in_stack_00000010[0] = 0;
    in_stack_00000010[1] = 0;
    in_stack_00000010[2] = 0;
    in_stack_00000010[3] = 0;
  }
joined_r0x0045c492:
  if (in_stack_00000018 != (undefined8 *)0x0) {
    *(undefined4 *)(in_stack_00000018 + 1) =
         *(undefined4 *)((long)pvStack_b0 + (ulong)uVar8 * 0xc + 8);
    *in_stack_00000018 = *(undefined8 *)((long)pvStack_b0 + (ulong)uVar8 * 0xc);
    *(undefined4 *)((long)in_stack_00000018 + 0x14) =
         *(undefined4 *)((long)pvStack_b0 + (ulong)(uVar7 - 3) * 0xc + 8);
    *(undefined8 *)((long)in_stack_00000018 + 0xc) =
         *(undefined8 *)((long)pvStack_b0 + (ulong)(uVar7 - 3) * 0xc);
    in_stack_00000018[3] = *(undefined8 *)((long)pvStack_b0 + (ulong)(uVar7 - 2) * 0xc);
    *(undefined4 *)(in_stack_00000018 + 4) =
         *(undefined4 *)((long)pvStack_b0 + (ulong)(uVar7 - 2) * 0xc + 8);
    *(undefined4 *)((long)in_stack_00000018 + 0x2c) =
         *(undefined4 *)((long)pvStack_b0 + (ulong)(uVar7 - 1) * 0xc + 8);
    *(undefined8 *)((long)in_stack_00000018 + 0x24) =
         *(undefined8 *)((long)pvStack_b0 + (ulong)(uVar7 - 1) * 0xc);
  }
LAB_0045c4f6:
  if ((float)local_b8 != 0.0) {
    free(pvStack_b0);
  }
  return uVar4 & 0xffffffff;
}


