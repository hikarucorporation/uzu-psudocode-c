// Function : hitTest
// Namespace: juce:DrawableImage
// Entry    : 002acef0
// Prototype: bool hitTest(DrawableImage * this, uint param_1, uint param_2)
// Body     : 002acef0 - 002ad011


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::DrawableImage::hitTest(int, int) */

bool __thiscall juce::DrawableImage::hitTest(DrawableImage *this,uint param_1,uint param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  undefined4 extraout_EAX;
  undefined4 uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  int iVar10;
  double dVar11;
  
  if ((*(uint3 *)(this + 0xe8) & 8) == 0) {
LAB_002acf1c:
    if (*(Image **)(this + 0x160) != (Image *)0x0) {
      uVar4 = Image::getPixelAt(*(Image **)(this + 0x160),param_1,param_2);
      return 0x7e < (byte)(uVar4 >> 0x18);
    }
  }
  else if (((*(uint3 *)(this + 0xe8) & 0x10) != 0) && (0 < (int)*(uint *)(this + 100))) {
    uVar6 = (ulong)*(uint *)(this + 100) + 1;
    do {
      plVar1 = *(long **)(*(long *)(this + 0x58) + (ulong)((int)uVar6 - 2) * 8);
      if ((*(ushort *)(plVar1 + 0x1d) & 2) != 0) {
        uVar8 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
                          (CONCAT44((float)(int)param_2,(float)(int)param_1),plVar1);
        dVar9 = (double)(float)uVar8 + _DAT_005d9a90;
        dVar11 = (double)(float)((ulong)uVar8 >> 0x20) + _UNK_005d9a98;
        iVar7 = SUB84(dVar9,0);
        iVar10 = SUB84(dVar11,0);
        auVar2._4_4_ = (uint)(-1 < iVar10) * -0x80000000;
        auVar2._0_4_ = (uint)(-1 < iVar7) * -0x80000000;
        auVar2._8_4_ = (uint)(iVar7 < (int)plVar1[8]) * -0x80000000;
        auVar2._12_4_ = (uint)(iVar10 < (int)((ulong)plVar1[8] >> 0x20)) * -0x80000000;
        uVar5 = movmskps(extraout_EAX,auVar2);
        if (((char)uVar5 == '\x0f') &&
           (cVar3 = (**(code **)(*plVar1 + 0xa0))
                              (plVar1,(ulong)dVar9 & 0xffffffff,(ulong)dVar11 & 0xffffffff),
           cVar3 != '\0')) goto LAB_002acf1c;
      }
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  return false;
}


