// Function : scale_glyph_extents
// Namespace: hb_font_t
// Entry    : 004586b0
// Prototype: undefined scale_glyph_extents(hb_font_t * this, int * param_1)
// Body     : 004586b0 - 0045881d


/* hb_font_t::scale_glyph_extents(hb_glyph_extents_t*) */

void __thiscall hb_font_t::scale_glyph_extents(hb_font_t *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float __x;
  
  fVar8 = *(float *)(this + 0x4c) * (float)((*param_1 + param_1[2]) * 0x10000 >> 0x10);
  __x = *(float *)(this + 0x4c) * (float)(int)(short)*param_1;
  fVar6 = *(float *)(this + 0x50) * (float)(int)(short)param_1[1];
  fVar7 = *(float *)(this + 0x50) * (float)((param_1[1] + param_1[3]) * 0x10000 >> 0x10);
  fVar5 = *(float *)(this + 0x48);
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    fVar4 = fVar5 * fVar6;
    fVar5 = fVar5 * fVar7;
    fVar8 = fVar8 + (float)(~-(uint)(fVar5 <= fVar4) & (uint)fVar5 |
                           (uint)fVar4 & -(uint)(fVar5 <= fVar4));
    __x = __x + (float)(~-(uint)(fVar4 <= fVar5) & (uint)fVar5 |
                       (uint)fVar4 & -(uint)(fVar4 <= fVar5));
  }
  fVar5 = floorf(__x);
  *param_1 = (int)fVar5;
  fVar6 = floorf(fVar6);
  param_1[1] = (int)fVar6;
  fVar8 = ceilf(fVar8);
  param_1[2] = (int)(fVar8 - (float)(int)fVar5);
  fVar7 = ceilf(fVar7);
  param_1[3] = (int)(fVar7 - (float)(int)fVar6);
  iVar1 = *(int *)(this + 0x3c);
  iVar2 = *(int *)(this + 0x40);
  if (iVar1 != 0 || iVar2 != 0) {
    iVar3 = -iVar2;
    if (-1 < *(int *)(this + 0x2c)) {
      iVar3 = iVar2;
    }
    param_1[1] = (int)fVar6 + iVar3;
    param_1[3] = (int)(fVar7 - (float)(int)fVar6) - iVar3;
    iVar2 = -iVar1;
    if (-1 < *(int *)(this + 0x28)) {
      iVar2 = iVar1;
    }
    if (this[0x38] != (hb_font_t)0x0) {
      *param_1 = (int)fVar5 - iVar2 / 2;
    }
    param_1[2] = iVar2 + (int)(fVar8 - (float)(int)fVar5);
  }
  return;
}


