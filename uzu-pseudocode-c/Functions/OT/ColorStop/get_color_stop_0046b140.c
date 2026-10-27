// Function : get_color_stop
// Namespace: OT:ColorStop
// Entry    : 0046b140
// Prototype: undefined get_color_stop(ColorStop * this, hb_paint_context_t * param_1, float * param_2, uint param_3, long * param_4)
// Body     : 0046b140 - 0046b2c2


/* OT::ColorStop::get_color_stop(OT::hb_paint_context_t*, hb_color_stop_t*, unsigned int,
   OT::ItemVarStoreInstancer const&) const */

void __thiscall
OT::ColorStop::get_color_stop
          (ColorStop *this,hb_paint_context_t *param_1,float *param_2,uint param_3,long *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  VarData *pVVar6;
  VarRegionList *pVVar7;
  float fVar8;
  
  uVar5 = param_3;
  if ((DeltaSetIndexMap *)param_4[1] != (DeltaSetIndexMap *)0x0) {
    uVar5 = DeltaSetIndexMap::map((DeltaSetIndexMap *)param_4[1],param_3);
  }
  fVar8 = 0.0;
  if ((int)param_4[3] != 0) {
    lVar4 = *param_4;
    if (uVar5 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar4 + 6) << 8 | *(ushort *)(lVar4 + 6) >> 8)) {
      uVar2 = *(uint *)(lVar4 + 8 + (ulong)(uVar5 >> 0x10) * 4);
      pVVar7 = (VarRegionList *)&_hb_NullPool;
      pVVar6 = (VarData *)&_hb_NullPool;
      if (uVar2 != 0) {
        pVVar6 = (VarData *)
                 ((ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18) + lVar4);
      }
      uVar2 = *(uint *)(lVar4 + 2);
      if (uVar2 != 0) {
        pVVar7 = (VarRegionList *)
                 (lVar4 + (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                 uVar2 << 0x18));
      }
      fVar8 = VarData::get_delta(pVVar6,uVar5 & 0xffff,param_4[2],*(uint *)(param_4 + 3),pVVar7,
                                 param_4[4]);
    }
  }
  *param_2 = ((float)(int)(short)(*(ushort *)this << 8 | *(ushort *)this >> 8) + fVar8) *
             DAT_005de5ac;
  uVar1 = *(ushort *)(this + 2);
  if ((DeltaSetIndexMap *)param_4[1] == (DeltaSetIndexMap *)0x0) {
    uVar5 = param_3 + 1;
    iVar3 = (int)param_4[3];
  }
  else {
    uVar5 = param_3 + 1;
    if (param_3 == 0xffffffff) {
      uVar5 = 0xffffffff;
    }
    uVar5 = DeltaSetIndexMap::map((DeltaSetIndexMap *)param_4[1],uVar5);
    iVar3 = (int)param_4[3];
  }
  fVar8 = 0.0;
  if (iVar3 != 0) {
    fVar8 = 0.0;
    lVar4 = *param_4;
    if (uVar5 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar4 + 6) << 8 | *(ushort *)(lVar4 + 6) >> 8)) {
      uVar2 = *(uint *)(lVar4 + 8 + (ulong)(uVar5 >> 0x10) * 4);
      pVVar7 = (VarRegionList *)&_hb_NullPool;
      pVVar6 = (VarData *)&_hb_NullPool;
      if (uVar2 != 0) {
        pVVar6 = (VarData *)
                 ((ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18) + lVar4);
      }
      uVar2 = *(uint *)(lVar4 + 2);
      if (uVar2 != 0) {
        pVVar7 = (VarRegionList *)
                 (lVar4 + (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                 uVar2 << 0x18));
      }
      fVar8 = VarData::get_delta(pVVar6,uVar5 & 0xffff,param_4[2],*(uint *)(param_4 + 3),pVVar7,
                                 param_4[4]);
    }
  }
  fVar8 = (float)hb_paint_context_t::get_color
                           (((float)(int)(short)(*(ushort *)(this + 4) << 8 |
                                                *(ushort *)(this + 4) >> 8) + fVar8) * DAT_005de5ac,
                            param_1,(uint)(ushort)(uVar1 << 8 | uVar1 >> 8),param_2 + 1);
  param_2[2] = fVar8;
  return;
}


