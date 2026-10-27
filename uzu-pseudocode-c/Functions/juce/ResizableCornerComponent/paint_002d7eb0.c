// Function : paint
// Namespace: juce:ResizableCornerComponent
// Entry    : 002d7eb0
// Prototype: undefined paint(ResizableCornerComponent * this, undefined8 param_1)
// Body     : 002d7eb0 - 002d8084


/* juce::ResizableCornerComponent::paint(juce::Graphics&) */

void __thiscall
juce::ResizableCornerComponent::paint(ResizableCornerComponent *this,undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ResizableCornerComponent *pRVar6;
  LookAndFeel_V4 *pLVar7;
  Desktop *pDVar8;
  long *plVar9;
  long lVar10;
  undefined1 uVar11;
  long *plVar12;
  undefined8 uVar13;
  
  pRVar6 = this;
  do {
    if ((*(long *)(pRVar6 + 0x68) != 0) &&
       (pLVar7 = *(LookAndFeel_V4 **)(*(long *)(pRVar6 + 0x68) + 0x10),
       pLVar7 != (LookAndFeel_V4 *)0x0)) goto LAB_002d7f20;
    pRVar6 = *(ResizableCornerComponent **)(pRVar6 + 0x30);
  } while (pRVar6 != (ResizableCornerComponent *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d7ef9 to 002d7f02 has its CatchHandler @ 002d809a */
    pDVar8 = operator_new(0x1d0);
                    /* try { // try from 002d7f06 to 002d7f0d has its CatchHandler @ 002d8087 */
    Desktop::Desktop(pDVar8);
    Desktop::instance = pDVar8;
  }
  pLVar7 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002d7f20:
  uVar1 = *(undefined4 *)(this + 0x40);
  uVar2 = *(undefined4 *)(this + 0x44);
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar8 = operator_new(0x1d0);
                    /* try { // try from 002d802e to 002d8035 has its CatchHandler @ 002d80a2 */
    Desktop::Desktop(pDVar8);
    lVar10 = *(long *)(pDVar8 + 0x40);
    iVar3 = *(int *)(lVar10 + 0x44);
    Desktop::instance = pDVar8;
  }
  else {
    lVar10 = *(long *)(Desktop::instance + 0x40);
    iVar3 = *(int *)(lVar10 + 0x44);
  }
  lVar5 = (long)iVar3;
  if (lVar5 == 0) {
    uVar13 = 0;
  }
  else {
    plVar9 = *(long **)(lVar10 + 0x38);
    plVar12 = plVar9 + lVar5;
    lVar10 = 0;
    do {
      lVar4 = *(long *)((long)plVar9 + lVar10);
      if (((*(long *)(lVar4 + 0x48) != 0) &&
          (*(ResizableCornerComponent **)(*(long *)(lVar4 + 0x48) + 0x10) == this)) &&
         ((uVar13 = 1, (*(ushort *)(lVar4 + 0x3c) & 0x1f0) != 0 || (*(int *)(lVar4 + 0x14) != 1))))
      goto joined_r0x002d7f94;
      lVar10 = lVar10 + 8;
    } while (lVar5 * 8 != lVar10);
    uVar13 = 0;
joined_r0x002d7f94:
    if (Desktop::instance == (Desktop *)0x0) {
      pDVar8 = operator_new(0x1d0);
                    /* try { // try from 002d7fb4 to 002d7fbb has its CatchHandler @ 002d8085 */
      Desktop::Desktop(pDVar8);
      lVar10 = (long)*(int *)(*(long *)(pDVar8 + 0x40) + 0x44);
      Desktop::instance = pDVar8;
      if (lVar10 == 0) goto LAB_002d8057;
      plVar9 = *(long **)(*(long *)(pDVar8 + 0x40) + 0x38);
      plVar12 = plVar9 + lVar10;
    }
    do {
      lVar10 = *(long *)(*plVar9 + 0x48);
      if (((lVar10 != 0) && (*(ResizableCornerComponent **)(lVar10 + 0x10) == this)) &&
         ((*(ushort *)(*plVar9 + 0x3c) & 0x1f0) != 0)) {
        uVar11 = 1;
        goto LAB_002d8059;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar12);
  }
LAB_002d8057:
  uVar11 = 0;
LAB_002d8059:
                    /* WARNING: Could not recover jumptable at 0x002d8083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(pLVar7 + 0x60) + 0x10))(pLVar7 + 0x60,param_1,uVar1,uVar2,uVar13,uVar11);
  return;
}


