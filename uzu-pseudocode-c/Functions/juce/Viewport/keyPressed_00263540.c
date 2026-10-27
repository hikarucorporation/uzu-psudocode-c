// Function : keyPressed
// Namespace: juce:Viewport
// Entry    : 00263540
// Prototype: undefined8 keyPressed(Viewport * this, int * param_1)
// Body     : 00263540 - 002635fc


/* juce::Viewport::keyPressed(juce::KeyPress const&) */

undefined8 __thiscall juce::Viewport::keyPressed(Viewport *this,int *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = *param_1;
  uVar4 = param_1[1] & 7;
  bVar5 = true;
  if ((((((iVar1 != 0x10000052) || (uVar4 != 0)) && ((iVar1 != 0x10000054 || (uVar4 != 0)))) &&
       ((iVar1 != 0x10000055 || (uVar4 != 0)))) && ((iVar1 != 0x10000056 || (uVar4 != 0)))) &&
     ((iVar1 != 0x10000050 || (uVar4 != 0)))) {
    bVar5 = iVar1 == 0x10000057 && uVar4 == 0;
  }
  if ((!bVar5) || (plVar2 = *(long **)(this + 0x100), (*(ushort *)(plVar2 + 0x1d) & 2) == 0)) {
    if ((iVar1 != 0x10000051) || (bVar6 = true, uVar4 != 0)) {
      bVar6 = iVar1 == 0x10000053 && uVar4 == 0;
    }
    if ((!(bool)(bVar5 | bVar6)) ||
       (plVar2 = *(long **)(this + 0x108), (*(ushort *)(plVar2 + 0x1d) & 2) == 0)) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x002635f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,param_1,uVar4,*(code **)(*plVar2 + 0x108));
  return uVar3;
}


