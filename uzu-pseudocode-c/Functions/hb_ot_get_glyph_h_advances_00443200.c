// Function : hb_ot_get_glyph_h_advances
// Namespace: 
// Entry    : 00443200
// Prototype: undefined hb_ot_get_glyph_h_advances(long param_1, long * param_2, uint param_3, uint * param_4, uint param_5, int * param_6, uint param_7)
// Body     : 00443200 - 004437a0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_get_glyph_h_advances(hb_font_t*, void*, unsigned int, unsigned int const*, unsigned int,
   int*, unsigned int, void*) */

void __cdecl
hb_ot_get_glyph_h_advances
          (long param_1,long *param_2,uint param_3,uint *param_4,uint param_5,int *param_6,
          uint param_7)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  hb_face_t *phVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  void *__ptr;
  accelerator_t *this;
  hb_cache_t<24u,16u,8u,true> *this_00;
  undefined4 *puVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 extraout_RDX;
  ushort uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long *plVar21;
  int *piVar22;
  uint uVar23;
  bool bVar24;
  
  puVar3 = (undefined8 *)*param_2;
  this = (accelerator_t *)puVar3[5];
  puVar10 = param_4;
  while (this == (accelerator_t *)0x0) {
    phVar4 = (hb_face_t *)*puVar3;
    if (phVar4 == (hb_face_t *)0x0) {
      this = (accelerator_t *)&_hb_NullPool;
      break;
    }
    plVar21 = param_2;
    this = calloc(1,0x28);
    if (this == (accelerator_t *)0x0) {
      puVar10 = &_hb_NullPool;
      LOCK();
      bVar24 = puVar3[5] == 0;
      if (bVar24) {
        puVar3[5] = &_hb_NullPool;
      }
      UNLOCK();
      if (bVar24) {
        this = (accelerator_t *)&_hb_NullPool;
        break;
      }
    }
    else {
      OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::accelerator_t
                (this,phVar4,extraout_RDX,puVar10,plVar21);
      LOCK();
      bVar24 = puVar3[5] == 0;
      if (bVar24) {
        puVar3[5] = this;
      }
      UNLOCK();
      if (bVar24) break;
      OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::~accelerator_t(this);
      free(this);
    }
    this = (accelerator_t *)puVar3[5];
  }
  puVar14 = *(undefined4 **)(this + 0x20);
  puVar7 = &_hb_NullPool;
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = &_hb_NullPool;
  }
  puVar8 = &_hb_NullPool;
  if (0x13 < (uint)puVar14[6]) {
    puVar8 = *(undefined4 **)(puVar14 + 4);
  }
  uVar23 = puVar8[1];
  if (uVar23 != 0) {
    puVar7 = (undefined4 *)
             ((long)puVar8 +
             (ulong)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                    uVar23 << 0x18));
  }
  iVar16 = *(int *)(param_1 + 0x78);
  if (iVar16 * param_3 < 0x80) {
    __ptr = (void *)0x0;
  }
  else {
    uVar23 = *(uint *)((long)puVar7 + 2);
    if (uVar23 == 0) {
      puVar7 = &_hb_NullPool;
    }
    else {
      puVar7 = (undefined4 *)
               ((long)puVar7 +
               (ulong)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                      uVar23 << 0x18));
    }
    uVar1 = *(ushort *)((long)puVar7 + 2);
    uVar12 = uVar1 << 8 | uVar1 >> 8;
    __ptr = malloc((ulong)uVar12 << 2);
    uVar6 = _UNK_005de068;
    uVar5 = _DAT_005de060;
    if (__ptr == (void *)0x0) {
      __ptr = (void *)0x0;
    }
    else if (uVar1 != 0) {
      uVar23 = 1;
      if (1 < uVar12) {
        uVar23 = (uint)uVar12;
      }
      if ((ushort)uVar23 < 8) {
        uVar9 = 0;
      }
      else {
        uVar9 = (ulong)(uVar23 & 0xfff8);
        uVar15 = (uVar9 - 8 >> 3) + 1;
        uVar13 = (ulong)((uint)uVar15 & 7);
        if (uVar9 - 8 < 0x38) {
          lVar18 = 0;
        }
        else {
          uVar15 = uVar15 & 0xfffffffffffffff8;
          lVar18 = 0;
          do {
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0x10);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0x20);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0x30);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0x40);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0x50);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0x60);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0x70);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0x80);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0x90);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0xa0);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0xb0);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0xc0);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0xd0);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0xe0);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar18 * 4 + 0xf0);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            lVar18 = lVar18 + 0x40;
            uVar15 = uVar15 - 8;
          } while (uVar15 != 0);
        }
        uVar6 = _UNK_005de068;
        uVar5 = _DAT_005de060;
        if (uVar13 != 0) {
          lVar19 = 0;
          do {
            puVar3 = (undefined8 *)((long)__ptr + lVar19 + lVar18 * 4);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3 = (undefined8 *)((long)__ptr + lVar19 + lVar18 * 4 + 0x10);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            lVar19 = lVar19 + 0x20;
          } while (uVar13 * 0x20 != lVar19);
        }
        if (uVar9 == uVar23) goto joined_r0x004432f9;
      }
      do {
        *(undefined4 *)((long)__ptr + uVar9 * 4) = 0x40000000;
        uVar9 = uVar9 + 1;
      } while (uVar23 != uVar9);
    }
  }
joined_r0x004432f9:
  plVar21 = param_2;
  if (iVar16 == 0) {
LAB_0044352d:
    if (param_3 != 0) {
      piVar22 = param_6;
      uVar23 = param_3;
      do {
        uVar9 = OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::
                get_advance_with_var_unscaled(this,*param_4,param_1,(long)__ptr,plVar21);
        *piVar22 = (int)((ulong)((long)(short)uVar9 * *(long *)(param_1 + 0x58) + 0x8000) >> 0x10);
        param_4 = (uint *)((long)param_4 + (ulong)param_5);
        piVar22 = (int *)((long)piVar22 + (ulong)param_7);
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  else {
    lVar18 = param_2[3];
    while (lVar18 == 0) {
      plVar21 = param_2;
      this_00 = calloc(1,0x400);
      if (this_00 == (hb_cache_t<24u,16u,8u,true> *)0x0) goto LAB_0044352d;
      hb_cache_t<24u,16u,8u,true>::clear(this_00);
      LOCK();
      bVar24 = param_2[3] == 0;
      if (bVar24) {
        param_2[3] = (long)this_00;
      }
      UNLOCK();
      if (bVar24) {
        *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x14);
        if ((int)param_2[2] == *(int *)(param_1 + 0x14)) goto LAB_0044344e;
        goto LAB_00443434;
      }
      free(this_00);
      lVar18 = param_2[3];
    }
    if ((int)param_2[2] != *(int *)(param_1 + 0x14)) {
LAB_00443434:
      hb_cache_t<24u,16u,8u,true>::clear((hb_cache_t<24u,16u,8u,true> *)param_2[3]);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x14);
    }
LAB_0044344e:
    if (param_3 != 0) {
      piVar22 = param_6;
      uVar23 = param_3;
      do {
        uVar11 = *param_4;
        uVar2 = *(uint *)(param_2[3] + (ulong)(uVar11 & 0xff) * 4);
        if ((uVar2 == 0xffffffff) || (uVar2 >> 0x10 != uVar11 >> 8)) {
          uVar9 = OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::
                  get_advance_with_var_unscaled(this,uVar11,param_1,(long)__ptr,param_2);
          if (((uint)uVar9 < 0x10000) && (uVar11 = *param_4, uVar11 < 0x1000000)) {
            *(uint *)(param_2[3] + (ulong)(uVar11 & 0xff) * 4) =
                 (uVar11 & 0xffff00) << 8 | (uint)uVar9;
          }
        }
        else {
          uVar9 = (ulong)(ushort)uVar2;
        }
        *piVar22 = (int)((ulong)((long)(short)uVar9 * *(long *)(param_1 + 0x58) + 0x8000) >> 0x10);
        param_4 = (uint *)((long)param_4 + (ulong)param_5);
        piVar22 = (int *)((long)piVar22 + (ulong)param_7);
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  free(__ptr);
  iVar16 = *(int *)(param_1 + 0x3c);
  if ((iVar16 != 0) && (*(char *)(param_1 + 0x38) == '\0')) {
    iVar20 = -iVar16;
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar20 = iVar16;
    }
    if (param_3 != 0) {
      uVar9 = (ulong)param_7;
      uVar23 = param_3 & 3;
      if (2 < param_3 - 1) {
        uVar11 = param_3 & 0xfffffffc;
        piVar22 = param_6;
        do {
          iVar16 = iVar20;
          if (*piVar22 == 0) {
            iVar16 = 0;
          }
          *piVar22 = iVar16 + *piVar22;
          iVar16 = iVar20;
          if (*(int *)((long)piVar22 + uVar9) == 0) {
            iVar16 = 0;
          }
          *(int *)((long)piVar22 + uVar9) = iVar16 + *(int *)((long)piVar22 + uVar9);
          iVar16 = *(int *)((long)piVar22 + uVar9 * 2);
          iVar17 = iVar20;
          if (iVar16 == 0) {
            iVar17 = 0;
          }
          *(int *)((long)piVar22 + uVar9 * 2) = iVar17 + iVar16;
          param_6 = piVar22 + uVar9;
          iVar16 = *(int *)((long)piVar22 + uVar9 * 3);
          iVar17 = iVar20;
          if (iVar16 == 0) {
            iVar17 = 0;
          }
          *(int *)((long)piVar22 + uVar9 * 3) = iVar17 + iVar16;
          uVar11 = uVar11 - 4;
          piVar22 = param_6;
        } while (uVar11 != 0);
      }
      for (; uVar23 != 0; uVar23 = uVar23 - 1) {
        iVar16 = iVar20;
        if (*param_6 == 0) {
          iVar16 = 0;
        }
        *param_6 = iVar16 + *param_6;
        param_6 = (int *)((long)param_6 + uVar9);
      }
    }
  }
  return;
}


