// Function : dispatch_recurse_func<OT::hb_ot_apply_context_t>
// Namespace: OT:Layout:GPOS_impl:PosLookup
// Entry    : 00407770
// Prototype: undefined8 dispatch_recurse_func<OT::hb_ot_apply_context_t>(long param_1, uint param_2)
// Body     : 00407770 - 00407bc8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::hb_ot_apply_context_t::return_t
   OT::Layout::GPOS_impl::PosLookup::dispatch_recurse_func<OT::hb_ot_apply_context_t>(OT::hb_ot_apply_context_t*,
   unsigned int) */

undefined8 __cdecl
OT::Layout::GPOS_impl::PosLookup::dispatch_recurse_func<OT::hb_ot_apply_context_t>
          (long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ushort uVar7;
  short *psVar8;
  undefined8 uVar9;
  ushort *puVar10;
  ulong *puVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  uint uVar14;
  undefined1 uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  bool bVar18;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x98) + 0x138);
  puVar12 = (undefined4 *)*puVar6;
  puVar17 = &_hb_NullPool;
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = &_hb_NullPool;
  }
  psVar8 = (short *)&_hb_NullPool;
  if (3 < (uint)puVar12[6]) {
    psVar8 = *(short **)(puVar12 + 4);
  }
  uVar16 = (ulong)param_2;
  if (*psVar8 == 0x100) {
    uVar2 = psVar8[4];
    puVar17 = &_hb_NullPool;
    puVar13 = (ushort *)&_hb_NullPool;
    if (uVar2 != 0) {
      puVar13 = (ushort *)((long)psVar8 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
    }
    if (param_2 < (ushort)(*puVar13 << 8 | *puVar13 >> 8)) {
      uVar2 = puVar13[uVar16 + 1];
      if (uVar2 == 0) {
        puVar17 = &_hb_NullPool;
      }
      else {
        puVar17 = (undefined4 *)((long)puVar13 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
      }
    }
  }
  uVar3 = *(undefined4 *)(param_1 + 0x130);
  uVar4 = *(undefined4 *)(param_1 + 0x134);
  *(uint *)(param_1 + 0x130) = param_2;
  uVar2 = *(ushort *)((long)puVar17 + 2) >> 8;
  uVar7 = *(ushort *)((long)puVar17 + 2) << 8 | uVar2;
  uVar14 = (uint)uVar7;
  if ((uVar2 & 0x10) != 0) {
    uVar2 = *(ushort *)
             ((long)puVar17 +
             (ulong)(ushort)(*(ushort *)(puVar17 + 1) << 8 | *(ushort *)(puVar17 + 1) >> 8) * 2 + 6)
    ;
    uVar14 = CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar7);
  }
  *(uint *)(param_1 + 0x134) = uVar14;
  *(long *)(param_1 + 0x10) = param_1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x60);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(uint *)(param_1 + 0x18) = uVar14;
  uVar15 = *(undefined1 *)(param_1 + 0x13f);
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar15 = 0;
  }
  bVar18 = *(int *)(param_1 + 0x88) == 1;
  *(bool *)(param_1 + 0x20) = bVar18;
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_1 + 0x13e);
  *(bool *)(param_1 + 0x22) = bVar18;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 300);
  *(undefined1 *)(param_1 + 0x23) = uVar15;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(long *)(param_1 + 0x50) = param_1;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x60);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(uint *)(param_1 + 0x58) = uVar14;
  *(bool *)(param_1 + 0x62) = bVar18;
  *(bool *)(param_1 + 0x60) = *(char *)(param_1 + 0x13d) != '\0' || bVar18;
  *(undefined1 *)(param_1 + 0x61) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined1 *)(param_1 + 99) = uVar15;
  *(undefined1 *)(param_1 + 100) = 0;
  if (param_2 < *(uint *)(puVar6 + 1)) {
    puVar11 = *(ulong **)(puVar6[2] + uVar16 * 8);
    while (puVar11 == (ulong *)0x0) {
      puVar12 = (undefined4 *)*puVar6;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = &_hb_NullPool;
      }
      psVar8 = (short *)&_hb_NullPool;
      if (3 < (uint)puVar12[6]) {
        psVar8 = *(short **)(puVar12 + 4);
      }
      puVar13 = (ushort *)&_hb_NullPool;
      if (*psVar8 == 0x100) {
        uVar2 = psVar8[4];
        puVar10 = (ushort *)&_hb_NullPool;
        if (uVar2 != 0) {
          puVar10 = (ushort *)((long)psVar8 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
        }
        puVar13 = (ushort *)&_hb_NullPool;
        if (param_2 < (ushort)(*puVar10 << 8 | *puVar10 >> 8)) {
          uVar2 = puVar10[uVar16 + 1];
          puVar13 = (ushort *)&_hb_NullPool;
          if (uVar2 != 0) {
            puVar13 = (ushort *)((long)puVar10 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
          }
        }
      }
      puVar11 = hb_ot_layout_lookup_accelerator_t::create<OT::Layout::GPOS_impl::PosLookup>(puVar13)
      ;
      if (puVar11 == (ulong *)0x0) goto LAB_00407ac5;
      plVar1 = (long *)(puVar6[2] + uVar16 * 8);
      LOCK();
      bVar18 = *plVar1 == 0;
      if (bVar18) {
        *plVar1 = (long)puVar11;
      }
      UNLOCK();
      if (bVar18) break;
      free(puVar11);
      puVar11 = *(ulong **)(puVar6[2] + uVar16 * 8);
    }
    uVar2 = *(ushort *)(puVar17 + 1);
    if (uVar2 != 0) {
      uVar14 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
      puVar11 = puVar11 + 10;
      do {
        uVar5 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x70) +
                         (ulong)*(uint *)(*(long *)(param_1 + 0xa0) + 0x5c) * 0x14);
        if (((((puVar11[-2] >> ((ulong)(uVar5 >> 4) & 0x3f) & 1) != 0) &&
             ((puVar11[-1] >> ((ulong)uVar5 & 0x3f) & 1) != 0)) &&
            ((*puVar11 >> ((ulong)(uVar5 >> 9) & 0x3f) & 1) != 0)) &&
           (uVar9 = (*(code *)puVar11[-5])(puVar11[-6],param_1), (char)uVar9 != '\0')) {
          uVar9 = CONCAT71((int7)((ulong)uVar9 >> 8),1);
          goto LAB_00407acf;
        }
        puVar11 = puVar11 + 7;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      uVar9 = 0;
      goto LAB_00407acf;
    }
  }
LAB_00407ac5:
  uVar9 = 0;
LAB_00407acf:
  *(undefined4 *)(param_1 + 0x130) = uVar3;
  *(undefined4 *)(param_1 + 0x134) = uVar4;
  *(long *)(param_1 + 0x10) = param_1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x60);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  uVar15 = 0;
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar15 = *(undefined1 *)(param_1 + 0x13f);
  }
  bVar18 = *(int *)(param_1 + 0x88) == 1;
  *(bool *)(param_1 + 0x20) = bVar18;
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_1 + 0x13e);
  *(bool *)(param_1 + 0x22) = bVar18;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 300);
  *(undefined1 *)(param_1 + 0x23) = uVar15;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(long *)(param_1 + 0x50) = param_1;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x60);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(bool *)(param_1 + 0x62) = bVar18;
  *(bool *)(param_1 + 0x60) = *(char *)(param_1 + 0x13d) != '\0' || bVar18;
  *(undefined1 *)(param_1 + 0x61) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined1 *)(param_1 + 99) = uVar15;
  *(undefined1 *)(param_1 + 100) = 0;
  return uVar9;
}


