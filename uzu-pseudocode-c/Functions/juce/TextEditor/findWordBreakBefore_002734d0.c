// Function : findWordBreakBefore
// Namespace: juce:TextEditor
// Entry    : 002734d0
// Prototype: int findWordBreakBefore(TextEditor * this, uint param_1)
// Body     : 002734d0 - 0027360a


/* juce::TextEditor::findWordBreakBefore(int) const */

int __thiscall juce::TextEditor::findWordBreakBefore(TextEditor *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  char cVar8;
  long local_38;
  uint local_30;
  uint local_2c;
  
  if ((int)param_1 < 1) {
    iVar4 = 0;
  }
  else {
    uVar2 = 0x200;
    if (0x200 < param_1) {
      uVar2 = param_1;
    }
    uVar1 = uVar2 - 0x200;
    local_2c = uVar1;
    if (uVar1 < param_1) {
      local_2c = param_1;
    }
    local_30 = uVar1;
    (**(code **)(*(long *)this + 0x30))(&local_38,this,&local_30);
    iVar4 = (param_1 - uVar2) + 0x202;
    do {
      iVar5 = iVar4;
      iVar4 = iVar5 + -2;
      if (iVar4 < 1) goto LAB_002735d3;
      uVar2 = juce::String::operator[]((String *)&local_38,iVar5 + -3);
      iVar3 = iswspace(uVar2);
      iVar4 = iVar5 + -1;
    } while (iVar3 != 0);
    uVar2 = juce::String::operator[]((String *)&local_38,iVar5 + -3);
    iVar4 = iswalnum(uVar2);
    cVar7 = '\x02';
    if (iVar4 == 0) {
      iVar4 = iswspace(uVar2);
      cVar7 = iVar4 == 0;
    }
    iVar5 = iVar5 + -1;
    do {
      iVar4 = iVar5 + -1;
      if (iVar4 < 1) {
        iVar4 = 0;
        break;
      }
      uVar2 = juce::String::operator[]((String *)&local_38,iVar5 + -2);
      iVar5 = iswalnum(uVar2);
      cVar8 = '\x02';
      if (iVar5 == 0) {
        iVar5 = iswspace(uVar2);
        cVar8 = iVar5 == 0;
      }
      iVar5 = iVar4;
    } while (cVar7 == cVar8);
LAB_002735d3:
    piVar6 = (int *)(local_38 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        operator_delete__(piVar6);
      }
    }
    iVar4 = iVar4 + uVar1;
  }
  return iVar4;
}


