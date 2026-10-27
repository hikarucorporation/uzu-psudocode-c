// Function : hitTest
// Namespace: juce:ImageButton
// Entry    : 002d6040
// Prototype: ulong hitTest(ImageButton * this, int param_1, int param_2)
// Body     : 002d6040 - 002d61ea


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ImageButton::hitTest(int, int) */

ulong __thiscall juce::ImageButton::hitTest(ImageButton *this,int param_1,int param_2)

{
  Image *pIVar1;
  ImageButton IVar2;
  undefined1 auVar3 [16];
  char cVar4;
  uint uVar5;
  undefined4 extraout_EAX;
  undefined4 uVar6;
  ulong uVar7;
  long *unaff_RBP;
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  int iVar11;
  double dVar12;
  Image *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((*(uint3 *)(this + 0xe8) & 8) == 0) {
LAB_002d6072:
    if ((this[0x1fa] == (ImageButton)0x0) ||
       (getCurrentImage((long *)&local_50,(long)this), local_50 == (Image *)0x0)) {
      uVar7 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    }
    else {
      uVar7 = 0;
      if ((0 < *(int *)(this + 0x204)) && (0 < *(int *)(this + 0x208))) {
        IVar2 = this[0x1fa];
                    /* try { // try from 002d60e2 to 002d60eb has its CatchHandler @ 002d61eb */
        uVar5 = Image::getPixelAt(local_50,((param_1 - *(int *)(this + 0x1fc)) *
                                           *(int *)(local_50 + 0x10)) / *(int *)(this + 0x204),
                                  ((param_2 - *(int *)(this + 0x200)) * *(int *)(local_50 + 0x14)) /
                                  *(int *)(this + 0x208));
        uVar7 = (ulong)((byte)IVar2 < (byte)SUB41(uVar5 >> 0x18,0));
      }
      LOCK();
      pIVar1 = local_50 + 8;
      *(int *)pIVar1 = *(int *)pIVar1 + -1;
      UNLOCK();
      if (*(int *)pIVar1 == 0) {
        (**(code **)(*(long *)local_50 + 8))(local_50);
      }
    }
  }
  else {
    if (((*(uint3 *)(this + 0xe8) & 0x10) != 0) && (0 < (int)*(uint *)(this + 100))) {
      local_48 = CONCAT44((float)param_2,(float)param_1);
      uStack_40 = 0;
      uVar7 = (ulong)*(uint *)(this + 100) + 1;
      do {
        unaff_RBP = *(long **)(*(long *)(this + 0x58) + (ulong)((int)uVar7 - 2) * 8);
        if ((*(ushort *)(unaff_RBP + 0x1d) & 2) != 0) {
          uVar9 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
                            (local_48,unaff_RBP);
          dVar10 = (double)(float)uVar9 + _DAT_005d9a90;
          dVar12 = (double)(float)((ulong)uVar9 >> 0x20) + _UNK_005d9a98;
          iVar8 = SUB84(dVar10,0);
          iVar11 = SUB84(dVar12,0);
          auVar3._4_4_ = (uint)(-1 < iVar11) * -0x80000000;
          auVar3._0_4_ = (uint)(-1 < iVar8) * -0x80000000;
          auVar3._8_4_ = (uint)(iVar8 < (int)unaff_RBP[8]) * -0x80000000;
          auVar3._12_4_ = (uint)(iVar11 < (int)((ulong)unaff_RBP[8] >> 0x20)) * -0x80000000;
          uVar6 = movmskps(extraout_EAX,auVar3);
          if (((char)uVar6 == '\x0f') &&
             (cVar4 = (**(code **)(*unaff_RBP + 0xa0))
                                (unaff_RBP,(ulong)dVar10 & 0xffffffff,(ulong)dVar12 & 0xffffffff),
             cVar4 != '\0')) goto LAB_002d6072;
        }
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
    }
    uVar7 = 0;
  }
  return uVar7 & 0xffffffff;
}


