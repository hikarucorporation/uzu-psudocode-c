// Function : paint
// Namespace: juce:DrawableImage
// Entry    : 002ad020
// Prototype: undefined paint(DrawableImage * this, Graphics * param_1)
// Body     : 002ad020 - 002ad18d


/* juce::DrawableImage::paint(juce::Graphics&) */

void __thiscall juce::DrawableImage::paint(DrawableImage *this,Graphics *param_1)

{
  DrawableImage *pDVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 local_38 [16];
  undefined8 local_28;
  
  if (*(long *)(this + 0x160) != 0) {
    pDVar1 = this + 0x160;
    fVar2 = *(float *)(this + 0x168);
    if ((0.0 < fVar2) && (this[0x16f] != (DrawableImage)0xff)) {
      if (param_1[0x10] != (Graphics)0x0) {
        param_1[0x10] = (Graphics)0x0;
        (**(code **)(**(long **)(param_1 + 8) + 0x70))();
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x98))(fVar2);
      local_38 = ZEXT416(DAT_005d9038);
      local_28 = 0x3f800000;
      if (*(long *)pDVar1 != 0) {
        cVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
        if (cVar3 == '\0') {
          (**(code **)(**(long **)(param_1 + 8) + 0xe0))(*(long **)(param_1 + 8),pDVar1,local_38);
        }
      }
    }
    if (this[0x16f] != (DrawableImage)0x0) {
      iVar4 = SUB84((double)((float)(*(uint *)(this + 0x16c) >> 0x18) * *(float *)(this + 0x168)) +
                    DAT_005d9098,0);
      iVar5 = 0xff;
      if (iVar4 < 0xff) {
        iVar5 = iVar4;
      }
      Graphics::setColour(param_1,*(uint *)(this + 0x16c) & 0xffffff | iVar5 << 0x18);
      local_38 = ZEXT416(DAT_005d9038);
      local_28 = 0x3f800000;
      if (*(long *)(this + 0x160) != 0) {
        cVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
        if (cVar3 == '\0') {
          (**(code **)(**(long **)(param_1 + 8) + 0x70))();
          (**(code **)(**(long **)(param_1 + 8) + 0x50))(*(long **)(param_1 + 8),pDVar1,local_38);
          (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
          (**(code **)(**(long **)(param_1 + 8) + 0x78))();
        }
      }
    }
  }
  return;
}


