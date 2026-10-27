// Function : clear
// Namespace: juce:ComboBox
// Entry    : 002d7580
// Prototype: undefined clear(ComboBox * this, int param_1)
// Body     : 002d7580 - 002d7647


/* juce::ComboBox::clear(juce::NotificationType) */

void __thiscall juce::ComboBox::clear(ComboBox *this,int param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  if (0 < *(int *)(this + 0x144)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      PopupMenu::Item::~Item((Item *)(*(long *)(this + 0x138) + lVar2));
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x70;
    } while (lVar1 < *(int *)(this + 0x144));
  }
  *(undefined4 *)(this + 0x144) = 0;
  if (*(int *)(this + 0x140) != 0) {
    free(*(void **)(this + 0x138));
    *(undefined8 *)(this + 0x138) = 0;
  }
  *(undefined4 *)(this + 0x140) = 0;
  if (*(char *)(*(long *)(this + 0x1b8) + 0x210) != '\0' ||
      *(char *)(*(long *)(this + 0x1b8) + 0x211) != '\0') {
    return;
  }
  lVar1 = getItemForIndex(this,-1);
  if (lVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(lVar1 + 8);
  }
  setSelectedId(this,iVar3,param_1);
  return;
}


