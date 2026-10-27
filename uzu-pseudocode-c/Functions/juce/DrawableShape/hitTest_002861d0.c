// Function : hitTest
// Namespace: juce:DrawableShape
// Entry    : 002861d0
// Prototype: ulong hitTest(long param_1, int param_2, int param_3)
// Body     : 002861d0 - 002862a0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DrawableShape::hitTest(int, int) */

ulong __cdecl juce::DrawableShape::hitTest(long param_1,int param_2,int param_3)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  if ((*(ushort *)(param_1 + 0xe8) & 8) == 0) {
    fVar6 = (float)(param_2 - *(int *)(param_1 + 0xf0));
    fVar7 = (float)(param_3 - *(int *)(param_1 + 0xf4));
    uVar3 = Path::contains(fVar6,fVar7,(undefined8 *)(param_1 + 0x180));
    if ((char)uVar3 != '\0') {
      return CONCAT71((int7)(CONCAT44(extraout_var,uVar3) >> 8),1);
    }
    if (*(float *)(param_1 + 0x160) <= 0.0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x203) == '\0') {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x208);
    if (lVar2 == 0) {
LAB_00286279:
      uVar3 = Path::contains(fVar6,fVar7,(undefined8 *)(param_1 + 0x1a8));
      return CONCAT44(extraout_var_00,uVar3);
    }
    if ((long)*(int *)(lVar2 + 0x24) != 0) {
      lVar4 = 0;
      do {
        cVar1 = *(char *)(*(long *)(lVar2 + 0x18) + 0xb + lVar4);
        if (cVar1 != '\0') break;
        bVar5 = (long)*(int *)(lVar2 + 0x24) * 0x10 + -0x10 != lVar4;
        lVar4 = lVar4 + 0x10;
      } while (bVar5);
      if (cVar1 != '\0') goto LAB_00286279;
    }
  }
  return 0;
}


