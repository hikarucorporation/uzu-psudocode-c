// Function : updateFromTextEditorContents
// Namespace: juce:Label
// Entry    : 00239130
// Prototype: ulong updateFromTextEditorContents(long * param_1, long param_2)
// Body     : 00239130 - 002392df


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Label::updateFromTextEditorContents(juce::TextEditor&) */

ulong __cdecl juce::Label::updateFromTextEditorContents(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  undefined8 unaff_R14;
  ulong uVar6;
  byte *local_40;
  undefined1 *local_38;
  byte *local_30;
  byte *local_28;
  
  TextEditor::ParagraphsModel::getText(&local_40,param_2 + 0x60);
                    /* try { // try from 00239155 to 0023915c has its CatchHandler @ 00239322 */
  (**(code **)(*(long *)param_1[0x2f] + 0x10))(&local_38);
                    /* try { // try from 00239167 to 00239171 has its CatchHandler @ 0023930a */
  (**(code **)(local_38 + 0x28))(&local_28,&local_30);
                    /* try { // try from 00239177 to 0023917c has its CatchHandler @ 00239302 */
  (**(code **)(local_38 + 0x58))(&local_30);
  if (local_28 == local_40) {
    uVar6 = 0;
  }
  else {
    uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (local_28,local_40);
    uVar6 = CONCAT71((int7)((ulong)unaff_R14 >> 8),uVar3 != 0);
  }
  if (local_28 != &DAT_0061ac58) {
    local_28 = local_28 + -0x10;
    LOCK();
    iVar1 = *(int *)local_28;
    *(int *)local_28 = *(int *)local_28 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(local_28);
    }
  }
  if ((char)uVar6 != '\0') {
    pbVar4 = local_40 + -0x10;
    if (pbVar4 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar4 = *(int *)pbVar4 + 1;
      UNLOCK();
    }
    LOCK();
    lVar2 = param_1[0x35];
    param_1[0x35] = (long)local_40;
    UNLOCK();
    piVar5 = (int *)(lVar2 + -0x10);
    if (piVar5 != &emptyString) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar5);
      }
    }
    local_38 = &var::Instance::attributesString;
    local_30 = local_40;
    pbVar4 = local_40 + -0x10;
    if (pbVar4 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar4 = *(int *)pbVar4 + 1;
      UNLOCK();
    }
                    /* try { // try from 00239240 to 00239247 has its CatchHandler @ 002392e8 */
    (**(code **)(*(long *)param_1[0x2f] + 0x18))();
                    /* try { // try from 00239252 to 00239254 has its CatchHandler @ 002392e0 */
    (**(code **)(local_38 + 0x58))(&local_30);
                    /* try { // try from 00239259 to 0023929e has its CatchHandler @ 00239324 */
    Component::internalRepaintUnchecked((long)param_1,0,param_1[8],'\x01');
    (**(code **)(*param_1 + 0x1a8))(param_1);
    if ((param_1[0x3e] != 0) && (lVar2 = *(long *)(param_1[0x3e] + 0x10), lVar2 != 0)) {
      (**(code **)(*param_1 + 0x1c0))(param_1,lVar2,1,1);
    }
  }
  local_40 = local_40 + -0x10;
  if (local_40 != (byte *)&emptyString) {
    LOCK();
    iVar1 = *(int *)local_40;
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(local_40);
    }
  }
  return uVar6 & 0xffffffff;
}


