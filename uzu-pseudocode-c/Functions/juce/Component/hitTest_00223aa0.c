// Function : hitTest
// Namespace: juce:Component
// Entry    : 00223aa0
// Prototype: ulong hitTest(long param_1, int param_2, int param_3)
// Body     : 00223aa0 - 00223b8f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::hitTest(int, int) */

ulong __cdecl juce::Component::hitTest(long param_1,int param_2,int param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined4 extraout_EAX;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 unaff_R14;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  int iVar10;
  double dVar11;
  
  uVar6 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if ((*(uint3 *)(param_1 + 0xe8) & 8) != 0) {
    if (((*(uint3 *)(param_1 + 0xe8) & 0x10) != 0) && (0 < (int)*(uint *)(param_1 + 100))) {
      uVar5 = (ulong)*(uint *)(param_1 + 100) + 1;
      do {
        plVar1 = *(long **)(*(long *)(param_1 + 0x58) + (ulong)((int)uVar5 - 2) * 8);
        if ((*(ushort *)(plVar1 + 0x1d) & 2) != 0) {
          uVar8 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
                            (CONCAT44((float)param_3,(float)param_2),plVar1);
          dVar9 = (double)(float)uVar8 + _DAT_005d9a90;
          dVar11 = (double)(float)((ulong)uVar8 >> 0x20) + _UNK_005d9a98;
          iVar7 = SUB84(dVar9,0);
          iVar10 = SUB84(dVar11,0);
          auVar2._4_4_ = (uint)(-1 < iVar10) * -0x80000000;
          auVar2._0_4_ = (uint)(-1 < iVar7) * -0x80000000;
          auVar2._8_4_ = (uint)(iVar7 < (int)plVar1[8]) * -0x80000000;
          auVar2._12_4_ = (uint)(iVar10 < (int)((ulong)plVar1[8] >> 0x20)) * -0x80000000;
          uVar4 = movmskps(extraout_EAX,auVar2);
          if (((char)uVar4 == '\x0f') &&
             (cVar3 = (**(code **)(*plVar1 + 0xa0))
                                (plVar1,(ulong)dVar9 & 0xffffffff,(ulong)dVar11 & 0xffffffff),
             cVar3 != '\0')) goto LAB_00223b82;
        }
        uVar5 = uVar5 - 1;
      } while (1 < uVar5);
    }
    uVar6 = 0;
  }
LAB_00223b82:
  return uVar6 & 0xffffffff;
}


