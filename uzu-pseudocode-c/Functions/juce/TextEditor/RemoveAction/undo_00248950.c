// Function : undo
// Namespace: juce:TextEditor:RemoveAction
// Entry    : 00248950
// Prototype: undefined8 undo(undefined8 param_1, float param_2, RemoveAction * this, undefined8 param_4, undefined8 param_5, ulong param_6, uint * param_7, undefined4 * param_8)
// Body     : 00248950 - 00248a4a


/* juce::TextEditor::RemoveAction::undo() */

undefined8 __thiscall
juce::TextEditor::RemoveAction::undo
          (undefined8 param_1,float param_2,RemoveAction *this,undefined8 param_4,undefined8 param_5
          ,ulong param_6,uint *param_7,undefined4 *param_8)

{
  uint uVar1;
  TextEditor *pTVar2;
  Ranges *pRVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 extraout_RDX;
  ulong uVar7;
  TextEditor *this_00;
  
  pTVar2 = *(TextEditor **)(this + 8);
  lVar6 = *(long *)(this + 0x20);
  this_00 = pTVar2;
  if (*(long *)(this + 0x28) != lVar6) {
    pRVar3 = *(Ranges **)(pTVar2 + 0x330);
    uVar7 = 0;
    do {
      param_7 = (uint *)(uVar7 * 8 + *(long *)(this + 0x50));
      uVar4 = *(ulong *)(lVar6 + uVar7 * 8);
      param_8 = (undefined4 *)(uVar7 * 4 + *(long *)(this + 0x68));
      param_1 = TextEditorStorage::set
                          (pRVar3,uVar4,uVar4,(String *)(*(long *)(this + 0x38) + uVar7 * 8),
                           (long *)param_7,param_8);
      uVar7 = uVar7 + 1;
      lVar6 = *(long *)(this + 0x20);
      param_6 = *(long *)(this + 0x28) - lVar6 >> 3;
    } while (uVar7 < param_6);
    this_00 = *(TextEditor **)(this + 8);
    param_5 = extraout_RDX;
  }
  *(undefined4 *)(pTVar2 + 0x290) = 0xffffffff;
  pTVar2[0x1d4] = (TextEditor)0x1;
  uVar1 = *(uint *)(this + 0x18);
  *(undefined4 *)(this_00 + 0x2f0) = 0;
  repaintText(param_1,param_2,this_00,*(long *)(this_00 + 0x270),param_5,param_6,param_7,
              (ulong)param_8);
  moveCaret(this_00,uVar1);
  uVar5 = (**(code **)(*(long *)this_00 + 0x40))(this_00);
  lVar6 = CONCAT44(uVar5,uVar5);
  if (*(long *)(this_00 + 0x270) != lVar6) {
    *(long *)(this_00 + 0x270) = lVar6;
                    /* try { // try from 00248a35 to 00248a3c has its CatchHandler @ 00248a4b */
    lVar6 = Component::getAccessibilityHandler((Component *)(this_00 + 8));
  }
  return CONCAT71((int7)((ulong)lVar6 >> 8),1);
}


