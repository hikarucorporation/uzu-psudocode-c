// Function : _M_invoke
// Namespace: std:_Function_handler_void_float__juce__ComboBoxParameterAttachment__ComboBoxParameterAttachme~533995aa
// Entry    : 001c1060
// Prototype: undefined _M_invoke(long * param_1, uint * param_2)
// Body     : 001c1060 - 001c118f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (float),
   juce::ComboBoxParameterAttachment::ComboBoxParameterAttachment(juce::RangedAudioParameter&,
   juce::ComboBox&, juce::UndoManager*)::$_17>::_M_invoke(std::_Any_data const&, float&&) */

void __cdecl
std::
_Function_handler<void(float),juce::ComboBoxParameterAttachment::ComboBoxParameterAttachment(juce::RangedAudioParameter&,juce::ComboBox&,juce::UndoManager*)::$_17>
::_M_invoke(long *param_1,uint *param_2)

{
  undefined1 uVar1;
  long lVar2;
  ComboBox *this;
  double dVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  MenuItemIterator local_50 [8];
  undefined4 *local_48;
  undefined1 *local_40;
  long *local_38;
  undefined1 *local_30;
  long local_28;
  
  lVar2 = *param_1;
  fVar9 = juce::RangedAudioParameter::convertTo0to1
                    ((ulong)*param_2,*(RangedAudioParameter **)(lVar2 + 0x10));
  lVar6 = *(long *)(lVar2 + 8);
  local_50[0] = (MenuItemIterator)0x1;
  local_48 = malloc(0x20);
  local_28 = 0;
  local_40 = &DAT_100000008;
  *local_48 = 0;
  local_38 = malloc(0x40);
  local_30 = &DAT_100000008;
  *local_38 = lVar6 + 0x138;
  iVar8 = 0;
  uVar5 = juce::PopupMenu::MenuItemIterator::next(local_50);
  cVar4 = (char)uVar5;
  while (cVar4 != '\0') {
    iVar8 = (iVar8 + 1) - (uint)(*(int *)(local_28 + 8) == 0);
    uVar5 = juce::PopupMenu::MenuItemIterator::next(local_50);
    cVar4 = (char)uVar5;
  }
  free(local_38);
  free(local_48);
  dVar3 = (double)(fVar9 * (float)(iVar8 + -1)) + DAT_005d9098;
  iVar8 = juce::ComboBox::getSelectedItemIndex(*(ComboBox **)(lVar2 + 8));
  iVar7 = SUB84(dVar3,0);
  if (iVar8 != iVar7) {
    uVar1 = *(undefined1 *)(lVar2 + 0x68);
    *(undefined1 *)(lVar2 + 0x68) = 1;
    this = *(ComboBox **)(lVar2 + 8);
    lVar6 = juce::ComboBox::getItemForIndex(this,iVar7);
    if (lVar6 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(lVar6 + 8);
    }
                    /* try { // try from 001c1174 to 001c1180 has its CatchHandler @ 001c1190 */
    juce::ComboBox::setSelectedId(this,iVar8,2);
    *(undefined1 *)(lVar2 + 0x68) = uVar1;
  }
  return;
}


