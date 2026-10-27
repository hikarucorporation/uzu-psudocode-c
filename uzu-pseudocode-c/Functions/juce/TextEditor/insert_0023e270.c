// Function : insert
// Namespace: juce:TextEditor
// Entry    : 0023e270
// Prototype: undefined insert(undefined8 param_1_00, float param_2_00, TextEditor * this, String * param_4, int param_5, uint * param_6, undefined4 param_7, UndoManager * param_8, uint param_9)
// Body     : 0023e270 - 0023e5c4


/* juce::TextEditor::insert(juce::String const&, int, juce::Font const&, juce::Colour,
   juce::UndoManager*, int) */

void __thiscall
juce::TextEditor::insert
          (undefined8 param_1_00,float param_2_00,TextEditor *this,String *param_4,int param_5,
          uint *param_6,undefined4 param_7,UndoManager *param_8,uint param_9)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  long lVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_00;
  undefined4 local_50 [2];
  undefined4 local_48;
  uint local_44;
  timespec local_40;
  
  if (**(char **)param_4 == '\0') {
    return;
  }
  local_50[0] = param_7;
  if (param_8 != (UndoManager *)0x0) {
    local_44 = param_9;
    if ((((param_8[0x88] == (UndoManager)0x0) &&
         (*(int *)(param_8 + 0x84) - 1U < *(uint *)(param_8 + 0x5c))) &&
        (lVar9 = *(long *)(*(long *)(param_8 + 0x50) + -8 + (long)*(int *)(param_8 + 0x84) * 8),
        lVar9 != 0)) && (100 < *(int *)(lVar9 + 0xc))) {
      uVar8 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
      if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
        clock_gettime(1,&local_40);
        auVar1 = SEXT816(local_40.tv_nsec / 1000 + local_40.tv_sec * 1000000) *
                 SEXT816(0x20c49ba5e353f7cf);
        uVar8 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar8) ||
           (uVar8 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar8;
        }
      }
      *(uint *)(this + 0x280) = uVar8;
      this[0x260] = (TextEditor)0x1;
      LOCK();
      lVar9 = *(long *)(this + 0x248);
      *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
      UNLOCK();
      piVar10 = (int *)(lVar9 + -0x10);
      if (piVar10 != &emptyString) {
        LOCK();
        iVar4 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          operator_delete__(piVar10);
        }
      }
    }
    local_48 = param_7;
    plVar6 = operator_new(0x38);
                    /* try { // try from 0023e3ba to 0023e3bf has its CatchHandler @ 0023e5cd */
    uVar2 = (**(code **)(*(long *)this + 0x40))(this);
    *plVar6 = (long)&PTR__InsertAction_00710c28;
    plVar6[1] = (long)this;
    lVar9 = *(long *)param_4;
    plVar6[2] = lVar9;
    piVar10 = (int *)(lVar9 + -0x10);
    if (piVar10 != &emptyString) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
    }
    *(int *)(plVar6 + 3) = param_5;
    *(undefined4 *)((long)plVar6 + 0x1c) = uVar2;
    *(uint *)(plVar6 + 4) = local_44;
    lVar9 = *(long *)param_6;
    plVar6[5] = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar6 + 6) = local_48;
    UndoManager::perform(param_8,plVar6);
    return;
  }
  puVar11 = local_50;
  TextEditorStorage::set
            (*(Ranges **)(this + 0x330),(long)param_5,(long)param_5,param_4,(long *)param_6,puVar11)
  ;
  uVar3 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
  uVar8 = *(uint *)(this + 0x340);
  uVar2 = 0;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  if (uVar3 < uVar8) {
    uVar8 = uVar3;
  }
  if (uVar8 != 0) {
    ParagraphsModel::getText(&local_40.tv_sec,*(long *)(*(long *)(this + 0x338) + 0x330) + 0x60);
    uVar3 = juce::String::operator[]((String *)&local_40,uVar8 - 1);
    piVar10 = (int *)(local_40.tv_sec + -0x10);
    if (piVar10 != &emptyString) {
      LOCK();
      iVar4 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        operator_delete__(piVar10);
      }
    }
    if (uVar3 != 10) {
      uVar3 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
      uVar2 = 1;
      if (uVar8 != uVar3) {
        uVar2 = *(undefined4 *)(this + 0x348);
      }
    }
  }
  *(undefined4 *)(this + 0x344) = uVar2;
  iVar4 = (**(code **)(*(long *)this + 0x50))(this);
  if (iVar4 <= param_5) {
    iVar4 = param_5;
  }
  lVar9 = CONCAT44(iVar4,param_5);
  repaintText(extraout_XMM0_Qa,param_2_00,this,lVar9,extraout_RDX,param_4,param_6,(ulong)puVar11);
  *(undefined4 *)(this + 0x290) = 0xffffffff;
  this[0x1d4] = (TextEditor)0x1;
  uVar12 = checkLayout(this,lVar9,extraout_RDX_00,(long)param_4,param_6,(ulong)puVar11);
  *(undefined4 *)(this + 0x2f0) = 0;
  repaintText(uVar12,param_2_00,this,*(long *)(this + 0x270),extraout_RDX_01,param_4,param_6,
              (ulong)puVar11);
  moveCaret(this,param_9);
  uVar8 = (**(code **)(*(long *)this + 0x40))(this);
  uVar7 = (ulong)uVar8;
  if (*(long *)(this + 0x270) != CONCAT44(uVar8,uVar8)) {
    *(long *)(this + 0x270) = CONCAT44(uVar8,uVar8);
                    /* try { // try from 0023e590 to 0023e594 has its CatchHandler @ 0023e5c5 */
    Component::getAccessibilityHandler((Component *)(this + 8));
  }
  iVar5 = (**(code **)(*(long *)this + 0x50))(this);
  iVar4 = param_5;
  if (param_5 < iVar5) {
    iVar4 = iVar5;
  }
  repaintText(extraout_XMM0_Qa_00,param_2_00,this,CONCAT44(iVar4,param_5),extraout_RDX_02,uVar7,
              param_6,(ulong)puVar11);
  return;
}


