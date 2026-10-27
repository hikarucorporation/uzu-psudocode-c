// Function : mults_changed
// Namespace: hb_font_t
// Entry    : 00440d80
// Prototype: undefined8 mults_changed(hb_font_t * this)
// Body     : 00440d80 - 00440f33


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_font_t::mults_changed() */

undefined8 __thiscall hb_font_t::mults_changed(hb_font_t *this)

{
  undefined8 uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar6 = *(long *)(this + 0x20);
  uVar3 = *(uint *)(lVar6 + 0x14);
  if (uVar3 == 0) {
    puVar5 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
             ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                    *)(lVar6 + 0x70));
    uVar2 = *(ushort *)((long)puVar5 + 0x12) << 8 | *(ushort *)((long)puVar5 + 0x12) >> 8;
    uVar3 = 1000;
    if (uVar2 - 0x10 < 0x3ff1) {
      uVar3 = (uint)uVar2;
    }
    *(uint *)(lVar6 + 0x14) = uVar3;
  }
  fVar12 = (float)uVar3;
  lVar4 = (long)*(int *)(this + 0x28);
  fVar11 = (float)*(int *)(this + 0x28);
  *(float *)(this + 0x4c) = fVar11 / fVar12;
  lVar7 = (long)*(int *)(this + 0x2c);
  fVar8 = (float)*(int *)(this + 0x2c);
  lVar6 = lVar4 << 0x10;
  if (lVar4 < 0) {
    lVar6 = lVar4 * 0x10000;
  }
  fVar9 = floorf(*(float *)(this + 0x30) * fVar11 + DAT_005d9044);
  fVar10 = floorf(*(float *)(this + 0x34) * fVar8 + DAT_005d9044);
  *(float *)(this + 0x50) = fVar8 / fVar12;
  *(long *)(this + 0x58) = (long)((float)lVar6 / fVar12);
  lVar6 = lVar7 << 0x10;
  if (lVar7 < 0) {
    lVar6 = lVar7 * 0x10000;
  }
  *(long *)(this + 0x60) = (long)((float)lVar6 / fVar12);
  uVar3 = _DAT_005d91c0;
  *(int *)(this + 0x3c) = (int)(float)((uint)fVar9 & _DAT_005d91c0);
  *(int *)(this + 0x40) = (int)(float)((uint)fVar10 & uVar3);
  if (lVar7 == 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = (fVar11 * *(float *)(this + 0x44)) / fVar8;
  }
  *(float *)(this + 0x48) = fVar8;
  *(undefined8 *)(this + 0xb0) = 0;
  uVar1 = *(undefined8 *)(this + 0xb8);
  *(undefined8 *)(this + 0xb8) = 0;
  return uVar1;
}


