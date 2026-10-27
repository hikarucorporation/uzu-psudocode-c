// Function : undo
// Namespace: juce:TextEditor:InsertAction
// Entry    : 00247260
// Prototype: undefined8 undo(undefined8 param_1, float param_2, InsertAction * this)
// Body     : 00247260 - 002472d3


/* juce::TextEditor::InsertAction::undo() */

undefined8 __thiscall
juce::TextEditor::InsertAction::undo(undefined8 param_1,float param_2,InsertAction *this)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *******in_R9;
  
  pcVar5 = *(char **)(this + 0x10);
  uVar3 = *(uint *)(this + 0x18);
  iVar6 = 0;
  do {
    cVar2 = *pcVar5;
    if (cVar2 < '\0') {
      do {
        pbVar1 = (byte *)(pcVar5 + 1);
        pcVar5 = pcVar5 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pcVar5 = pcVar5 + 1;
      if (cVar2 == '\0') {
        uVar7 = (ulong)(iVar6 + uVar3);
        if ((int)(iVar6 + uVar3) <= (int)uVar3) {
          uVar7 = (ulong)uVar3;
        }
        uVar4 = remove(param_1,param_2,*(TextEditor **)(this + 8),uVar7 << 0x20 | (ulong)uVar3,
                       (UndoManager *)0x0,*(uint *)(this + 0x1c),
                       (vector<long_long,std::allocator<long_long>> *)0x0,in_R9);
        return CONCAT71((int7)((ulong)uVar4 >> 8),1);
      }
    }
    iVar6 = iVar6 + 1;
  } while( true );
}


