// Function : hb_ot_apply_context_t
// Namespace: OT:hb_ot_apply_context_t
// Entry    : 003f1690
// Prototype: undefined hb_ot_apply_context_t(hb_ot_apply_context_t * this, undefined4 param_1, long param_2, undefined4 * param_3, GDEFVersion1_2<OT::Layout::SmallTypes> * param_4)
// Body     : 003f1690 - 003f1d90


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::hb_ot_apply_context_t::hb_ot_apply_context_t(unsigned int, hb_font_t*, hb_buffer_t*,
   hb_blob_t*) */

void __thiscall
OT::hb_ot_apply_context_t::hb_ot_apply_context_t
          (hb_ot_apply_context_t *this,undefined4 param_1,long param_2,undefined4 *param_3,
          GDEFVersion1_2<OT::Layout::SmallTypes> *param_4)

{
  ushort uVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  accelerator_t *paVar12;
  undefined4 *puVar13;
  void *pvVar14;
  uint *puVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar18;
  uint *puVar19;
  ushort uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  bool bVar24;
  hb_ot_apply_context_t hVar25;
  
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0xffffffff00000000;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x24] = (hb_ot_apply_context_t)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = 0xffffffff00000000;
  *(undefined4 *)(this + 0x60) = 0;
  this[100] = (hb_ot_apply_context_t)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x88) = param_1;
  *(long *)(this + 0x90) = param_2;
  lVar17 = *(long *)(param_2 + 0x20);
  *(long *)(this + 0x98) = lVar17;
  *(undefined4 **)(this + 0xa0) = param_3;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  this[0xd0] = (hb_ot_apply_context_t)0x0;
  *(undefined4 *)(this + 0xe0) = 0x10000;
  *(undefined2 *)(this + 0xe4) = 0;
  if (param_4 == (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0) {
    this[0xd0] = (hb_ot_apply_context_t)0x0;
    puVar16 = param_3;
  }
  else {
    if (*(int *)param_4 != 0) {
      LOCK();
      *(int *)param_4 = *(int *)param_4 + 1;
      UNLOCK();
      lVar17 = *(long *)(this + 0x98);
    }
    *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(this + 0xd8) = param_4;
    this[0xd0] = (hb_ot_apply_context_t)0x0;
    lVar21 = *(long *)(param_4 + 0x10);
    *(long *)(this + 0xb0) = lVar21;
    uVar10 = *(uint *)(param_4 + 0x18);
    puVar16 = (undefined4 *)(ulong)uVar10;
    uVar9 = (uint)((long)puVar16 * 0x40);
    uVar11 = 0x4000;
    if (0x4000 < uVar9) {
      uVar11 = uVar9;
    }
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    *(long *)(this + 0xb8) = lVar21 + (long)puVar16;
    *(uint *)(this + 0xc0) = uVar10;
    uVar10 = 0x3fffffff;
    if ((int)((ulong)((long)puVar16 * 0x40) >> 0x20) == 0) {
      uVar10 = uVar11;
    }
    *(uint *)(this + 0xc4) = uVar10;
    *(undefined4 *)(this + 0xd4) = 0;
    *(undefined4 *)(this + 0xa8) = 0;
    *(undefined4 *)(this + 0xcc) = 0;
  }
  *(undefined8 *)(this + 0xe8) = 0;
  do {
    while( true ) {
      paVar12 = *(accelerator_t **)(lVar17 + 0x128);
      if (paVar12 != (accelerator_t *)0x0) goto LAB_003f1864;
      lVar21 = *(long *)(lVar17 + 0x68);
      if (lVar21 == 0) goto LAB_003f185d;
      paVar12 = calloc(1,0x218);
      if (paVar12 == (accelerator_t *)0x0) break;
                    /* try { // try from 003f181f to 003f1829 has its CatchHandler @ 003f1d93 */
      GDEF::accelerator_t::accelerator_t(paVar12,lVar21,extraout_RDX,puVar16,param_4);
      LOCK();
      bVar24 = *(long *)(lVar17 + 0x128) == 0;
      if (bVar24) {
        *(long *)(lVar17 + 0x128) = (long)paVar12;
      }
      UNLOCK();
      if (bVar24) goto LAB_003f1864;
      GDEF::accelerator_t::~accelerator_t(paVar12);
      free(paVar12);
    }
    puVar16 = &_hb_NullPool;
    LOCK();
    bVar24 = *(long *)(lVar17 + 0x128) == 0;
    if (bVar24) {
      *(long *)(lVar17 + 0x128) = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (!bVar24);
LAB_003f185d:
  paVar12 = (accelerator_t *)&_hb_NullPool;
LAB_003f1864:
  puVar16 = *(undefined4 **)paVar12;
  puVar13 = &_hb_NullPool;
  if (puVar16 == (undefined4 *)0x0) {
    puVar16 = &_hb_NullPool;
  }
  if (3 < (uint)puVar16[6]) {
    puVar13 = *(undefined4 **)(puVar16 + 4);
  }
  *(undefined4 **)(this + 0xf0) = puVar13;
  lVar17 = *(long *)(this + 0x98);
  do {
    while( true ) {
      paVar12 = *(accelerator_t **)(lVar17 + 0x128);
      if (paVar12 != (accelerator_t *)0x0) goto LAB_003f18fe;
      lVar21 = *(long *)(lVar17 + 0x68);
      if (lVar21 == 0) goto LAB_003f18f7;
      paVar12 = calloc(1,0x218);
      if (paVar12 == (accelerator_t *)0x0) break;
                    /* try { // try from 003f18b9 to 003f18c3 has its CatchHandler @ 003f1d91 */
      GDEF::accelerator_t::accelerator_t(paVar12,lVar21,extraout_RDX_00,puVar16,param_4);
      LOCK();
      bVar24 = *(long *)(lVar17 + 0x128) == 0;
      if (bVar24) {
        *(long *)(lVar17 + 0x128) = (long)paVar12;
      }
      UNLOCK();
      if (bVar24) goto LAB_003f18fe;
      GDEF::accelerator_t::~accelerator_t(paVar12);
      free(paVar12);
    }
    puVar16 = &_hb_NullPool;
    LOCK();
    bVar24 = *(long *)(lVar17 + 0x128) == 0;
    if (bVar24) {
      *(long *)(lVar17 + 0x128) = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (!bVar24);
LAB_003f18f7:
  paVar12 = (accelerator_t *)&_hb_NullPool;
LAB_003f18fe:
  *(accelerator_t **)(this + 0xf8) = paVar12;
  psVar3 = *(short **)(this + 0xf0);
  puVar16 = &_hb_NullPool;
  if ((*psVar3 == 0x100) &&
     (0x10002 < (((uint)(ushort)psVar3[1] | ((ushort)psVar3[1] & 0xff) << 0x10) >> 8 | 0x10000))) {
    uVar10 = *(uint *)(psVar3 + 7);
    if (uVar10 != 0) {
      puVar16 = (undefined4 *)
                ((long)psVar3 +
                (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                       uVar10 << 0x18));
      goto LAB_003f1948;
    }
    puVar16 = &_hb_NullPool;
    *(undefined4 **)(this + 0x100) = &_hb_NullPool;
    iVar2 = *(int *)(this + 0x88);
  }
  else {
LAB_003f1948:
    *(undefined4 **)(this + 0x100) = puVar16;
    iVar2 = *(int *)(this + 0x88);
  }
  if ((iVar2 == 1) && (*(int *)(*(long *)(this + 0x90) + 0x78) != 0)) {
    uVar10 = *(uint *)((long)puVar16 + 2);
    if (uVar10 == 0) {
      puVar16 = &_hb_NullPool;
    }
    else {
      puVar16 = (undefined4 *)
                ((long)puVar16 +
                (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                       uVar10 << 0x18));
    }
    uVar1 = *(ushort *)((long)puVar16 + 2);
    uVar20 = uVar1 << 8 | uVar1 >> 8;
    pvVar14 = malloc((ulong)uVar20 << 2);
    uVar7 = _UNK_005de06c;
    uVar6 = _UNK_005de068;
    uVar5 = _UNK_005de064;
    uVar4 = _DAT_005de060;
    if (pvVar14 != (void *)0x0) {
      if (uVar1 != 0) {
        uVar10 = 1;
        if (1 < uVar20) {
          uVar10 = (uint)uVar20;
        }
        if ((ushort)uVar10 < 8) {
          uVar18 = 0;
        }
        else {
          uVar18 = (ulong)(uVar10 & 0xfff8);
          uVar23 = (uVar18 - 8 >> 3) + 1;
          uVar22 = (ulong)((uint)uVar23 & 7);
          if (uVar18 - 8 < 0x38) {
            lVar17 = 0;
          }
          else {
            uVar23 = uVar23 & 0xfffffffffffffff8;
            lVar17 = 0;
            do {
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0x10);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0x20);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0x30);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0x40);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0x50);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0x60);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0x70);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0x80);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0x90);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0xa0);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0xb0);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0xc0);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0xd0);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0xe0);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar17 * 4 + 0xf0);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              lVar17 = lVar17 + 0x40;
              uVar23 = uVar23 - 8;
            } while (uVar23 != 0);
          }
          uVar7 = _UNK_005de06c;
          uVar6 = _UNK_005de068;
          uVar5 = _UNK_005de064;
          uVar4 = _DAT_005de060;
          if (uVar22 != 0) {
            lVar21 = 0;
            do {
              puVar16 = (undefined4 *)((long)pvVar14 + lVar21 + lVar17 * 4);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              puVar16 = (undefined4 *)((long)pvVar14 + lVar21 + lVar17 * 4 + 0x10);
              *puVar16 = uVar4;
              puVar16[1] = uVar5;
              puVar16[2] = uVar6;
              puVar16[3] = uVar7;
              lVar21 = lVar21 + 0x20;
            } while (uVar22 * 0x20 != lVar21);
          }
          if (uVar18 == uVar10) goto LAB_003f1aef;
        }
        do {
          *(undefined4 *)((long)pvVar14 + uVar18 * 4) = 0x40000000;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
      goto LAB_003f1aef;
    }
  }
  pvVar14 = (void *)0x0;
LAB_003f1aef:
  *(void **)(this + 0x108) = pvVar14;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  uVar10 = param_3[0x18];
  if (uVar10 != 0) {
    puVar19 = *(uint **)(param_3 + 0x1c);
    uVar11 = uVar10 - 1;
    puVar15 = puVar19;
    if (uVar11 < 3) {
      uVar18 = 0;
    }
    else {
      uVar9 = uVar10 & 0xfffffffc;
      uVar18 = 0;
      do {
        uVar18 = uVar18 | 1L << ((ulong)(*puVar15 >> 4) & 0x3f) |
                 1L << ((ulong)(puVar15[5] >> 4) & 0x3f) | 1L << ((ulong)(puVar15[10] >> 4) & 0x3f)
                 | 1L << ((ulong)(puVar15[0xf] >> 4) & 0x3f);
        puVar15 = puVar15 + 0x14;
        uVar9 = uVar9 - 4;
      } while (uVar9 != 0);
    }
    if ((uVar10 & 3) != 0) {
      lVar17 = 0;
      do {
        uVar18 = uVar18 | 1L << ((ulong)(*(uint *)((long)puVar15 + lVar17) >> 4) & 0x3f);
        lVar17 = lVar17 + 0x14;
      } while ((uVar10 & 3) * 0x14 != (int)lVar17);
    }
    *(ulong *)(this + 0x110) = uVar18;
    puVar15 = puVar19;
    if (uVar11 < 3) {
      uVar18 = 0;
    }
    else {
      uVar9 = uVar10 & 0xfffffffc;
      uVar18 = 0;
      do {
        uVar18 = uVar18 | 1L << ((ulong)(byte)*puVar15 & 0x3f) |
                 1L << ((ulong)(byte)puVar15[5] & 0x3f) | 1L << ((ulong)(byte)puVar15[10] & 0x3f) |
                 1L << ((ulong)(byte)puVar15[0xf] & 0x3f);
        puVar15 = puVar15 + 0x14;
        uVar9 = uVar9 - 4;
      } while (uVar9 != 0);
    }
    if ((uVar10 & 3) != 0) {
      lVar17 = 0;
      do {
        uVar18 = uVar18 | 1L << ((ulong)*(byte *)((long)puVar15 + lVar17) & 0x3f);
        lVar17 = lVar17 + 0x14;
      } while ((uVar10 & 3) * 0x14 != (int)lVar17);
    }
    *(ulong *)(this + 0x118) = uVar18;
    if (uVar11 < 3) {
      uVar18 = 0;
    }
    else {
      uVar11 = uVar10 & 0xfffffffc;
      uVar18 = 0;
      do {
        uVar18 = uVar18 | 1L << ((ulong)(*puVar19 >> 9) & 0x3f) |
                 1L << ((ulong)(puVar19[5] >> 9) & 0x3f) | 1L << ((ulong)(puVar19[10] >> 9) & 0x3f)
                 | 1L << ((ulong)(puVar19[0xf] >> 9) & 0x3f);
        puVar19 = puVar19 + 0x14;
        uVar11 = uVar11 - 4;
      } while (uVar11 != 0);
    }
    if ((uVar10 & 3) != 0) {
      lVar17 = 0;
      do {
        uVar18 = uVar18 | 1L << ((ulong)(*(uint *)((long)puVar19 + lVar17) >> 9) & 0x3f);
        lVar17 = lVar17 + 0x14;
      } while ((uVar10 & 3) * 0x14 != (int)lVar17);
    }
    *(ulong *)(this + 0x120) = uVar18;
  }
  *(undefined4 *)(this + 0x128) = param_3[0xe];
  uVar8 = _UNK_005de078;
  *(undefined8 *)(this + 300) = _DAT_005de070;
  *(undefined8 *)(this + 0x134) = uVar8;
  hVar25 = (hb_ot_apply_context_t)(iVar2 == 1);
  this[0x13c] = (hb_ot_apply_context_t)
                ((*(short **)(this + 0xf0))[2] != 0 && **(short **)(this + 0xf0) == 0x100);
  *(undefined4 *)(this + 0x13d) = 0x101;
  *(undefined8 *)(this + 0x144) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x14c) = 0;
  *(hb_ot_apply_context_t **)(this + 0x10) = this;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0xa0) + 0x60);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x18) = 0x100000000;
  this[0x20] = hVar25;
  this[0x21] = (hb_ot_apply_context_t)0x1;
  this[0x22] = hVar25;
  *(undefined2 *)(this + 0x23) = 0;
  *(hb_ot_apply_context_t **)(this + 0x50) = this;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(*(long *)(this + 0xa0) + 0x60);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x58) = 0xffffffff00000000;
  *(undefined2 *)(this + 0x60) = 0x101;
  this[0x62] = hVar25;
  *(undefined2 *)(this + 99) = 0;
  return;
}


