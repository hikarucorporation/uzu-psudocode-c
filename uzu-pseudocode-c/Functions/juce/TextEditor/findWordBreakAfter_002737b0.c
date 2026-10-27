// Function : findWordBreakAfter
// Namespace: juce:TextEditor
// Entry    : 002737b0
// Prototype: int findWordBreakAfter(TextEditor * this, uint param_1)
// Body     : 002737b0 - 00273958


/* juce::TextEditor::findWordBreakAfter(int) const */

int __thiscall juce::TextEditor::findWordBreakAfter(TextEditor *this,uint param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  char *local_48;
  ulong local_40;
  uint local_38;
  int local_34;
  
  local_34 = param_1 + 0x200;
  local_38 = param_1;
  (**(code **)(*(long *)this + 0x30))(&local_48,this,&local_38);
  iVar5 = 0;
  iVar8 = 0;
  pcVar4 = local_48;
  do {
    cVar9 = *pcVar4;
    if (cVar9 < '\0') {
      do {
        pbVar1 = (byte *)(pcVar4 + 1);
        pcVar4 = pcVar4 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pcVar4 = pcVar4 + 1;
      if (cVar9 == '\0') break;
    }
    iVar8 = iVar8 + 1;
    iVar5 = iVar5 + -1;
  } while( true );
  iVar6 = 0;
  if (0 < iVar8) {
    do {
      uVar2 = juce::String::operator[]((String *)&local_48,iVar6);
      iVar3 = iswspace(uVar2);
      if (iVar3 == 0) goto LAB_00273851;
      iVar6 = iVar6 + 1;
    } while (iVar5 + iVar6 != 0);
    iVar6 = iVar8;
  }
LAB_00273851:
  uVar2 = juce::String::operator[]((String *)&local_48,iVar6);
  iVar3 = iswalnum(uVar2);
  cVar9 = '\x02';
  if (iVar3 == 0) {
    iVar3 = iswspace(uVar2);
    cVar9 = iVar3 == 0;
  }
  if (iVar6 < iVar8) {
    local_40 = (ulong)param_1;
    do {
      uVar2 = juce::String::operator[]((String *)&local_48,iVar6);
      iVar3 = iswalnum(uVar2);
      cVar10 = '\x02';
      if (iVar3 == 0) {
        iVar3 = iswspace(uVar2);
        cVar10 = iVar3 == 0;
      }
      param_1 = (uint)local_40;
      if (cVar9 != cVar10) goto joined_r0x002738ec;
      iVar6 = iVar6 + 1;
    } while (iVar5 + iVar6 != 0);
    iVar6 = iVar8;
  }
  else {
joined_r0x002738ec:
    if (iVar6 < iVar8) {
      iVar5 = iVar5 + iVar6;
      do {
        uVar2 = juce::String::operator[]((String *)&local_48,iVar6);
        iVar3 = iswspace(uVar2);
        if (iVar3 == 0) goto LAB_0027391f;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0);
      iVar6 = iVar8;
    }
  }
LAB_0027391f:
  piVar7 = (int *)(local_48 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      operator_delete__(piVar7);
    }
  }
  return iVar6 + param_1;
}


