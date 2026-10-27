// Function : arabic_fallback_shape
// Namespace: 
// Entry    : 00434f70
// Prototype: ulong arabic_fallback_shape(long param_1, long param_2, undefined4 * param_3)
// Body     : 00434f70 - 004352ad


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* arabic_fallback_shape(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

ulong __cdecl arabic_fallback_shape(long param_1,long param_2,undefined4 *param_3)

{
  byte bVar1;
  short sVar2;
  long lVar3;
  short *psVar4;
  ulong *puVar5;
  ushort uVar6;
  hb_buffer_t *this;
  int iVar7;
  ushort uVar8;
  undefined8 in_RAX;
  undefined7 uVar13;
  ushort *puVar9;
  short *psVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint uVar14;
  ulong uVar15;
  bool bVar16;
  hb_ot_apply_context_t local_180 [16];
  hb_ot_apply_context_t *local_170;
  uint local_168;
  uint local_164;
  undefined1 local_160;
  undefined1 local_15f;
  undefined1 local_15e;
  undefined1 local_15d;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  int local_140;
  hb_ot_apply_context_t *local_130;
  uint local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined1 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  int local_100;
  int local_f8;
  hb_buffer_t *local_e0;
  hb_sanitize_context_t local_d8 [96];
  void *local_78;
  uint local_54;
  uint local_4c;
  char local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_38;
  
  lVar3 = *(long *)(param_1 + 0x88);
  bVar1 = *(byte *)(lVar3 + 0x28);
  uVar13 = (undefined7)((ulong)in_RAX >> 8);
  if ((bVar1 & 1) != 0) {
    puVar12 = *(uint **)(lVar3 + 0x20);
    while (puVar12 == (uint *)0x0) {
      puVar12 = arabic_fallback_plan_create(param_1,param_2);
      LOCK();
      bVar16 = *(long *)(lVar3 + 0x20) == 0;
      if (bVar16) {
        *(long *)(lVar3 + 0x20) = (long)puVar12;
      }
      UNLOCK();
      if (bVar16) break;
      arabic_fallback_plan_destroy(puVar12);
      puVar12 = *(uint **)(lVar3 + 0x20);
    }
    OT::hb_ot_apply_context_t::hb_ot_apply_context_t
              (local_180,0,param_2,param_3,(GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
    uVar14 = *puVar12;
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        this = local_e0;
        psVar4 = *(short **)(puVar12 + uVar15 * 2 + 10);
        if (psVar4 != (short *)0x0) {
          local_164 = puVar12[uVar15 + 2];
          local_38 = 0xffffffff;
          local_170 = local_180;
          local_100 = *(int *)(local_e0 + 0x60);
          local_158 = 0;
          uStack_150 = 0;
          local_148 = 0;
          local_168 = local_4c;
          local_15d = local_41;
          if (local_f8 != 0) {
            local_15d = 0;
          }
          local_160 = local_f8 == 1;
          local_15f = local_42;
          local_15c = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = 0;
          local_128 = local_4c;
          local_120 = local_43 != '\0' || (bool)local_160;
          local_11f = 1;
          local_124 = 0xffffffff;
          local_11c = 0;
          puVar5 = *(ulong **)(puVar12 + uVar15 * 2 + 0x18);
          local_15e = local_160;
          local_140 = local_100;
          local_130 = local_170;
          local_11e = local_160;
          local_11d = local_15d;
          local_54 = local_164;
          if (puVar5 != (ulong *)0x0) {
            local_140 = *(int *)(local_e0 + 0x60);
            iVar7 = local_100;
            if ((local_140 != 0) && (local_164 != 0)) {
              uVar6 = (ushort)psVar4[1] >> 8;
              uVar8 = psVar4[1] << 8 | uVar6;
              local_168 = (uint)uVar8;
              uVar14 = (uint)(ushort)(psVar4[2] << 8 | (ushort)psVar4[2] >> 8);
              if ((uVar6 & 0x10) != 0) {
                local_168 = CONCAT22(psVar4[(ulong)uVar14 + 3] << 8 |
                                     (ushort)psVar4[(ulong)uVar14 + 3] >> 8,uVar8);
              }
              local_170 = local_180;
              local_158 = 0;
              uStack_150 = 0;
              local_148 = 0;
              local_118 = 0;
              uStack_110 = 0;
              local_108 = 0;
              local_11f = 1;
              sVar2 = *psVar4;
              local_130 = local_170;
              local_128 = local_168;
              local_100 = local_140;
              local_4c = local_168;
              if (sVar2 == 0x700) {
                puVar9 = (ushort *)&_hb_NullPool;
                if (psVar4[2] != 0) {
                  puVar9 = (ushort *)(psVar4 + 3);
                }
                uVar6 = *puVar9;
                psVar10 = (short *)&_hb_NullPool;
                if (uVar6 != 0) {
                  psVar10 = (short *)((long)psVar4 + (ulong)(ushort)(uVar6 << 8 | uVar6 >> 8));
                }
                if (*psVar10 == 0x100) {
                  sVar2 = psVar10[1];
                  goto joined_r0x0043523b;
                }
              }
              else {
joined_r0x0043523b:
                if (sVar2 == 0x800) {
                  *(int *)(local_e0 + 0x5c) = *(int *)(local_e0 + 0x60) + -1;
                    /* try { // try from 00434fe6 to 004351d0 has its CatchHandler @ 004352ae */
                  apply_backward(local_180,puVar5,uVar14);
                  iVar7 = local_140;
                  goto LAB_00434ff0;
                }
              }
              *(undefined2 *)(local_e0 + 0x5a) = 1;
              *(undefined4 *)(local_e0 + 100) = 0;
              *(undefined8 *)(local_e0 + 0x78) = *(undefined8 *)(local_e0 + 0x70);
              *(undefined4 *)(local_e0 + 0x5c) = 0;
              apply_forward(local_180,puVar5,uVar14);
              hb_buffer_t::sync(this);
              iVar7 = local_140;
            }
LAB_00434ff0:
            local_140 = iVar7;
            uVar14 = *puVar12;
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar14);
    }
    free(local_78);
    uVar11 = hb_sanitize_context_t::~hb_sanitize_context_t(local_d8);
    uVar13 = (undefined7)((ulong)uVar11 >> 8);
  }
  return CONCAT71(uVar13,bVar1) & 0xffffffffffffff01;
}


