// Function : createCopy
// Namespace: juce:DrawablePath
// Entry    : 002868b0
// Prototype: undefined8 * createCopy(undefined8 param_1, undefined8 param_2, undefined8 * param_3, long param_4)
// Body     : 002868b0 - 00286996


/* WARNING: Unknown calling convention: __cdecl */
/* juce::DrawablePath::createCopy() const */

undefined8 * __cdecl
juce::DrawablePath::createCopy
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  DrawableShape DVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  DrawableShape *this;
  void *__dest;
  uint uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  this = operator_new(0x230);
                    /* try { // try from 002868ce to 002868d8 has its CatchHandler @ 002869a4 */
  DrawableShape::DrawableShape(this,param_4);
  *(undefined ***)this = &PTR__DrawablePath_00708098;
  uVar2 = *(uint *)(param_4 + 0x18c);
  if ((int)uVar2 < 1) {
    uVar6 = 0;
    __dest = (void *)0x0;
  }
  else {
    pvVar3 = *(void **)(param_4 + 0x180);
    uVar6 = (uVar2 >> 1) + uVar2 + 8 & 0xfffffff8;
    if ((int)uVar6 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = malloc((ulong)uVar6 << 2);
    }
    memcpy(__dest,pvVar3,(ulong)uVar2 * 4);
  }
  uVar4 = *(undefined8 *)(param_4 + 400);
  uVar5 = *(undefined8 *)(param_4 + 0x198);
  DVar1 = *(DrawableShape *)(param_4 + 0x1a0);
  pvVar3 = *(void **)(this + 0x180);
  *(void **)(this + 0x180) = __dest;
  *(uint *)(this + 0x188) = uVar6;
  *(uint *)(this + 0x18c) = uVar2;
  *(undefined8 *)(this + 400) = uVar4;
  *(undefined8 *)(this + 0x198) = uVar5;
  this[0x1a0] = DVar1;
  free(pvVar3);
                    /* try { // try from 0028697a to 00286981 has its CatchHandler @ 00286997 */
  DrawableShape::strokeChanged
            (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,(Component *)this);
  *param_3 = this;
  return param_3;
}


