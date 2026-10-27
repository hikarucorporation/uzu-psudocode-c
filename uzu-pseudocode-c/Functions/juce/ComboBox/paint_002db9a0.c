// Function : paint
// Namespace: juce:ComboBox
// Entry    : 002db9a0
// Prototype: undefined paint(ComboBox * this, undefined8 param_1)
// Body     : 002db9a0 - 002dbb8d


/* juce::ComboBox::paint(juce::Graphics&) */

void __thiscall juce::ComboBox::paint(ComboBox *this,undefined8 param_1)

{
  long lVar1;
  ComboBox *pCVar2;
  Desktop *pDVar3;
  LookAndFeel_V4 *pLVar4;
  int *piVar5;
  int iVar6;
  long local_30;
  undefined1 local_28 [8];
  char *local_20;
  
  pCVar2 = this;
  do {
    if ((*(long *)(pCVar2 + 0x68) != 0) &&
       (pLVar4 = *(LookAndFeel_V4 **)(*(long *)(pCVar2 + 0x68) + 0x10),
       pLVar4 != (LookAndFeel_V4 *)0x0)) goto LAB_002dba10;
    pCVar2 = *(ComboBox **)(pCVar2 + 0x30);
  } while (pCVar2 != (ComboBox *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002db9e9 to 002db9f2 has its CatchHandler @ 002dbbab */
    pDVar3 = operator_new(0x1d0);
                    /* try { // try from 002db9f6 to 002db9fd has its CatchHandler @ 002dbb98 */
    Desktop::Desktop(pDVar3);
    Desktop::instance = pDVar3;
  }
  pLVar4 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002dba10:
  iVar6 = *(int *)(*(long *)(this + 0x1b8) + 0x40) + *(int *)(*(long *)(this + 0x1b8) + 0x38);
  (**(code **)(*(long *)(pLVar4 + 0x48) + 0x10))
            (pLVar4 + 0x48,param_1,*(int *)(this + 0x40),*(undefined4 *)(this + 0x44),this[0x184],
             iVar6,0,*(int *)(this + 0x40) - iVar6,*(undefined4 *)(this + 0x44),this);
  if (**(char **)(this + 0x1c0) != '\0') {
    (**(code **)(**(long **)(*(long *)(this + 0x1b8) + 0x178) + 0x10))(&local_30);
                    /* try { // try from 002dba7f to 002dba89 has its CatchHandler @ 002dbbbb */
    (**(code **)(local_30 + 0x28))(&local_20,local_28);
                    /* try { // try from 002dba8f to 002dba94 has its CatchHandler @ 002dbbb3 */
    (**(code **)(local_30 + 0x58))(local_28);
    if (*local_20 == '\0') {
      lVar1 = *(long *)(*(long *)(this + 0x1b8) + 0x1c0);
      piVar5 = (int *)(local_20 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          operator_delete__(piVar5);
        }
      }
      if (lVar1 == 0) {
        pCVar2 = this;
        do {
          if ((*(long *)(pCVar2 + 0x68) != 0) &&
             (pLVar4 = *(LookAndFeel_V4 **)(*(long *)(pCVar2 + 0x68) + 0x10),
             pLVar4 != (LookAndFeel_V4 *)0x0)) goto LAB_002dbb6c;
          pCVar2 = *(ComboBox **)(pCVar2 + 0x30);
        } while (pCVar2 != (ComboBox *)0x0);
        if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002dbb45 to 002dbb4e has its CatchHandler @ 002dbb90 */
          pDVar3 = operator_new(0x1d0);
                    /* try { // try from 002dbb52 to 002dbb59 has its CatchHandler @ 002dbb8e */
          Desktop::Desktop(pDVar3);
          Desktop::instance = pDVar3;
        }
        pLVar4 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002dbb6c:
        (**(code **)(*(long *)(pLVar4 + 0x48) + 0x38))
                  (pLVar4 + 0x48,param_1,this,*(undefined8 *)(this + 0x1b8));
      }
    }
    else {
      piVar5 = (int *)(local_20 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          operator_delete__(piVar5);
        }
      }
    }
  }
  return;
}


