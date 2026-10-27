// Function : clipLineToMask
// Namespace: juce:EdgeTable
// Entry    : 002f1610
// Prototype: undefined clipLineToMask(EdgeTable * this, int param_1, int param_2, byte * param_3, uint param_4, int param_5)
// Body     : 002f1610 - 002f16e9


/* juce::EdgeTable::clipLineToMask(int, int, unsigned char const*, int, int) */

void __thiscall
juce::EdgeTable::clipLineToMask
          (EdgeTable *this,int param_1,int param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uStack_20;
  int aiStack_18 [2];
  
  uVar4 = param_2 - *(int *)(this + 0x14);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(this + 0x1c))) {
    this[0x28] = (EdgeTable)0x1;
    if (param_5 < 1) {
      *(undefined4 *)(*(long *)this + (ulong)uVar4 * (long)*(int *)(this + 0x24) * 4) = 0;
      return;
    }
    lVar2 = -((long)(param_5 * 2) * 4 + 0x1fU & 0xfffffffffffffff0);
    uVar7 = param_5 + 1;
    iVar6 = param_1 << 8;
    uVar5 = 0;
    iVar8 = 0;
    do {
      bVar1 = *param_3;
      if (uVar5 != bVar1) {
        lVar3 = (long)iVar8;
        *(int *)((long)aiStack_18 + lVar3 * 4 + lVar2 + 4) = iVar6;
        iVar8 = iVar8 + 2;
        *(uint *)((long)aiStack_18 + lVar3 * 4 + lVar2 + 8) = (uint)bVar1;
        uVar5 = (uint)bVar1;
      }
      param_3 = param_3 + param_4;
      uVar7 = uVar7 - 1;
      iVar6 = iVar6 + 0x100;
    } while (1 < uVar7);
    if (uVar5 != 0) {
      lVar3 = (long)iVar8;
      *(int *)((long)aiStack_18 + lVar3 * 4 + lVar2 + 4) = iVar6;
      iVar8 = iVar8 + 2;
      *(undefined4 *)((long)aiStack_18 + lVar3 * 4 + lVar2 + 8) = 0;
    }
    *(int *)((long)aiStack_18 + lVar2) = iVar8 >> 1;
    *(undefined8 *)((long)aiStack_18 + lVar2 + -8) = 0x2f16c8;
    intersectWithEdgeTableLine(this,uVar4,(int *)((long)aiStack_18 + lVar2));
  }
  return;
}


