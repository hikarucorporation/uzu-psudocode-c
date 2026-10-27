// Function : createPath
// Namespace: juce:PositionedGlyph
// Entry    : 003cca10
// Prototype: undefined createPath(PositionedGlyph * this, Path * param_1, undefined8 param_2, ulong param_3, uint * param_4, ulong param_5)
// Body     : 003cca10 - 003ccf07


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::PositionedGlyph::createPath(juce::Path&) const */

void __thiscall
juce::PositionedGlyph::createPath
          (PositionedGlyph *this,Path *param_1,undefined8 param_2,ulong param_3,uint *param_4,
          ulong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  SharedFontInternal *this_00;
  undefined8 uVar5;
  ushort uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  void *pvVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_a8;
  long *local_88;
  float local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined1 local_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  if (this[0x1c] != (PositionedGlyph)0x0) {
    return;
  }
  Font::SharedFontInternal::getTypefacePtr
            ((SharedFontInternal *)&local_88,*(long *)this,(long *)this,param_3,param_4,param_5);
  if (local_88 == (long *)0x0) {
    return;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = 1;
  iVar15 = *(int *)(*(long *)this + 0x60);
  uVar4 = *(undefined4 *)(this + 0xc);
                    /* try { // try from 003cca7d to 003ccad5 has its CatchHandler @ 003ccf18 */
  plVar7 = (long *)(**(code **)(*local_88 + 0x18))();
  lVar10 = *plVar7;
  lVar8 = (**(code **)(*local_88 + 0x18))();
  if (iVar15 == 1) {
    puVar9 = (undefined8 *)(lVar8 + 0x10);
  }
  else {
    local_a8 = 0;
    if (iVar15 != 0) goto LAB_003ccab7;
    puVar9 = (undefined8 *)(lVar8 + 8);
  }
  local_a8 = *puVar9;
LAB_003ccab7:
  lVar8 = *(long *)(lVar10 + 0x20);
  uVar14 = *(uint *)(lVar8 + 0x14);
  if (uVar14 == 0) {
                    /* try { // try from 003ccedf to 003ccee3 has its CatchHandler @ 003ccf18 */
    puVar12 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
              ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                     *)(lVar8 + 0x70));
    uVar6 = *(ushort *)((long)puVar12 + 0x12) << 8 | *(ushort *)((long)puVar12 + 0x12) >> 8;
    uVar13 = uVar6 - 0x10;
    param_3 = (ulong)uVar13;
    uVar14 = 1000;
    if (uVar13 < 0x3ff1) {
      uVar14 = (uint)uVar6;
    }
    *(uint *)(lVar8 + 0x14) = uVar14;
  }
  getGlyphPathInGlyphUnits((juce *)&local_80,uVar4,lVar10);
  fVar21 = (DAT_005d9038 / (local_a8._4_4_ + (float)local_a8)) / (float)uVar14;
  local_58 = (void *)CONCAT44(uStack_7c,local_80);
  uStack_50._4_4_ = iStack_74;
  uStack_40 = uStack_68;
  local_38 = local_60;
  local_70 = _DAT_006524b0 ^ (uint)fVar21;
  uStack_7c = 0;
  uStack_78 = 0;
  iStack_74 = 0;
  uStack_6c = 0;
  local_80 = fVar21;
  Path::applyTransform((Path *)&local_58,&local_80);
  this_00 = *(SharedFontInternal **)this;
  fVar21 = *(float *)(this_00 + 100);
  if (fVar21 <= 0.0) {
    fVar22 = *(float *)(this_00 + 0x68);
                    /* try { // try from 003ccb92 to 003ccb99 has its CatchHandler @ 003ccf10 */
    uVar5 = Font::SharedFontInternal::getAscentDescent
                      (this_00,(long *)this,extraout_RDX,param_3,param_4,param_5);
    this_00 = *(SharedFontInternal **)this;
    fVar21 = *(float *)(this_00 + 100);
    fVar22 = fVar22 * ((float)((ulong)uVar5 >> 0x20) + (float)uVar5) * *(float *)(this_00 + 0x70);
    uVar5 = extraout_RDX_00;
  }
  else {
    fVar22 = fVar21 * *(float *)(this_00 + 0x70);
    uVar5 = extraout_RDX;
  }
  if (fVar21 <= 0.0) {
    fVar21 = *(float *)(this_00 + 0x68);
                    /* try { // try from 003ccbd8 to 003ccbdf has its CatchHandler @ 003ccf08 */
    uVar5 = Font::SharedFontInternal::getAscentDescent
                      (this_00,(long *)this,uVar5,param_3,param_4,param_5);
    fVar21 = fVar21 * ((float)((ulong)uVar5 >> 0x20) + (float)uVar5);
  }
  if (0 < uStack_50._4_4_) {
    fVar18 = *(float *)(this + 0x10) + 0.0;
    fVar19 = *(float *)(this + 0x14) + 0.0;
    iVar15 = 0;
    fVar23 = DAT_005de41c;
    do {
      lVar10 = (long)iVar15;
      iVar16 = iVar15 + 1;
      fVar2 = *(float *)((long)local_58 + lVar10 * 4);
      if ((fVar2 != fVar23) || (NAN(fVar2) || NAN(fVar23))) {
        fVar20 = *(float *)((long)local_58 + (long)iVar16 * 4);
        iVar16 = iVar15 + 3;
        fVar1 = *(float *)((long)local_58 + lVar10 * 4 + 8);
        fVar17 = fVar22 * fVar20 + fVar1 * 0.0 + fVar18;
        fVar20 = fVar20 * 0.0 + fVar1 * fVar21 + fVar19;
        if ((fVar2 != DAT_005de3d0) || (NAN(fVar2) || NAN(DAT_005de3d0))) {
          if ((fVar2 != DAT_005de3d8) || (NAN(fVar2) || NAN(DAT_005de3d8))) {
            if ((fVar2 != DAT_005de3dc) || (NAN(fVar2) || NAN(DAT_005de3dc))) {
              if ((fVar2 != DAT_005de3d4) || (NAN(fVar2) || NAN(DAT_005de3d4))) goto LAB_003cccc1;
              fVar23 = *(float *)((long)local_58 + (long)iVar16 * 4);
              fVar2 = *(float *)((long)local_58 + lVar10 * 4 + 0x10);
              fVar1 = *(float *)((long)local_58 + lVar10 * 4 + 0x14);
              iVar16 = iVar15 + 7;
              fVar3 = *(float *)((long)local_58 + lVar10 * 4 + 0x18);
              Path::cubicTo(fVar17,fVar20,fVar22 * fVar23 + fVar2 * 0.0 + fVar18,
                            fVar23 * 0.0 + fVar21 * fVar2 + fVar19,
                            fVar22 * fVar1 + fVar3 * 0.0 + fVar18,
                            fVar1 * 0.0 + fVar21 * fVar3 + fVar19,param_1);
            }
            else {
              fVar23 = *(float *)((long)local_58 + (long)iVar16 * 4);
              iVar16 = iVar15 + 5;
              fVar2 = *(float *)((long)local_58 + lVar10 * 4 + 0x10);
              Path::quadraticTo(fVar17,fVar20,fVar22 * fVar23 + fVar2 * 0.0 + fVar18,
                                fVar23 * 0.0 + fVar2 * fVar21 + fVar19,param_1);
            }
          }
          else {
            Path::lineTo(fVar17,fVar20,param_1);
          }
        }
        else {
          Path::startNewSubPath(fVar17,fVar20,param_1);
        }
        fVar23 = DAT_005de41c;
      }
      else {
        iVar15 = *(int *)(param_1 + 0xc);
        if (iVar15 != 0) {
          if (0 < iVar15) {
            fVar2 = *(float *)(*(long *)param_1 + (ulong)(iVar15 - 1) * 4);
            if ((fVar2 == fVar23) && (!NAN(fVar2) && !NAN(fVar23))) goto LAB_003cccc1;
          }
          if ((int)*(uint *)(param_1 + 8) <= iVar15) {
            uVar14 = iVar15 + ((iVar15 - (iVar15 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
            if (*(uint *)(param_1 + 8) != uVar14) {
              if ((int)uVar14 < 1) {
                free(*(void **)param_1);
                *(undefined8 *)param_1 = 0;
              }
              else {
                pvVar11 = realloc(*(void **)param_1,(ulong)uVar14 << 2);
                *(void **)param_1 = pvVar11;
              }
              fVar23 = DAT_005de41c;
            }
            *(uint *)(param_1 + 8) = uVar14;
            iVar15 = *(int *)(param_1 + 0xc);
          }
          *(int *)(param_1 + 0xc) = iVar15 + 1;
          *(undefined4 *)(*(long *)param_1 + (long)iVar15 * 4) = 0x47c35280;
        }
      }
LAB_003cccc1:
      iVar15 = iVar16;
    } while (iVar15 < uStack_50._4_4_);
  }
  free(local_58);
  LOCK();
  plVar7 = local_88 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)(*local_88 + 8))();
  }
  return;
}


