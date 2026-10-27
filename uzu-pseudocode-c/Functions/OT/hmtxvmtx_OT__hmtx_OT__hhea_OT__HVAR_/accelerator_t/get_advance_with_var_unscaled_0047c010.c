// Function : get_advance_with_var_unscaled
// Namespace: OT:hmtxvmtx_OT__hmtx_OT__hhea_OT__HVAR_:accelerator_t
// Entry    : 0047c010
// Prototype: ulong get_advance_with_var_unscaled(accelerator_t * this, uint param_1, long param_2, long param_3, undefined8 param_4)
// Body     : 0047c010 - 0047c30f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::hmtxvmtx<OT::hmtx, OT::hhea, OT::HVAR>::accelerator_t::get_advance_with_var_unscaled(unsigned
   int, hb_font_t*, float*) const */

ulong __thiscall
OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::get_advance_with_var_unscaled
          (accelerator_t *this,uint param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  hb_face_t *phVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  glyf_accelerator_t *this_00;
  undefined8 extraout_RDX;
  undefined4 *puVar10;
  DeltaSetIndexMap *this_01;
  VarData *this_02;
  VarRegionList *pVVar11;
  ulong uVar12;
  undefined4 *puVar13;
  bool bVar14;
  float fVar15;
  float local_68;
  float local_5c;
  
  if (*(uint *)(this + 4) <= param_1) {
    if (*(int *)(this + 8) == 0) {
      return (ulong)*(uint *)(this + 0x10);
    }
    return 0;
  }
  puVar8 = *(undefined4 **)(this + 0x18);
  puVar10 = &_hb_NullPool;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = &_hb_NullPool;
  }
  uVar7 = *(int *)this - 1U;
  if (param_1 <= *(int *)this - 1U) {
    uVar7 = param_1;
  }
  uVar5 = *(ushort *)(*(long *)(puVar8 + 4) + (ulong)uVar7 * 4);
  uVar5 = uVar5 << 8 | uVar5 >> 8;
  uVar12 = (ulong)uVar5;
  uVar7 = *(uint *)(param_2 + 0x78);
  if (uVar7 != 0) {
    puVar8 = *(undefined4 **)(this + 0x20);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = &_hb_NullPool;
    }
    if (puVar8[6] != 0) {
      puVar13 = &_hb_NullPool;
      if (0x13 < (uint)puVar8[6]) {
        puVar13 = *(undefined4 **)(puVar8 + 4);
      }
      uVar1 = puVar13[2];
      this_01 = (DeltaSetIndexMap *)&_hb_NullPool;
      if (uVar1 != 0) {
        this_01 = (DeltaSetIndexMap *)
                  ((ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                          uVar1 << 0x18) + (long)puVar13);
      }
      lVar2 = *(long *)(param_2 + 0x80);
      uVar6 = DeltaSetIndexMap::map(this_01,param_1);
      uVar1 = puVar13[1];
      if (uVar1 != 0) {
        puVar10 = (undefined4 *)
                  ((long)puVar13 +
                  (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                         uVar1 << 0x18));
      }
      if (uVar6 >> 0x10 <
          (uint)(ushort)(*(ushort *)((long)puVar10 + 6) << 8 | *(ushort *)((long)puVar10 + 6) >> 8))
      {
        uVar1 = puVar10[(ulong)(uVar6 >> 0x10) + 2];
        pVVar11 = (VarRegionList *)&_hb_NullPool;
        this_02 = (VarData *)&_hb_NullPool;
        if (uVar1 != 0) {
          this_02 = (VarData *)
                    ((ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                            uVar1 << 0x18) + (long)puVar10);
        }
        uVar1 = *(uint *)((long)puVar10 + 2);
        if (uVar1 != 0) {
          pVVar11 = (VarRegionList *)
                    ((long)puVar10 +
                    (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                           uVar1 << 0x18));
        }
        fVar15 = VarData::get_delta(this_02,uVar6 & 0xffff,lVar2,uVar7,pVVar11,param_3);
        fVar15 = fVar15 + DAT_005d9044;
      }
      else {
        fVar15 = DAT_005d9044;
      }
      fVar15 = floorf(fVar15);
      return (long)(fVar15 + (float)uVar5);
    }
    lVar2 = *(long *)(param_2 + 0x20);
    puVar8 = (undefined4 *)0x0;
    this_00 = *(glyf_accelerator_t **)(lVar2 + 0xe0);
    while (this_00 == (glyf_accelerator_t *)0x0) {
      phVar4 = *(hb_face_t **)(lVar2 + 0x68);
      if (phVar4 == (hb_face_t *)0x0) {
LAB_0047c2ff:
        this_00 = (glyf_accelerator_t *)&_hb_NullPool;
        break;
      }
      this_00 = calloc(1,0x30);
      if (this_00 == (glyf_accelerator_t *)0x0) {
        puVar8 = &_hb_NullPool;
        LOCK();
        bVar14 = *(long *)(lVar2 + 0xe0) == 0;
        if (bVar14) {
          *(long *)(lVar2 + 0xe0) = (long)&_hb_NullPool;
        }
        UNLOCK();
        if (bVar14) goto LAB_0047c2ff;
      }
      else {
        glyf_accelerator_t::glyf_accelerator_t(this_00,phVar4,extraout_RDX,puVar8,param_4);
        LOCK();
        bVar14 = *(long *)(lVar2 + 0xe0) == 0;
        if (bVar14) {
          *(long *)(lVar2 + 0xe0) = (long)this_00;
        }
        UNLOCK();
        if (bVar14) break;
        glyf_accelerator_t::~glyf_accelerator_t(this_00);
        free(this_00);
      }
      this_00 = *(glyf_accelerator_t **)(lVar2 + 0xe0);
    }
    if (param_1 < *(uint *)(this_00 + 0x1c)) {
      if ((*(int *)(param_2 + 0x78) == 0) ||
         (uVar9 = glyf_accelerator_t::get_points<OT::glyf_accelerator_t::points_aggregator_t>
                            ((ushort *)this_00,param_2,param_1), (char)uVar9 == '\0')) {
        piVar3 = *(int **)(this_00 + 8);
        if (param_1 < (uint)piVar3[1]) {
          puVar8 = &_hb_NullPool;
          if (*(undefined4 **)(piVar3 + 6) != (undefined4 *)0x0) {
            puVar8 = *(undefined4 **)(piVar3 + 6);
          }
          uVar7 = *piVar3 - 1U;
          if (param_1 <= *piVar3 - 1U) {
            uVar7 = param_1;
          }
          uVar5 = *(ushort *)(*(long *)(puVar8 + 4) + (ulong)uVar7 * 4);
          uVar5 = uVar5 << 8 | uVar5 >> 8;
          if (uVar5 == 0) {
            return uVar12;
          }
          return (ulong)uVar5;
        }
        if (piVar3[2] != 0) {
          return uVar12;
        }
        uVar7 = piVar3[4];
        uVar9 = (ulong)uVar7;
      }
      else {
        fVar15 = floorf((local_5c - local_68) + DAT_005d9044);
        fVar15 = (float)(-(uint)(0.0 <= fVar15) & (uint)fVar15);
        if (DAT_00653434 <= fVar15) {
          fVar15 = DAT_00653434;
        }
        uVar9 = (ulong)fVar15;
        uVar7 = (uint)uVar9;
      }
      if (uVar7 != 0) {
        return uVar9;
      }
    }
  }
  return uVar12;
}


