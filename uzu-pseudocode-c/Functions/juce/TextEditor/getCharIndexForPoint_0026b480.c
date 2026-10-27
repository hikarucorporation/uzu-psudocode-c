// Function : getCharIndexForPoint
// Namespace: juce:TextEditor
// Entry    : 0026b480
// Prototype: ulong getCharIndexForPoint(TextEditor * this, ulong param_1, ulong param_2, ulong param_3, ulong * param_4, ulong param_5)
// Body     : 0026b480 - 0026b663


/* juce::TextEditor::getCharIndexForPoint(juce::Point<int>) const */

ulong __thiscall
juce::TextEditor::getCharIndexForPoint
          (TextEditor *this,ulong param_1,ulong param_2,ulong param_3,ulong *param_4,ulong param_5)

{
  TextEditor TVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  float fVar13;
  ulong *local_40;
  uint local_34;
  
  TVar1 = this[0x1ca];
  if (TVar1 == (TextEditor)0x0) {
    uVar4 = (**(code **)(*(long *)this + 0x50))(this);
    uVar6 = 0;
    uVar5 = (ulong)uVar4;
    if ((int)uVar4 < 0) {
      uVar5 = 0;
    }
    (**(code **)(*(long *)this + 0x60))(&local_40,this,uVar5 << 0x20);
    if ((ulong)local_34 == 0) {
      uVar4 = 0;
      uVar5 = 0;
    }
    else {
      param_4 = local_40;
      if (local_34 == 1) {
        uVar6 = *local_40;
        uVar5 = local_40[1];
        uVar4 = (uint)(uVar6 >> 0x20);
      }
      else {
        uVar6 = (ulong)(uint)*local_40;
        uVar4 = *(uint *)((long)local_40 + 4);
        iVar8 = (uint)local_40[1] + (uint)*local_40;
        iVar12 = *(uint *)((long)local_40 + 0xc) + uVar4;
        if (1 < (int)local_34) {
          uVar5 = (ulong)local_34 + 1;
          do {
            uVar11 = (ulong)((int)uVar5 - 2);
            uVar10 = (uint)local_40[uVar11 * 2];
            uVar7 = *(uint *)((long)local_40 + uVar11 * 0x10 + 4);
            if ((int)uVar10 < (int)uVar6) {
              uVar6 = (ulong)uVar10;
            }
            if ((int)uVar7 < (int)uVar4) {
              uVar4 = uVar7;
            }
            iVar9 = uVar10 + (uint)local_40[uVar11 * 2 + 1];
            if (iVar9 <= iVar8) {
              iVar9 = iVar8;
            }
            iVar8 = iVar9;
            iVar9 = uVar7 + *(int *)((long)local_40 + uVar11 * 0x10 + 0xc);
            if (iVar9 <= iVar12) {
              iVar9 = iVar12;
            }
            iVar12 = iVar9;
            uVar5 = uVar5 - 1;
          } while (2 < uVar5);
        }
        uVar5 = CONCAT44(iVar12 - uVar4,iVar8 - (int)uVar6);
      }
    }
    param_2 = param_1 >> 0x20;
    uVar10 = (int)uVar5 + (int)uVar6;
    uVar7 = (uint)param_1;
    if ((int)uVar7 <= (int)uVar10) {
      uVar10 = uVar7;
    }
    uVar11 = (ulong)uVar10;
    if ((int)uVar7 < (int)uVar6) {
      uVar11 = uVar6 & 0xffffffff;
    }
    uVar10 = (int)(uVar5 >> 0x20) + uVar4;
    uVar7 = (uint)(param_1 >> 0x20);
    if ((int)uVar7 <= (int)uVar10) {
      uVar10 = uVar7;
    }
    if ((int)uVar7 < (int)uVar4) {
      uVar10 = uVar4;
    }
    param_3 = (ulong)uVar10 << 0x20;
    param_1 = uVar11 | param_3;
  }
  iVar12 = *(int *)(this + 0x278);
  iVar8 = *(int *)(this + 0x19c);
  iVar9 = *(int *)(*(long *)(this + 0x188) + 0x208);
  iVar2 = *(int *)(this + 0x27c);
  iVar3 = *(int *)(this + 0x198);
                    /* try { // try from 0026b5d5 to 0026b637 has its CatchHandler @ 0026b664 */
  fVar13 = getYOffset(this,param_1,param_2,param_3,(uint *)param_4,param_5);
  uVar6 = indexAtPosition((float)(((int)param_1 - (iVar12 + iVar8)) + iVar9),
                          (float)(((int)(param_1 >> 0x20) -
                                  SUB84((double)(fVar13 + (float)iVar3 + (float)iVar2) +
                                        DAT_005d9098,0)) + *(int *)(*(long *)(this + 0x188) + 0x20c)
                                 ),this);
  if (TVar1 == (TextEditor)0x0) {
    local_34 = 0;
    free(local_40);
  }
  return uVar6 & 0xffffffff;
}


