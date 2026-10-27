// Function : setSelectedId
// Namespace: juce:ComboBox
// Entry    : 002d7710
// Prototype: undefined setSelectedId(ComboBox * this, int param_1, int param_2)
// Body     : 002d7710 - 002d7940


/* juce::ComboBox::setSelectedId(int, juce::NotificationType) */

void __thiscall juce::ComboBox::setSelectedId(ComboBox *this,int param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  bool bVar7;
  byte *local_48;
  undefined1 *local_40;
  int local_38 [2];
  byte *local_30;
  
  puVar5 = (undefined8 *)getItemForId(this,param_1);
  if (puVar5 == (undefined8 *)0x0) {
    local_48 = &DAT_0061ac58;
    iVar2 = *(int *)(this + 0x180);
  }
  else {
    local_48 = (byte *)*puVar5;
    pbVar6 = local_48 + -0x10;
    if (pbVar6 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(this + 0x180);
  }
  if (iVar2 == param_1) {
                    /* try { // try from 002d7781 to 002d7788 has its CatchHandler @ 002d7961 */
    (**(code **)(**(long **)(*(long *)(this + 0x1b8) + 0x178) + 0x10))(&local_40);
                    /* try { // try from 002d7793 to 002d779d has its CatchHandler @ 002d7949 */
    (**(code **)(local_40 + 0x28))(&local_30,local_38);
                    /* try { // try from 002d77a3 to 002d77a8 has its CatchHandler @ 002d7941 */
    (**(code **)(local_40 + 0x58))(local_38);
    if (local_30 == local_48) {
      bVar7 = false;
    }
    else {
      uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (local_30,local_48);
      bVar7 = uVar4 != 0;
    }
    if (local_30 != &DAT_0061ac58) {
      local_30 = local_30 + -0x10;
      LOCK();
      iVar2 = *(int *)local_30;
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(local_30);
      }
    }
    if (!bVar7) goto LAB_002d790e;
  }
                    /* try { // try from 002d780c to 002d7815 has its CatchHandler @ 002d7983 */
  Label::setText(*(Label **)(this + 0x1b8),(long *)&local_48,0);
  *(int *)(this + 0x180) = param_1;
  local_40 = &var::Instance::attributesInt;
                    /* try { // try from 002d783d to 002d7844 has its CatchHandler @ 002d796b */
  local_38[0] = param_1;
  (**(code **)(**(long **)(this + 0x150) + 0x18))();
                    /* try { // try from 002d784a to 002d784f has its CatchHandler @ 002d7963 */
  (**(code **)(local_40 + 0x58))(local_38);
                    /* try { // try from 002d7854 to 002d7862 has its CatchHandler @ 002d7983 */
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  if (param_2 != 0) {
    LOCK();
    bVar7 = *(int *)(*(long *)(this + 0x110) + 0x18) == 0;
    if (bVar7) {
      *(int *)(*(long *)(this + 0x110) + 0x18) = 1;
    }
    UNLOCK();
    if (bVar7) {
      plVar3 = *(long **)(this + 0x110);
      if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
         (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        LOCK();
        *(undefined4 *)(*(long *)(this + 0x110) + 0x18) = 0;
        UNLOCK();
      }
      else {
        InternalMessageQueue::postMessage
                  ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar3
                  );
      }
    }
    if (param_2 == 2) {
      LOCK();
      iVar2 = *(int *)(*(long *)(this + 0x110) + 0x18);
      *(int *)(*(long *)(this + 0x110) + 0x18) = 0;
      UNLOCK();
      if (iVar2 != 0) {
                    /* try { // try from 002d78dc to 002d78e1 has its CatchHandler @ 002d7983 */
        (**(code **)(*(long *)(this + 0x108) + 0x10))(this + 0x108);
      }
    }
  }
LAB_002d790e:
  pbVar6 = local_48 + -0x10;
  if (pbVar6 != (byte *)&emptyString) {
    LOCK();
    iVar2 = *(int *)pbVar6;
    *(int *)pbVar6 = *(int *)pbVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(pbVar6);
    }
  }
  return;
}


