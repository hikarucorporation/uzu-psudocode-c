// Function : mouseDrag
// Namespace: juce:AlertWindow
// Entry    : 0028f160
// Prototype: undefined mouseDrag(AlertWindow * this, ulong * param_1)
// Body     : 0028f160 - 0028f24e


/* juce::AlertWindow::mouseDrag(juce::MouseEvent const&) */

void __thiscall juce::AlertWindow::mouseDrag(AlertWindow *this,ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  AlertWindow *pAVar3;
  int iVar4;
  AlertWindow *pAVar5;
  undefined8 uVar6;
  float local_80 [2];
  int local_78;
  int local_74;
  
  uVar1 = *(undefined8 *)(this + 0x38);
  uVar2 = *(undefined8 *)(this + 0x40);
  iVar4 = (int)uVar1;
  if ((*(ushort *)(this + 0xe8) & 1) == 0) {
    MouseEvent::getEventRelativeTo(local_80,param_1,(long *)this);
    iVar4 = (local_78 + iVar4) - (int)*(undefined8 *)(this + 0x378);
    local_74 = local_74 - (int)((ulong)*(undefined8 *)(this + 0x378) >> 0x20);
  }
  else {
    uVar6 = detail::MouseInputSourceImpl::getScreenPosition((MouseInputSourceImpl *)param_1[10]);
    pAVar3 = this;
    do {
      pAVar5 = pAVar3;
      pAVar3 = *(AlertWindow **)(pAVar5 + 0x30);
    } while (*(AlertWindow **)(pAVar5 + 0x30) != (AlertWindow *)0x0);
    uVar6 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
                      (uVar6,(long *)pAVar5);
    if (pAVar5 != this) {
      uVar6 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                        (uVar6,(long)pAVar5,(long *)this);
    }
    local_74 = SUB84((double)(float)((ulong)uVar6 >> 0x20) + DAT_005d9098,0) -
               (int)((ulong)*(undefined8 *)(this + 0x378) >> 0x20);
    iVar4 = (SUB84((double)(float)uVar6 + DAT_005d9098,0) - (int)*(undefined8 *)(this + 0x378)) +
            iVar4;
  }
  ComponentBoundsConstrainer::setBoundsForComponent
            ((long *)(this + 0x340),(ComponentHelpers *)this,
             CONCAT44((int)((ulong)uVar1 >> 0x20) + local_74,iVar4),uVar2,0,0);
  return;
}


