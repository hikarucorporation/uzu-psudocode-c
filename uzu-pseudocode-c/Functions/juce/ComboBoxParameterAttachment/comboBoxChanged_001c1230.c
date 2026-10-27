// Function : comboBoxChanged
// Namespace: juce:ComboBoxParameterAttachment
// Entry    : 001c1230
// Prototype: undefined comboBoxChanged(long param_1)
// Body     : 001c1230 - 001c131b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComboBoxParameterAttachment::comboBoxChanged(juce::ComboBox*) */

void __cdecl juce::ComboBoxParameterAttachment::comboBoxChanged(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  MenuItemIterator local_48 [8];
  undefined4 *local_40;
  undefined1 *local_38;
  long *local_30;
  undefined1 *local_28;
  long local_20;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    return;
  }
  lVar1 = *(long *)(param_1 + 8);
  local_48[0] = (MenuItemIterator)0x1;
  local_40 = malloc(0x20);
  local_20 = 0;
  local_38 = &DAT_100000008;
  *local_40 = 0;
  local_30 = malloc(0x40);
  local_28 = &DAT_100000008;
  *local_30 = lVar1 + 0x138;
  uVar5 = 0;
  uVar4 = PopupMenu::MenuItemIterator::next(local_48);
  cVar2 = (char)uVar4;
  while (cVar2 != '\0') {
    uVar5 = (uVar5 + 1) - (uint)(*(int *)(local_20 + 8) == 0);
    uVar4 = PopupMenu::MenuItemIterator::next(local_48);
    cVar2 = (char)uVar4;
  }
  free(local_30);
  free(local_40);
  iVar3 = ComboBox::getSelectedItemIndex(*(ComboBox **)(param_1 + 8));
  fVar6 = 0.0;
  if (1 < uVar5) {
    fVar6 = (float)iVar3 / (float)(int)(uVar5 - 1);
  }
  uVar4 = RangedAudioParameter::convertFrom0to1
                    ((ulong)(uint)fVar6,*(RangedAudioParameter **)(param_1 + 0x10));
  ParameterAttachment::setValueAsCompleteGesture(uVar4,(ParameterAttachment *)(param_1 + 0x18));
  return;
}


