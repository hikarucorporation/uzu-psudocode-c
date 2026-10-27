// Function : performPopupMenuAction
// Namespace: juce:TextEditor
// Entry    : 0026d010
// Prototype: undefined performPopupMenuAction(undefined8 param_1_00, float param_2, TextEditor * this, int param_4, undefined8 param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 0026d010 - 0026d274


/* juce::TextEditor::performPopupMenuAction(int) */

void __thiscall
juce::TextEditor::performPopupMenuAction
          (undefined8 param_1_00,float param_2,TextEditor *this,int param_4,undefined8 param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  int iVar1;
  undefined1 auVar2 [16];
  TextEditor *pTVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  timespec local_18;
  uint switchD_0026d031::switchdataD_005de95c;
  
  uVar6 = (ulong)(param_4 - 0x1002U);
  if (param_4 - 0x1002U < 8) {
    lVar4 = (long)&switchD_0026d031::switchdataD_005de95c +
            (long)(int)(&switchD_0026d031::switchdataD_005de95c)[uVar6];
    switch(uVar6) {
    case 0:
      if (this[0x1c8] == (TextEditor)0x0) {
        pTVar3 = this + 8;
        do {
          if ((*(ushort *)(pTVar3 + 0xe8) & 0x8000) != 0) {
            return;
          }
          pTVar3 = *(TextEditor **)(pTVar3 + 0x30);
        } while (pTVar3 != (TextEditor *)0x0);
        moveCaret(this,*(uint *)(this + 0x274));
        local_18.tv_sec = (__time_t)&DAT_0061ac58;
                    /* try { // try from 0026d238 to 0026d240 has its CatchHandler @ 0026d275 */
        (**(code **)(*(long *)this + 0x38))(this,&local_18);
        piVar7 = (int *)(local_18.tv_sec + -0x10);
        if (piVar7 != &emptyString) {
          LOCK();
          iVar1 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar7);
            return;
          }
        }
      }
      break;
    case 1:
      cutToClipboard(this);
      return;
    case 2:
      uVar5 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
      if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
        clock_gettime(1,&local_18);
        auVar2 = SEXT816(local_18.tv_nsec / 1000 + local_18.tv_sec * 1000000) *
                 SEXT816(0x20c49ba5e353f7cf);
        uVar5 = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar5) ||
           (uVar5 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar5;
        }
      }
      *(uint *)(this + 0x280) = uVar5;
      this[0x260] = (TextEditor)0x1;
      LOCK();
      lVar4 = *(long *)(this + 0x248);
      *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
      UNLOCK();
      piVar7 = (int *)(lVar4 + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar7);
        }
      }
      copy(this);
      return;
    case 3:
      uVar5 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
      if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
        clock_gettime(1,&local_18);
        auVar2 = SEXT816(local_18.tv_nsec / 1000 + local_18.tv_sec * 1000000) *
                 SEXT816(0x20c49ba5e353f7cf);
        uVar5 = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar5) ||
           (uVar5 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar5;
        }
      }
      *(uint *)(this + 0x280) = uVar5;
      this[0x260] = (TextEditor)0x1;
      LOCK();
      lVar4 = *(long *)(this + 0x248);
      *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
      UNLOCK();
      piVar7 = (int *)(lVar4 + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar7);
        }
      }
      paste(this);
      return;
    case 4:
      selectAll(param_1_00,param_2,this,uVar6,param_5,lVar4,param_7,param_8);
      return;
    case 6:
      undoOrRedo(this,'\x01',param_5,lVar4,param_7,param_8);
      return;
    case 7:
      undoOrRedo(this,'\0',param_5,lVar4,param_7,param_8);
      return;
    }
  }
  return;
}


