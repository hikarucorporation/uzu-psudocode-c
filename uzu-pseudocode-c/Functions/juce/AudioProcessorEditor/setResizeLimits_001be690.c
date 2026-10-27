// Function : setResizeLimits
// Namespace: juce:AudioProcessorEditor
// Entry    : 001be690
// Prototype: undefined setResizeLimits(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, AudioProcessorEditor * this, int param_5, int param_6, int param_7, int param_8)
// Body     : 001be690 - 001be846


/* juce::AudioProcessorEditor::setResizeLimits(int, int, int, int) */

void __thiscall
juce::AudioProcessorEditor::setResizeLimits
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,
          AudioProcessorEditor *this,int param_5,int param_6,int param_7,int param_8)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  Desktop *this_00;
  AudioProcessorEditor *pAVar4;
  long lVar5;
  
  pAVar4 = *(AudioProcessorEditor **)(this + 0x140);
  if ((pAVar4 != (AudioProcessorEditor *)0x0) && (pAVar4 != this + 0x110)) {
    return;
  }
  this[0x108] = (AudioProcessorEditor)(param_6 != param_8 || param_5 != param_7);
  if (param_5 < 0) {
    param_5 = 0;
  }
  iVar3 = 0;
  if (-1 < param_6) {
    iVar3 = param_6;
  }
  if (param_7 <= param_5) {
    param_7 = param_5;
  }
  if (param_8 <= iVar3) {
    param_8 = iVar3;
  }
  *(int *)(this + 0x118) = param_5;
  *(int *)(this + 0x120) = iVar3;
  *(int *)(this + 0x11c) = param_7;
  *(int *)(this + 0x124) = param_8;
  if (pAVar4 != (AudioProcessorEditor *)0x0) goto LAB_001be7db;
  *(AudioProcessorEditor **)(this + 0x140) = this + 0x110;
  if ((*(ushort *)(this + 0xe8) & 1) != 0) {
    pAVar4 = this;
    do {
      if ((*(ushort *)(pAVar4 + 0xe8) & 1) != 0) {
        if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001be742 to 001be74b has its CatchHandler @ 001be85a */
          this_00 = operator_new(0x1d0);
                    /* try { // try from 001be74f to 001be756 has its CatchHandler @ 001be847 */
          param_1_00 = Desktop::Desktop(this_00);
          Desktop::instance = this_00;
        }
        if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
          lVar5 = 0;
          goto LAB_001be780;
        }
        break;
      }
      pAVar4 = *(AudioProcessorEditor **)(pAVar4 + 0x30);
    } while (pAVar4 != (AudioProcessorEditor *)0x0);
  }
  goto LAB_001be797;
  while (lVar5 = lVar5 + 8, (long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar5) {
LAB_001be780:
    if (*(AudioProcessorEditor **)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar5) + 8) ==
        pAVar4) {
      lVar1 = *(long *)(this + 0x140);
      *(long *)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar5) + 0x28) = lVar1;
      goto joined_r0x001be83f;
    }
  }
LAB_001be797:
  lVar1 = *(long *)(this + 0x140);
joined_r0x001be83f:
  if (lVar1 != 0) {
    this[0x108] = (AudioProcessorEditor)
                  (*(int *)(this + 0x120) != *(int *)(this + 0x124) ||
                  *(int *)(this + 0x118) != *(int *)(this + 0x11c));
  }
  if (*(long *)(this + 0xf8) != 0) {
                    /* try { // try from 001be7d3 to 001be82a has its CatchHandler @ 001be862 */
    param_1_00 = attachResizableCornerComponent(param_1_00,param_2_00,param_3_00,this);
  }
LAB_001be7db:
  if (*(long *)(this + 0xf8) != 0) {
    attachResizableCornerComponent(param_1_00,param_2_00,param_3_00,this);
  }
  lVar5 = *(long *)(this + 0x38);
  uVar2 = *(undefined8 *)(this + 0x40);
  if (*(long **)(this + 0x140) == (long *)0x0) {
    Component::setBounds
              ((Component *)this,(int)lVar5,(int)((ulong)lVar5 >> 0x20),(int)uVar2,
               (int)((ulong)uVar2 >> 0x20));
  }
  else {
    ComponentBoundsConstrainer::setBoundsForComponent
              (*(long **)(this + 0x140),(ComponentHelpers *)this,lVar5,uVar2,0,0);
  }
  return;
}


