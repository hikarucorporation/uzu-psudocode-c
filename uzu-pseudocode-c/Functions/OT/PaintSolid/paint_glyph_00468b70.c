// Function : paint_glyph
// Namespace: OT:PaintSolid
// Entry    : 00468b70
// Prototype: undefined paint_glyph(PaintSolid * this, hb_paint_context_t * param_1, uint param_2)
// Body     : 00468b70 - 00468c69


/* OT::PaintSolid::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintSolid::paint_glyph(PaintSolid *this,hb_paint_context_t *param_1,uint param_2)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  VarData *this_00;
  VarRegionList *pVVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 local_2c;
  
  uVar1 = *(ushort *)(this + 1);
  plVar2 = *(long **)(param_1 + 0x30);
  if ((DeltaSetIndexMap *)plVar2[1] != (DeltaSetIndexMap *)0x0) {
    param_2 = DeltaSetIndexMap::map((DeltaSetIndexMap *)plVar2[1],param_2);
  }
  fVar7 = 0.0;
  if ((int)plVar2[3] != 0) {
    lVar3 = *plVar2;
    if (param_2 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar3 + 6) << 8 | *(ushort *)(lVar3 + 6) >> 8))
    {
      uVar4 = *(uint *)(lVar3 + 8 + (ulong)(param_2 >> 0x10) * 4);
      pVVar5 = (VarRegionList *)&_hb_NullPool;
      this_00 = (VarData *)&_hb_NullPool;
      if (uVar4 != 0) {
        this_00 = (VarData *)
                  ((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18) + lVar3);
      }
      uVar4 = *(uint *)(lVar3 + 2);
      if (uVar4 != 0) {
        pVVar5 = (VarRegionList *)
                 (lVar3 + (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                 uVar4 << 0x18));
      }
      fVar7 = VarData::get_delta(this_00,param_2 & 0xffff,plVar2[2],*(uint *)(plVar2 + 3),pVVar5,
                                 plVar2[4]);
    }
  }
  uVar4 = hb_paint_context_t::get_color
                    (((float)(int)(short)(*(ushort *)(this + 3) << 8 | *(ushort *)(this + 3) >> 8) +
                     fVar7) * DAT_005de5ac,param_1,(uint)(ushort)(uVar1 << 8 | uVar1 >> 8),&local_2c
                    );
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar3 + 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0x80) + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00468c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x40))
            (lVar3,*(undefined8 *)(param_1 + 0x18),local_2c,uVar4,uVar6,*(code **)(lVar3 + 0x40));
  return;
}


