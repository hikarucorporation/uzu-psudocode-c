// Function : createFileBrowserGoUpButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 00218390
// Prototype: Button * createFileBrowserGoUpButton(void)
// Body     : 00218390 - 00218394


/* non-virtual thunk to juce::LookAndFeel_V2::createFileBrowserGoUpButton() */

Button * __thiscall juce::LookAndFeel_V2::createFileBrowserGoUpButton(void)

{
  long *plVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  void *__ptr;
  byte bVar5;
  Button *this;
  int *piVar6;
  void *__dest;
  uint uVar7;
  ulong uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  uint uVar9;
  undefined4 uVar10;
  void *pvStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  uint auStack_288 [2];
  void *pvStack_280;
  long *plStack_278;
  undefined1 auStack_270 [16];
  undefined8 uStack_260;
  undefined **appuStack_258 [8];
  ulong uStack_218;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  uint auStack_88 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  uint uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  this = operator_new(0x250);
  piVar6 = operator_new__(0x1b);
  LOCK();
  *piVar6 = 0;
  UNLOCK();
  piVar6[2] = 4;
  piVar6[3] = 0;
  appuStack_258[0] = (undefined **)(piVar6 + 4);
  *(undefined2 *)(piVar6 + 4) = 0x7075;
  *(undefined1 *)((long)piVar6 + 0x12) = 0;
  Button::Button(this,(long *)appuStack_258);
  *(undefined ***)this = &PTR__DrawableButton_00707240;
  *(undefined ***)(this + 0xf0) = &PTR__DrawableButton_00707428;
  *(undefined4 *)(this + 0x1f8) = 3;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x248) = 3;
  LOCK();
  iVar2 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar2 == 0) {
    operator_delete__(piVar6);
  }
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  pvStack_2b8 = (void *)0x0;
  uStack_2b0 = 0;
  uStack_298 = 1;
  Path::addArrow((Path *)&pvStack_2b8);
  Drawable::Drawable((Drawable *)appuStack_258);
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  pvStack_d8 = (void *)0x0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 1;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 1;
  auStack_88[0] = _ZN4juce7ColoursL5blackE_14;
  uStack_80 = 0;
  uStack_78 = 0;
  uVar10 = 0;
  auStack_70 = ZEXT416(DAT_005d9038);
  uStack_60 = 0x3f800000;
  uStack_58 = _ZN4juce7ColoursL5blackE_14;
  uStack_50 = 0;
  uStack_48 = 0;
  auStack_40 = ZEXT416(DAT_005d9038);
  uStack_30 = 0x3f800000;
  appuStack_258[0] = &PTR__DrawablePath_00708098;
  auStack_288[0] = _ZN4juce7ColoursL5blackE_14 & 0xffffff | 0x66000000;
  pvStack_280 = (void *)0x0;
  plStack_278 = (long *)0x0;
  auStack_270 = ZEXT416(DAT_005d9038);
  uStack_260 = 0x3f800000;
  uVar9 = DAT_005d9038;
  bVar5 = FillType::operator!=((FillType *)auStack_88,(int *)auStack_288);
  if (bVar5 != 0) {
    FillType::operator=((FillType *)auStack_88,(FillType *)auStack_288);
    Component::internalRepaintUnchecked((long)appuStack_258,0,uStack_218,'\x01');
    if (plStack_278 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_278 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plStack_278 + 8))();
      }
    }
  }
  pvVar3 = pvStack_280;
  if (pvStack_280 != (void *)0x0) {
    *(undefined4 *)((long)pvStack_280 + 0x24) = 0;
    free(*(void **)((long)pvStack_280 + 0x18));
    operator_delete(pvVar3);
  }
  pvVar3 = pvStack_2b8;
  uVar4 = uStack_2b0._4_4_;
  uVar8 = (ulong)uStack_2b0._4_4_;
  if ((int)uStack_2b0._4_4_ < 1) {
    uVar7 = 0;
    __dest = (void *)0x0;
  }
  else {
    uVar7 = (uStack_2b0._4_4_ >> 1) + uStack_2b0._4_4_ + 8 & 0xfffffff8;
    if ((int)uVar7 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = malloc((ulong)uVar7 << 2);
    }
    memcpy(__dest,pvVar3,uVar8 * 4);
  }
  __ptr = pvStack_d8;
  uStack_d0 = CONCAT44(uVar4,uVar7);
  uStack_c8 = uStack_2a8;
  uStack_c0 = uStack_2a0;
  uStack_b8 = uStack_298;
  pvStack_d8 = __dest;
  free(__ptr);
  DrawableShape::strokeChanged
            (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar10,uVar9),
             (Component *)appuStack_258);
  DrawableButton::setImages((long *)this,(long *)appuStack_258,(long *)0x0);
  DrawableShape::~DrawableShape((DrawableShape *)appuStack_258);
  free(pvVar3);
  return this;
}


