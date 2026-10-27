// Function : setText
// Namespace: juce:TextEditor
// Entry    : 00238c80
// Prototype: undefined setText(undefined8 param_1_00, float param_2, TextEditor * this, String * param_4, undefined4 param_5, undefined8 param_6, undefined8 param_7, undefined8 * * * * * * * param_8)
// Body     : 00238c80 - 00238f2b


/* juce::TextEditor::setText(juce::String const&, bool) */

void __thiscall
juce::TextEditor::setText
          (undefined8 param_1_00,float param_2,TextEditor *this,String *param_4,undefined4 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 *******param_8)

{
  byte *pbVar1;
  Component *this_00;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  ulong uVar9;
  TextEditor *pTVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  bool bVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa_01;
  byte *local_48;
  long local_40;
  undefined4 local_34;
  
  pcVar7 = *(char **)param_4;
  iVar5 = 0;
  do {
    cVar2 = *pcVar7;
    if (cVar2 < '\0') {
      do {
        pbVar1 = (byte *)(pcVar7 + 1);
        pcVar7 = pcVar7 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pcVar7 = pcVar7 + 1;
      if (cVar2 == '\0') {
        iVar3 = (**(code **)(*(long *)this + 0x50))(this);
        if (iVar3 == iVar5) {
          ParagraphsModel::getText(&local_48,*(long *)(this + 0x330) + 0x60);
          if (local_48 == *(byte **)param_4) {
            bVar16 = false;
          }
          else {
            uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                              (local_48,*(byte **)param_4);
            bVar16 = uVar4 != 0;
          }
          if (local_48 != &DAT_0061ac58) {
            local_48 = local_48 + -0x10;
            LOCK();
            iVar5 = *(int *)local_48;
            *(int *)local_48 = *(int *)local_48 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              operator_delete__(local_48);
            }
          }
          if (!bVar16) {
            return;
          }
        }
        if ((char)param_5 == '\0') {
          lVar13 = *(long *)(this + 400);
          if (lVar13 != 0) {
            lVar13 = lVar13 + 0x118;
          }
          Value::removeListener((Value *)(this + 0x2b8),lVar13);
        }
        local_48 = &var::Instance::attributesString;
        local_40 = *(long *)param_4;
        piVar8 = (int *)(local_40 + -0x10);
        if (piVar8 != &emptyString) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
                    /* try { // try from 00238da7 to 00238dae has its CatchHandler @ 00238f3c */
        (**(code **)(**(long **)(this + 0x2b8) + 0x18))(*(long **)(this + 0x2b8),&local_48);
                    /* try { // try from 00238dbe to 00238dc0 has its CatchHandler @ 00238f34 */
        local_34 = param_5;
        (**(code **)(local_48 + 0x58))(&local_40);
        uVar4 = *(uint *)(this + 0x340);
        iVar5 = (**(code **)(*(long *)this + 0x50))(this);
        uVar6 = (**(code **)(*(long *)this + 0x50))(this);
        uVar9 = (ulong)uVar6;
        if ((int)uVar6 < 0) {
          uVar9 = 0;
        }
        uVar6 = (**(code **)(*(long *)this + 0x40))(this);
        remove(extraout_XMM0_Qa,param_2,this,uVar9 << 0x20,(UndoManager *)0x0,uVar6,
               (vector<long_long,std::allocator<long_long>> *)0x0,param_8);
        pTVar10 = this + 0x288;
        this_00 = (Component *)(this + 8);
        uVar9 = Component::findColour(this_00,0x1000201,'\0');
        puVar14 = (uint *)(uVar9 & 0xffffffff);
        uVar15 = 0;
        uVar17 = insert(extraout_XMM0_Qa_00,param_2,this,param_4,0,(uint *)pTVar10,(int)uVar9,
                        (UndoManager *)0x0,*(uint *)(this + 0x340));
        uVar12 = extraout_RDX;
        if ((iVar5 <= (int)uVar4) && (this[0x1ca] == (TextEditor)0x0)) {
          uVar4 = (**(code **)(*(long *)this + 0x50))(this);
          uVar12 = extraout_RDX_00;
          uVar17 = extraout_XMM0_Qa_01;
        }
        *(undefined4 *)(this + 0x2f0) = 0;
        repaintText(uVar17,param_2,this,*(long *)(this + 0x270),uVar12,pTVar10,puVar14,uVar15);
        uVar9 = (ulong)uVar4;
        moveCaret(this,uVar4);
        uVar4 = (**(code **)(*(long *)this + 0x40))(this);
        uVar11 = (ulong)uVar4;
        uVar12 = extraout_RDX_01;
        if (*(long *)(this + 0x270) != CONCAT44(uVar4,uVar4)) {
          *(long *)(this + 0x270) = CONCAT44(uVar4,uVar4);
                    /* try { // try from 00238ea1 to 00238ea8 has its CatchHandler @ 00238f2c */
          Component::getAccessibilityHandler(this_00);
          uVar12 = extraout_RDX_02;
        }
        if ((char)local_34 == '\0') {
          uVar9 = *(ulong *)(this + 400);
          if (uVar9 != 0) {
            uVar9 = uVar9 + 0x118;
          }
          Value::addListener((Value *)(this + 0x2b8),uVar9);
          uVar12 = extraout_RDX_04;
        }
        else {
          textChanged(this,uVar9,uVar12,uVar11,puVar14,uVar15);
          uVar12 = extraout_RDX_03;
        }
        checkLayout(this,uVar9,uVar12,uVar11,puVar14,uVar15);
        scrollToMakeSureCursorIsVisible(this);
        UndoManager::clearUndoHistory((UndoManager *)(this + 0x1d8));
        Component::internalRepaintUnchecked((long)this_00,0,*(ulong *)(this + 0x48),'\x01');
        return;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


