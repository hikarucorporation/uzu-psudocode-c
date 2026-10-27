// Function : hb_paint_extents_push_transform
// Namespace: 
// Entry    : 0046b5d0
// Prototype: undefined hb_paint_extents_push_transform(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, undefined8 param_7_00, uint * param_8)
// Body     : 0046b5d0 - 0046b7e2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_paint_extents_push_transform(hb_paint_funcs_t*, void*, float, float, float, float, float,
   float, void*) */

void __cdecl
hb_paint_extents_push_transform
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          undefined8 param_7_00,uint *param_8)

{
  float *pfVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar4 = param_8[1];
  if (uVar4 == 0) {
    fVar9 = 0.0;
    fVar10 = 0.0;
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90 = 0;
    uVar4 = param_8[1];
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
  }
  else {
    uVar7 = (ulong)(uVar4 - 1);
    lVar3 = *(long *)(param_8 + 2);
    uVar2 = *(undefined8 *)(lVar3 + uVar7 * 0x18);
    fVar9 = (float)uVar2;
    fVar10 = (float)((ulong)uVar2 >> 0x20);
    uVar2 = *(undefined8 *)(lVar3 + 8 + uVar7 * 0x18);
    fVar11 = (float)uVar2;
    fVar12 = (float)((ulong)uVar2 >> 0x20);
    fVar14 = *(float *)(lVar3 + 0x10 + uVar7 * 0x18);
    fVar13 = *(float *)(lVar3 + 0x14 + uVar7 * 0x18);
  }
  uVar6 = *param_8;
  if ((int)uVar6 <= (int)uVar4) {
    if ((int)uVar6 < 0) {
      _hb_CrapPool = 0;
      _DAT_0071cd88 = 0;
      DAT_0071cd90 = 0;
      return;
    }
    if (uVar6 < uVar4 + 1) {
      uVar8 = uVar6;
      do {
        uVar8 = uVar8 + (uVar8 >> 1) + 8;
      } while (uVar8 < uVar4 + 1);
      if (0xaaaaaaa < uVar8) {
LAB_0046b787:
        *param_8 = ~uVar6;
        _hb_CrapPool = 0;
        _DAT_0071cd88 = 0;
        DAT_0071cd90 = 0;
        return;
      }
      if (uVar8 == 0) {
        free(*(void **)(param_8 + 2));
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = realloc(*(void **)(param_8 + 2),(ulong)uVar8 * 0x18);
        if (pvVar5 == (void *)0x0) {
          uVar6 = *param_8;
          if (uVar8 <= uVar6) goto LAB_0046b64a;
          goto LAB_0046b787;
        }
      }
      *(void **)(param_8 + 2) = pvVar5;
      *param_8 = uVar8;
    }
  }
LAB_0046b64a:
  lVar3 = *(long *)(param_8 + 2);
  uVar7 = (ulong)param_8[1];
  param_8[1] = param_8[1] + 1;
  pfVar1 = (float *)(lVar3 + uVar7 * 0x18);
  *pfVar1 = param_1 * fVar9 + param_2 * fVar11;
  pfVar1[1] = param_1 * fVar10 + param_2 * fVar12;
  pfVar1[2] = param_3 * fVar9 + param_4 * fVar11;
  pfVar1[3] = param_3 * fVar10 + param_4 * fVar12;
  *(float *)(lVar3 + 0x10 + uVar7 * 0x18) = fVar14 + param_5 * fVar9 + fVar11 * param_6;
  *(float *)(lVar3 + 0x14 + uVar7 * 0x18) = fVar13 + fVar10 * param_5 + fVar12 * param_6;
  return;
}


