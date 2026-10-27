// Function : createCopy
// Namespace: juce:DrawableImage
// Entry    : 002ad230
// Prototype: undefined8 * createCopy(undefined8 * param_1, long param_2)
// Body     : 002ad230 - 002ad2d9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DrawableImage::createCopy() const */

undefined8 * __cdecl juce::DrawableImage::createCopy(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  Drawable *this;
  
  this = operator_new(0x188);
                    /* try { // try from 002ad248 to 002ad252 has its CatchHandler @ 002ad35b */
  Drawable::Drawable(this,param_2);
  *(undefined ***)this = &PTR__DrawableImage_00707ed0;
  lVar1 = *(long *)(param_2 + 0x160);
  *(long *)(this + 0x160) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
  uVar2 = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(this + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(this + 0x178) = uVar2;
  *(undefined8 *)(this + 0x180) = *(undefined8 *)(param_2 + 0x180);
                    /* try { // try from 002ad2c6 to 002ad2cd has its CatchHandler @ 002ad2da */
  Component::setBounds
            ((Component *)this,(int)*(undefined8 *)(param_2 + 0x38),
             (int)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20),
             (int)*(undefined8 *)(param_2 + 0x40),
             (int)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20));
  *param_1 = this;
  return param_1;
}


