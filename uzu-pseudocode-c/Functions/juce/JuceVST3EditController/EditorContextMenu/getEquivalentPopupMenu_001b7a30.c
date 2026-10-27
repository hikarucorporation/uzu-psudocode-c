// Function : getEquivalentPopupMenu
// Namespace: juce:JuceVST3EditController:EditorContextMenu
// Entry    : 001b7a30
// Prototype: PopupMenu * getEquivalentPopupMenu(PopupMenu * param_1, long param_2)
// Body     : 001b7a30 - 001b7e64


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu() const */

PopupMenu * __cdecl
juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu
          (PopupMenu *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  PopupMenu *pPVar4;
  long *plVar5;
  PopupMenu *pPVar6;
  int iVar7;
  String *this;
  PopupMenu *local_1e8;
  PopupMenu *local_1e0;
  PopupMenu *local_1d8;
  int local_1cc;
  PopupMenu *local_1c8;
  String local_1c0 [8];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  String local_1a0 [8];
  PopupMenu local_198;
  long *local_188;
  undefined8 uStack_180;
  code *local_178;
  code *pcStack_170;
  long local_168;
  String local_160 [8];
  undefined8 local_158;
  PopupMenu local_150 [24];
  ushort local_138 [130];
  uint local_34;
  
  pPVar4 = operator_new(0x28);
  pPVar6 = pPVar4 + 0x28;
  *(undefined8 *)pPVar4 = 0;
  *(undefined8 *)(pPVar4 + 8) = 0;
  *(undefined8 *)(pPVar4 + 0x10) = 0;
  *(undefined8 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  local_1e8 = pPVar4;
  local_1d8 = pPVar6;
  juce::String::String((String *)(pPVar4 + 0x18));
                    /* try { // try from 001b7a88 to 001b7a8a has its CatchHandler @ 001b7e6a */
  local_1e0 = pPVar6;
  iVar3 = (**(code **)(**(long **)(param_2 + 0x10) + 0x18))();
  if (0 < iVar3) {
    iVar7 = 0;
    local_1cc = iVar3;
    local_1c8 = param_1;
    local_168 = param_2;
    do {
      memset(local_138,0,0x108);
      local_158 = 0;
                    /* try { // try from 001b7b30 to 001b7b3f has its CatchHandler @ 001b7f2d */
      (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
                (*(long **)(param_2 + 0x10),iVar7,local_138,&local_158);
      pPVar6 = local_1e0;
      if ((~local_34 & 10) == 0) {
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = 0;
                    /* try { // try from 001b7b61 to 001b7b75 has its CatchHandler @ 001b7f25 */
        juce::String::String(local_1a0,local_138);
        pPVar6 = local_1e0;
        local_198 = (PopupMenu)((local_34 & 2) == 0);
        if (local_1e0 == local_1d8) {
                    /* try { // try from 001b7b98 to 001b7ba5 has its CatchHandler @ 001b7f0c */
          std::
          vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu,std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>>
          ::
          _M_realloc_insert<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>
                    ((vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu,std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>>
                      *)&local_1e8,local_1e0,&local_1b8);
        }
        else {
          PopupMenu::PopupMenu(local_1e0,&local_1b8);
          juce::String::String((String *)(pPVar6 + 0x18),(undefined8 *)local_1a0);
          pPVar6[0x20] = local_198;
          local_1e0 = local_1e0 + 0x28;
        }
        juce::String::~String(local_1a0);
        PopupMenu::~PopupMenu((PopupMenu *)&local_1b8);
      }
      else if ((~local_34 & 0x11) == 0) {
                    /* try { // try from 001b7bc2 to 001b7bcb has its CatchHandler @ 001b7f23 */
        PopupMenu::PopupMenu((PopupMenu *)&local_1b8,(undefined8 *)(local_1e0 + -0x28));
        juce::String::String(local_1a0,(long *)(pPVar6 + -0x10));
        local_198 = pPVar6[-8];
        pPVar6 = local_1e0 + -0x28;
        this = (String *)(local_1e0 + -0x10);
        local_1e0 = pPVar6;
        juce::String::~String(this);
        PopupMenu::~PopupMenu(pPVar6);
        pPVar4 = local_1e0;
        pPVar6 = local_1e8;
        if (local_1e8 == local_1e0) {
          *(undefined8 *)local_1c8 = 0;
          *(undefined8 *)(local_1c8 + 8) = 0;
          *(undefined8 *)(local_1c8 + 0x10) = 0;
        }
        else {
          juce::String::String(local_1c0,(long *)local_1a0);
                    /* try { // try from 001b7c21 to 001b7c35 has its CatchHandler @ 001b7ef8 */
          PopupMenu::PopupMenu(local_150,&local_1b8);
                    /* try { // try from 001b7c3f to 001b7c49 has its CatchHandler @ 001b7ee6 */
          PopupMenu::addSubMenu
                    (pPVar4 + -0x28,(undefined8 *)local_1c0,(long *)local_150,(uint)(byte)local_198)
          ;
          PopupMenu::~PopupMenu(local_150);
          juce::String::~String(local_1c0);
        }
        juce::String::~String(local_1a0);
        PopupMenu::~PopupMenu((PopupMenu *)&local_1b8);
        iVar3 = local_1cc;
        if (pPVar6 == pPVar4) {
          pPVar6 = local_1e8;
          pPVar4 = local_1e0;
          param_1 = local_1c8;
          if (local_1e8 == local_1e0) goto joined_r0x001b7e02;
          goto LAB_001b7e40;
        }
      }
      else if ((local_34 & 1) == 0) {
        plVar1 = *(long **)(param_2 + 0x10);
        if (plVar1 != (long *)0x0) {
                    /* try { // try from 001b7c85 to 001b7c8a has its CatchHandler @ 001b7e87 */
          (**(code **)(*plVar1 + 8))(plVar1);
        }
        pPVar6 = local_1e0;
                    /* try { // try from 001b7c90 to 001b7ca7 has its CatchHandler @ 001b7ede */
        juce::String::String(local_160,local_138);
        uVar2 = local_34;
        local_188 = (long *)0x0;
        uStack_180 = 0;
        local_178 = (code *)0x0;
        pcStack_170 = (code *)0x0;
                    /* try { // try from 001b7cbd to 001b7cc6 has its CatchHandler @ 001b7eb5 */
        plVar5 = operator_new(0x10);
        *plVar5 = (long)plVar1;
        if (plVar1 != (long *)0x0) {
                    /* try { // try from 001b7cd6 to 001b7cdb has its CatchHandler @ 001b7e7f */
          (**(code **)(*plVar1 + 8))(plVar1);
        }
        *(int *)(plVar5 + 1) = iVar7;
        pcStack_170 = std::
                      _Function_handler<void(),juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::{lambda()#1}>
                      ::_M_invoke;
        local_178 = std::
                    _Function_handler<void(),juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::{lambda()#1}>
                    ::_M_manager;
                    /* try { // try from 001b7d12 to 001b7d21 has its CatchHandler @ 001b7e8f */
        local_188 = plVar5;
        PopupMenu::addItem(pPVar6 + -0x28,(undefined8 *)local_160,(uVar2 & 2) == 0,
                           (char)((uVar2 & 4) >> 2),&local_188);
        iVar3 = local_1cc;
        if (local_178 != (code *)0x0) {
                    /* try { // try from 001b7d36 to 001b7d44 has its CatchHandler @ 001b7e77 */
          (*local_178)(&local_188,&local_188,3);
        }
        juce::String::~String(local_160);
        param_2 = local_168;
        if (plVar1 != (long *)0x0) {
                    /* try { // try from 001b7d62 to 001b7d67 has its CatchHandler @ 001b7e6f */
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      else {
                    /* try { // try from 001b7d76 to 001b7d7a has its CatchHandler @ 001b7f2d */
        PopupMenu::addSeparator(local_1e0 + -0x28);
      }
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
    pPVar4 = local_1e8;
    pPVar6 = local_1e0;
    param_1 = local_1c8;
  }
  if ((long)pPVar6 - (long)pPVar4 == 0x28) {
                    /* try { // try from 001b7de6 to 001b7df0 has its CatchHandler @ 001b7e65 */
    PopupMenu::PopupMenu(param_1,(undefined8 *)(pPVar6 + -0x28));
    pPVar6 = local_1e8;
    pPVar4 = local_1e0;
    if (local_1e8 == local_1e0) goto joined_r0x001b7e02;
  }
  else {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    pPVar6 = local_1e8;
    pPVar4 = local_1e0;
    if (local_1e8 == local_1e0) goto joined_r0x001b7e02;
  }
LAB_001b7e40:
  do {
    juce::String::~String((String *)(pPVar6 + 0x18));
    PopupMenu::~PopupMenu(pPVar6);
    pPVar6 = pPVar6 + 0x28;
  } while (pPVar6 != pPVar4);
joined_r0x001b7e02:
  if (local_1e8 != (PopupMenu *)0x0) {
    operator_delete(local_1e8);
  }
  return param_1;
}


