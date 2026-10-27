// Function : paste
// Namespace: juce:TextEditor
// Entry    : 00274d50
// Prototype: undefined paste(TextEditor * this)
// Body     : 00274d50 - 00274e50


/* juce::TextEditor::paste() */

void __thiscall juce::TextEditor::paste(TextEditor *this)

{
  int iVar1;
  char *pcVar2;
  TextEditor *pTVar3;
  XWindowSystem *pXVar4;
  int *piVar5;
  char *local_28;
  char *local_20;
  
  if (this[0x1c8] != (TextEditor)0x0) {
    return;
  }
  pTVar3 = this + 8;
  do {
    if ((*(ushort *)(pTVar3 + 0xe8) & 0x8000) != 0) {
      return;
    }
    pTVar3 = *(TextEditor **)(pTVar3 + 0x30);
  } while (pTVar3 != (TextEditor *)0x0);
  pXVar4 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  const::$_19::operator()((__19 *)&local_28,(long)pXVar4,*(undefined8 *)(pXVar4 + 0x138));
  pcVar2 = local_28;
  if (*local_28 == '\0') {
                    /* try { // try from 00274dc3 to 00274dd4 has its CatchHandler @ 00274e51 */
    const::$_19::operator()((__19 *)&local_20,(long)pXVar4,1);
    local_28 = local_20;
    local_20 = pcVar2;
    piVar5 = (int *)(pcVar2 + -0x10);
    if (piVar5 != &emptyString) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar5);
      }
    }
    if (*local_28 == '\0') goto LAB_00274e22;
  }
                    /* try { // try from 00274e15 to 00274e1d has its CatchHandler @ 00274e77 */
  (**(code **)(*(long *)this + 0x38))(this,&local_28);
LAB_00274e22:
  piVar5 = (int *)(local_28 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  return;
}


